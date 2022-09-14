class Complex{
    int real;
    int img;
    void set_ri(int real, int img){
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
    public static void main(String[] args) {
        Complex C1 = new Complex();
        C1.real=3;
        C1.img=2;
        C1.printComplexNumber();
        System.out.println("\n");
        Complex C2 = new Complex();
        C2.real=9;
        C2.img=5;
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
