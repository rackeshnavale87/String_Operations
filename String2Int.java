public class String2Int 
{

	public static void main(String[] args) 
	{
		String snum = "-1234";
		int inum = 0;
		if(snum.charAt(0)=='-')
			inum = (-1) * getInt(snum.substring(1));
		else
			inum = getInt(snum);
		System.out.println("Integer value of given String number : "+ inum);
	}
	
	private static int getInt(String snum) 
	{
		char cnum[] = snum.toCharArray();
		int length = cnum.length, index = length-1;
		int ans = 0,value = 0, i = 1;
		while(length>0)
		{
			value = cnum[index] - '0';
			value = value * i;
			ans = ans + value;
			i = i * 10;
			length--; index--;
		}
		return ans;
	}

}
