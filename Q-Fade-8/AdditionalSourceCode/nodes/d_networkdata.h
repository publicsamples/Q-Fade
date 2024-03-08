namespace project
{

struct d_networkdata: public scriptnode::dll::InterpretedNetworkData
{
	String getId() const override
	{
		return "d";
	}
	bool isModNode() const override
	{
		return false;
	}
	String getNetworkData() const override
	{
		return "403.nT6K8ClUBzDC.Xa0FUB.wZd..PZXpi2jIqo0puCDWq+0WpqUHqsRldnppxZ55uG0vSJE7..O.rC..vqO80ZLylF1oLZQZQ8SYrZRkZD30RULhMTzJoHj.38mnSXd8ku7d.dmTYk5mXm5.38QD.30BJpFU+j.ZhRVe4s1AuOFWhSLkRZdc7XhTwH1kwPK.uZ9oYDlWHLuarJ9PyeICFpCUxntpTe0EYk9fsRF0t25OQmDLnH2wwdNl6Ixw0bGnGKB9VvNAXC5MHi4NKuSXYMA6Fo4iwEOEj1.nm683zZQPOND1ZKuUfWMdKn3dAwtac5uPQb9PWvOQkrgjRlu5o8fZumHmC5KTwTZohRwPg4N3yCBc2cbl6v5t6oLBwiHsiGigd.AXcKQzK.Kf.EXL0j8zE3g8DPPRTo.djoL39mgGdvHDXlHUY.bxDGOI2JKXW.fXwvzBX69ntwDX2UXIB5YVsg1ktENfrHeAsQIHXLJHSfqVKDQxYKD.VxYQXEgylaGa.2CKHO+olqVG.JeQgVdgfXbF.";
	}
};
}

