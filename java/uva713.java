///**
// * uva 713 - Adding Reversed Numbers
// */
//import java.math.BigInteger;
//import java.util.Scanner;
//
//class Main {
//  public static void main(String[] args) {
//	  Scanner sc = new Scanner(System.in);
//	  int N = sc.nextInt();
//	  
//	  while (N-- > 0)
//	  {
//		  BigInteger sum = BigInteger.ZERO;
//		  BigInteger A = sc.nextBigInteger();
//		  BigInteger B = sc.nextBigInteger();
//		  
//		  String revA = new StringBuffer(A.toString()).reverse().toString();
//		  BigInteger BIRevA = new BigInteger(revA);
//		  
//		  String revB = new StringBuffer(B.toString()).reverse().toString();
//		  BigInteger BIRevB = new BigInteger(revB);
//		  
//		  sum = sum.add(BIRevA);
//		  sum = sum.add(BIRevB);
//		  
//		  String revSum = new StringBuffer(sum.toString()).reverse().toString();
//		  BigInteger BIRevSum = new BigInteger(revSum);
//		  System.out.println(BIRevSum);
//	  }
//	  sc.close();
//  }
//}