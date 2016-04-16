package pkg;

public class Increment
{

	public static void main(String[] args) 
	{
		StringBuilder sno = new StringBuilder("9999");
		System.out.println("Before : "+ sno);

		char ch;
		int length = sno.length(), i = length-1, flag = 0;
		while(i>=0)
		{
			ch = sno.charAt(i);			
			if(ch == '9')
			{
				ch = '0';
				sno.replace(i, i+1, Character.toString(ch));
				flag = 1;
				i--;
				if(flag==1 && i < 0)
				{
					sno.insert(0, "1");
					break;
				}
			}
			else
			{
				ch = (char) (ch + (char) 1);
				sno.replace(i, i+1, Character.toString(ch));
				flag = 0;
				break;
			}
		}
		
		System.out.println("After  : "+ sno);

		
	}

}
