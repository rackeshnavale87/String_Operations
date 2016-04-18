public class ReverseWords 
{
	public static void main(String[] args) 
	{
		String str = "Rakesh Sharad Navale";
		
		str = getTokens(str);
		str = reverseWord(str);
		
		System.out.println(str);
	}

	private static String getTokens(String str) 
	{
		int n = 0;
		String ans = "";
		String tokens[] = str.split(" ");
		while(tokens.length > n)
		{
			tokens[n] = reverseWord(tokens[n]);
			n++;
		}
		for(n = 0; n < tokens.length;n++)
		{
			ans = ans.concat(tokens[n]);
			if(tokens.length - n >1)
			{
				ans = ans.concat(" ");
			}
		}
		return ans;
	}

	private static String reverseWord(String str1) 
	{
		int i = 0, length = str1.length();
		char word[] = str1.toCharArray();
		while(i< length/2)
		{
			char temp = word[i];
			word[i] = word[length-1-i];
			word[length-1-i] = temp;
			i++;
		}
		return new String(word);
	}

}
