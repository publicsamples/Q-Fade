Content.makeFrontInterface(600, 600);

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
 