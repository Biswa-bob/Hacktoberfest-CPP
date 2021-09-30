package string;
import java.util.*;
public class anagram2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		String a=sc.next();
		String b=sc.next();
				
       boolean isAnagram=false;
       int al[]=new int[256];
       int bl[]=new int[256];
       
       for(char c: a.toCharArray() ) {
    	   int index=(int)c;
    	   al[index]+=1;
       }
       for(char c: b.toCharArray() ) {
    	   int index=(int)c;
    	   bl[index]+=1;
       }
       isAnagram=true;
       for(int i=0;i<256;i++)
       {
    	   if(al[i]!=bl[i])
    	   {
    		   isAnagram=false;
    		   break;
    	   }
       }
       if(isAnagram) 
    	   System.out.println("anagram");
    	   else
    		   System.out.println("not");
       }
	}


