class Oddeven {  
 public static void main(String[] args) {  
  int a;  
  System.out.println("Please enter the number ");  
  Scanner in = new Scanner(System.in);  
  a = in .nextInt();  
  if (a % 2 == 0) {  
   System.out.println("this number is even num");  
  } else {  
   System.out.println("this number is odd num");  
  }  
 }  
}   