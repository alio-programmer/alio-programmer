import java.util.Scanner;
class helloworld{
    public static void main(String[] args) {
        int result=0;
        System.out.println("Enter the numbers:");
        for(int i=0; i<5; i++){
            Scanner myObj = new Scanner(System.in);   
            int num1 = myObj.nextInt();
            result=result+num1;
        }
        System.out.println("the addition of two given number is:"+result);
    }
}
