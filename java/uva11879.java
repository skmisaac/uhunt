///**
// * uva 11879 - Multiple of 17
// */
//import java.math.BigInteger;
//import java.util.Scanner;
//
//class Main {
//  public static void main(String[] args) {
//	  Scanner sc = new Scanner(System.in);
//	  while (sc.hasNext())
//	  {
//          BigInteger n = sc.nextBigInteger();
//          if ( n.compareTo(BigInteger.ZERO) == 0 ) break;
//          else if ( n.compareTo(BigInteger.valueOf(17)) == -1 ) System.out.println(0);
//          else if ( n.remainder(BigInteger.valueOf(17)).compareTo(BigInteger.ZERO) == 0 )
//        	  System.out.println(1);
//          else
//        	  System.out.println(0);
//    
////          else if ( n.compareTo(BigInteger.valueOf(17)) == 0) System.out.println(1);
////          else
////          {
////        	  BigInteger lastDigit = n.remainder(BigInteger.valueOf(10));
////        	  BigInteger diff = n.divide(BigInteger.valueOf(10)).subtract(lastDigit.multiply(BigInteger.valueOf(5)));
////        	  if ( diff.mod(BigInteger.valueOf(17)).compareTo(BigInteger.ZERO) == 0 )
////                  System.out.println(1);
////        	  else
////                  System.out.println(0);
////          }
//	  }
//	
//	  sc.close();
//  }
//}