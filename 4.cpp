static int nA = 10;
void main()
{
	{
		int nC;
		int nB;
		int nA = 5;//локальна має більший пріорітет ніж глобальна 
		nC = nA * 12;// = 60
		nB = ::nA * 12;// = 120
	}
}