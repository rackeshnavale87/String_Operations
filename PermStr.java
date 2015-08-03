package pkg;

public class PermStr 
{
	static int count = 0;	
	public static void main(String[] args) 
	{
		String str = "ABCD";
		permutation("", str);
		System.out.println("Total permutations of given strings are : "+count);
	}

	private static void permutation(String prefix, String str) 
	{
		int n = str.length();
        if (n == 0) 
        {
            System.out.println(prefix);
            count++;
        }
        else 
        {
            for (int i = 0; i < n; i++)
                permutation(prefix + str.charAt(i), str.substring(0, i) + str.substring(i+1));
        }
	}
}
