import java.util.*;
class Complex{
    float real;
    float img;
    void set_ri(float real, float img){
        this.real=real;
        this.img=img;
    }
    Complex addComp(Complex C1, Complex C2)
    {
        Complex temp = new Complex();
        temp.real = C1.real + C2.real;
        temp.img = C1.img + C2.img;
        return temp;
    }
    Complex subComp(Complex C1, Complex C2)
    {
        Complex temp = new Complex();
        temp.real = C1.real - C2.real;
        temp.img = C1.img - C2.img;
        return temp;
    }
    void printComplexNumber(){
        System.out.println("the imaginary number is:"+real+" + "+img+"i");
    }
    
}

public class exception1 {
    public static void main(String[] args) {  
        float real1;
        float img1;
        Complex C1 = new Complex();
        System.out.println("enter the real part of 1st number:");
        Scanner obj1 = new Scanner(System.in);
        real1 = obj1.nextFloat();
        System.out.println("enter the imaginary part of 1st number:");
        Scanner obj2 = new Scanner(System.in);
        img1 = obj2.nextFloat();
        C1.set_ri(real1, img1);
        C1.printComplexNumber();
        System.out.println("\n");
        Complex C2 = new Complex();
        System.out.println("enter the real part of 2nd number:");
        Scanner obj3 = new Scanner(System.in);
        real1 = obj3.nextFloat();
        System.out.println("enter the imaginary part of 2nd number:");
        Scanner obj4 = new Scanner(System.in);
        img1 = obj4.nextFloat();
        C2.set_ri(real1, img1);
        C2.printComplexNumber();
        System.out.println("\n");
        Complex C3 = new Complex();
        C3 = C3.addComp(C1, C2);
        System.out.print("Sum of ");
        C3.printComplexNumber();
        System.out.println("\n");
        C3 = C3.subComp(C1, C2);
        System.out.print("Difference of ");
        C3.printComplexNumber();
        System.out.println("\n");
    }
    
}
        
