import java.util.*;

class exception1{
    
    void airthmeticexception(){
        Scanner obj1 = new Scanner(System.in);
        boolean valid = false;
        
        while(!valid){
            try{
                System.out.println("enter two numbers to be divided:");
                int num1 = obj1.nextInt();
                int num2 = obj1.nextInt();
                double num3 = num1/num2;
                System.out.println("The number is:"+" "+num3);
                valid = true;
            }
            catch(java.lang.Exception e){
                
                System.out.println("Ivalid number are entered\nEnter again\n");
           
            }
        }
        
    }
    void arrayoutofbound(int []arr){
        Scanner obj1 = new Scanner(System.in);
        boolean valid = false;
        
        while(!valid){
            try{
                System.out.println("enter numbers to be searched");
                int i = obj1.nextInt();
                System.out.println("The number is:"+" "+arr[i]);
                valid = true;
            }
            catch(java.lang.Exception e)
            {
                
                System.out.println("Array index entered is out of range\nEnter again:\n");
           
            }
        }
        
    }
    void Numberformat(){
        Scanner obj1 = new Scanner(System.in);
        boolean valid = false;
        
        while(!valid){
            try{
                System.out.println("Enter two numbers:");
                String a = obj1.nextLine();
                String b = obj1.nextLine();
                int num1 = Integer.parseInt(a);
                int num2 = Integer.parseInt(b);
                System.out.println("The two numbers are:"+num1+" and "+num2);
                valid = true;
            }
            catch(java.lang.Exception e){
                
                System.out.println("Numbers you have enterd are not integers\nEnter again\n");
           
            }
        }
        
    }
}
public class exception6{

    public static void main(String []args) {
        exception1 e = new exception1();
        Scanner obj2 = new Scanner(System.in);
        int n;
        do{
            System.out.println("WHAT EXCEPTION DO YOU WANT TO SIMULATE:");
            System.out.println("1)Airthmetic Exception\n2)Array out of bound exception\n3)Number format exception\n4)Exit");
            n = obj2.nextInt();
            
            switch(n){
                case 1:
                    e.airthmeticexception();
                    System.out.println("==================================================");
                    break;
                
                case 2:
                    int []arr={1,2,3,4,5};
                    e.arrayoutofbound(arr);
                    System.out.println("==================================================");
                    break;
                    
                case 3:
                    e.Numberformat();
                    System.out.println("==================================================");
                    break;
                   
                case 4:
                    n = 0;
                    System.out.println("==================================================");
                    break;
                    
                default:
                    System.out.println("INVALID INPUT!!!\n TRY AGAIN\n");
                    
            }
        }while(n!=0);
    }
     
}
