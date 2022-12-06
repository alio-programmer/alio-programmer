import java.util.*;
class Complex{
    
    float real;
    float img;
    
    void set(float a, float b){
        real = a;
        img = b;
    }
    
    Complex addcomp(Complex C1, Complex C2){
        Complex temp = new Complex();
        temp.real = C1.real + C2.real;
        temp.img = C1.img+ C2.img;
        
        return temp;
    }
    
    Complex subcomp(Complex C1, Complex C2){
        Complex temp = new Complex();
        temp.real = C1.real - C2.real;
        temp.img = C1.img - C2.img;
        
        return temp;
    }
    
    void printcomp(){
        System.out.print("complex number is:"+real+"+"+img+"i"+"\n");
    }
    
    
}
public class NewClass {
    
    public static void main(String args[]){
        float real;
        float img;
        Scanner obj1 = new Scanner(System.in);
        System.out.println("ENTER THE REAL PART OF FIRST NUMBER");
        real = obj1.nextFloat();
        System.out.println("ENTER THE IMAGAINARY PART OF FIRST NUMBER");
        img = obj1.nextFloat();
        Complex C1 = new Complex();
        C1.set(real, img);
        Scanner obj2 = new Scanner(System.in);
        System.out.println("ENTER THE REAL PART OF SECOND NUMBER");
        real = obj2.nextFloat();
        System.out.println("ENTER THE IMAGINARY PART OF SECOND NUMBER");
        img = obj2.nextFloat();
        Complex C2 = new Complex();
        C2.set(real, img);
        Complex C3 = new Complex();
        C3.addcomp(C1,C2);
        C3.printcomp();
        Complex C4 = new Complex();
        C4.addcomp(C1,C2);
        C4.printcomp();
    }
}
        
