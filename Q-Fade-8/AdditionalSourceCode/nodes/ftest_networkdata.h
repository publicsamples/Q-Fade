namespace project
{

struct ftest_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "ftest";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "345.nT6K8CFqBzmB.XcT4LBHIac.ODlSYi7TmwRZogASg8.epQVA3AuJPPfBdA5cEk.aK+B.u.vK.vUhb7F53GFi1ATZkmijwieDmvAk1sHjRoKmkyBFcRumnureoEgRQ3QiRs3QLeCEJTZOe7Ds8PJ42AahLMt26onG4vjkbZewKmrj5927hJ6VDpQoq8fRasTxSYLPgtfpONparFONJ3wwyhsHnAmjo9kvXfgnKm0tPGjUoqRUo2eegcNxkIzJfpN+lP1oroxuo3rBUhdGFIrEf98b7uArVKFrMwytstmjOMXvPnvn642bJNsKrDwKz5VZUvnJf.lADT1tC.wD..iphTLdgf2cJM7XfcOZgDhEiCG.4MKf.C+NUngV0gs7ptj03GHbobjOtACDAXDbGTNLlKwKixtTGBpjn1a8rCKKAlWS6gR8J.tKqbXIDD.ZdUuG.N2ZFwbIx5kG";
	}
};
}

