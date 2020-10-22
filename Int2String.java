public class Int2String 
{
	public static void main(String[] args) 
	{
		int inum = -123;
		String snum = "";
		if(inum < 0)
		{
			snum = "-";
			snum = snum + getNum((-1)*inum);
		}
		else
		{
			snum = getNum(inum);
		}
		System.out.println("String representation :"+ snum);
	}

	private static String getNum(int temp) 
	{
		int value = temp, ans = 0, i = 0;
		while(value > 0)
		{
			value = value / 10;
			i++;
		}
		char chnum[] = new char[i];
		value = i  = 0;
		while(temp > 0)
		{
			value = temp % 10;
			temp = temp/10;
			chnum[chnum.length -1 - i] = (char) ('0' + value);
			i++;
		}
		return new String(chnum);
	}
}
