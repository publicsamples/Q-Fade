#pragma once

// These will improve the readability of the connection definition

#define getT(Idx) template get<Idx>()
#define connectT(Idx, target) template connect<Idx>(target)
#define getParameterT(Idx) template getParameter<Idx>()
#define setParameterT(Idx, value) template setParameter<Idx>(value)
#define setParameterWT(Idx, value) template setWrapParameter<Idx>(value)
using namespace scriptnode;
using namespace snex;
using namespace snex::Types;

namespace Gran_impl
{
// ===================| Node & Parameter type declarations |===================

namespace Gran_t_parameters
{
// Parameter list for Gran_impl::Gran_t --------------------------------------

template <int NV>
using Position = parameter::plain<project::granular<NV>, 0>;
template <int NV>
using Feed = parameter::plain<project::granular<NV>, 1>;
template <int NV>
using Pop = parameter::plain<project::granular<NV>, 2>;
template <int NV>
using speed = parameter::plain<project::granular<NV>, 3>;
template <int NV>
using Size = parameter::plain<project::granular<NV>, 4>;
template <int NV>
using Gran_t_plist = parameter::list<Position<NV>, 
                                     Feed<NV>, 
                                     Pop<NV>, 
                                     speed<NV>, 
                                     Size<NV>>;
}

template <int NV>
using Gran_t_ = container::chain<Gran_t_parameters::Gran_t_plist<NV>, 
                                 wrap::fix<2, project::granular<NV>>>;

// ======================| Root node initialiser class |======================

template <int NV> struct instance: public Gran_impl::Gran_t_<NV>
{
	
	struct metadata
	{
		static const int NumTables = 0;
		static const int NumSliderPacks = 0;
		static const int NumAudioFiles = 0;
		static const int NumFilters = 0;
		static const int NumDisplayBuffers = 0;
		
		SNEX_METADATA_ID(Gran);
		SNEX_METADATA_NUM_CHANNELS(2);
		SNEX_METADATA_ENCODED_PARAMETERS(78)
		{
			0x005B, 0x0000, 0x5000, 0x736F, 0x7469, 0x6F69, 0x006E, 0x0000, 
            0x0000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x126F, 
            0x3A83, 0x015B, 0x0000, 0x4600, 0x6565, 0x0064, 0x0000, 0x0000, 
            0x0000, 0x4000, 0x0000, 0x3F80, 0x0000, 0x3F80, 0x126F, 0x3A83, 
            0x025B, 0x0000, 0x5000, 0x706F, 0x0000, 0x0000, 0x0000, 0x8000, 
            0x003F, 0x8000, 0x003F, 0x8000, 0x6F3F, 0x8312, 0x5B3A, 0x0003, 
            0x0000, 0x7073, 0x6565, 0x0064, 0x0000, 0x3E00, 0x0000, 0x4080, 
            0x0000, 0x3F80, 0x0000, 0x3F80, 0x126F, 0x3A83, 0x045B, 0x0000, 
            0x5300, 0x7A69, 0x0065, 0x0000, 0x4080, 0x8000, 0x463B, 0x0000, 
            0x3F80, 0x0000, 0x3F80, 0x126F, 0x3A83, 0x0000
		};
	};
	
	instance()
	{
		// Node References ---------------------------------------------------
		
		auto& faust = this->getT(0); // project::granular<NV>
		
		// Parameter Connections ---------------------------------------------
		
		this->getParameterT(0).connectT(0, faust); // Position -> faust::decal
		
		this->getParameterT(1).connectT(0, faust); // Feed -> faust::feedback
		
		this->getParameterT(2).connectT(0, faust); // Pop -> faust::population
		
		this->getParameterT(3).connectT(0, faust); // speed -> faust::speed
		
		this->getParameterT(4).connectT(0, faust); // Size -> faust::taille
		
		// Default Values ----------------------------------------------------
		
		; // faust::decal is automated
		; // faust::feedback is automated
		; // faust::population is automated
		; // faust::speed is automated
		; // faust::taille is automated
		
		this->setParameterT(0, 1.);
		this->setParameterT(1, 1.);
		this->setParameterT(2, 1.);
		this->setParameterT(3, 1.);
		this->setParameterT(4, 1.);
	}
	
	static constexpr bool isPolyphonic() { return NV > 1; };
	
	static constexpr bool hasTail() { return true; };
	
	static constexpr bool isSuspendedOnSilence() { return false; };
};
}

#undef getT
#undef connectT
#undef setParameterT
#undef setParameterWT
#undef getParameterT
// ===========================| Public Definition |===========================

namespace project
{
// polyphonic template declaration

template <int NV>
using Gran = wrap::node<Gran_impl::instance<NV>>;
}


