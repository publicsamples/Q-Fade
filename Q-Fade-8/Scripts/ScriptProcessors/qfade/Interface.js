Content.makeFrontInterface(630, 540);

Engine.loadFontAs("{PROJECT_FOLDER}Montserrat-Medium.ttf", "Montserrat");

const var Gain = Synth.getEffect("Gain");
const var Filter = Synth.getEffect("Filter");
const var EQ = Synth.getEffect("EQ");


const var FxSet = [];

FxSet[0] = Content.getComponent("FilterSettings");
FxSet[1] = Content.getComponent("EqSettings");

const var Fx = [];

Fx[0] = Synth.getEffect("EQ");
Fx[1] = Synth.getEffect("Filter");


inline function onFxTypeControl(component, value)
{
	for (i = 0; i < FxSet.length; i++)
        FxSet[i].showControl(value - 1 == i);
        
        for (i = 0; i < Fx.length; i++)
                Fx[i].setBypassed(value - 1 == i);
};

Content.getComponent("FxType").setControlCallback(onFxTypeControl);

const var MODSEL3 = Content.getComponent("MODSEL3");
const var MODSEL4 = Content.getComponent("MODSEL4");


const var Gmod1 = Synth.getModulator("Gmod1");
const var Gmod2 = Synth.getModulator("Gmod2");

const var mods3 = [];

mods3[0] = Content.getComponent("LFO1");
mods3[1] = Content.getComponent("Table3");
mods3[2] = Content.getComponent("8step3");
mods3[3] = Content.getComponent("8Trig3");

const var mods4 = [];

mods4[0] = Content.getComponent("LFO2");
mods4[1] = Content.getComponent("Table4");
mods4[2] = Content.getComponent("8step4");
mods4[3] = Content.getComponent("8Trig4");




inline function onMODSEL3Control(component, value)

{

	if(value == 1)
	{
	
	Gmod1.setAttribute(Gmod1.modsel, 0);
      mods3[0].showControl(1);  
      mods3[1].showControl(0);   
      mods3[2].showControl(0);  
      mods3[3].showControl(0);    
         
	}
	
		if(value == 2)
	{

      Gmod1.setAttribute(Gmod1.modsel, 1.7);
      mods3[0].showControl(0);  
      mods3[1].showControl(1);   
      mods3[2].showControl(0);  
      mods3[3].showControl(0);  
	  
	}
	
	if(value == 3)
	{
	
	Gmod1.setAttribute(Gmod1.modsel, 2.7);
   mods3[0].showControl(0);  
      mods3[1].showControl(0);   
      mods3[2].showControl(1);  
      mods3[3].showControl(0);  
	  
	}
	
	if(value == 4)
	{
	
	Gmod1.setAttribute(Gmod1.modsel, 4);
   mods3[0].showControl(0);  
      mods3[1].showControl(0);   
      mods3[2].showControl(0);  
      mods3[3].showControl(1);  
	  
	}
};


Content.getComponent("MODSEL3").setControlCallback(onMODSEL3Control);

inline function onMODSEL4Control(component, value)

{

	if(value == 1)
	{
	
	Gmod2.setAttribute(Gmod2.modsel, 0);
      mods4[0].showControl(1);  
      mods4[1].showControl(0);   
      mods4[2].showControl(0);  
      mods4[3].showControl(0);    
         
	}
	
		if(value == 2)
	{

      Gmod2.setAttribute(Gmod2.modsel, 1.7);
      mods4[0].showControl(0);  
      mods4[1].showControl(1);   
      mods4[2].showControl(0);  
      mods4[3].showControl(0);  
	  
	}
	
	if(value == 3)
	{
	
	Gmod2.setAttribute(Gmod2.modsel, 2.7);
   mods4[0].showControl(0);  
      mods4[1].showControl(0);   
      mods4[2].showControl(1);  
      mods4[3].showControl(0);  
	  
	}
	
	if(value == 4)
	{
	
	Gmod2.setAttribute(Gmod2.modsel, 4);
   mods4[0].showControl(0);  
      mods4[1].showControl(0);   
      mods4[2].showControl(0);  
      mods4[3].showControl(1);  
	  
	}
};


Content.getComponent("MODSEL4").setControlCallback(onMODSEL4Control);
function onNoteOn()
{
	
}
 function onNoteOff()
{
	
}
 function onController()
{
	
}
 function onTimer()
{
	
}
 function onControl(number, value)
{
	
}
 