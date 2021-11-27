/*pointer to object and passing object as arguments and returning objects */
/*complex number
1)imaginary part
2)real part */
#include<iostream>
#include<string>
using namespace std;
class complexnumbers{
    private:
        int realnumber;
        float imaginarypart;
    public:
        complexnumbers(){

        }
        complexnumbers(int r, float i){
            realnumber=r;
            imaginarypart=i;

        }
       
        void displaydata(){
            cout<<"The complex number is: "<<realnumber<<" + "<<imaginarypart<<"i"<<endl<<endl;

        }
        int getrealpart(){

            return realnumber;
        }
        float getimaginarypart(){

            return imaginarypart;

        }

};
complexnumbers addingcomplex(complexnumbers n1, complexnumbers n2){

    int r;
    float i;
    r=n1.getrealpart() + n2.getrealpart();
    i=n1.getimaginarypart() + n2.getimaginarypart();
    complexnumbers temp(i,r);
    return temp;
 
}
int main(){
    complexnumbers comp1(5, 4), comp2(3, 4), comp3;
    comp1.displaydata();
    comp2.displaydata();
    comp3 = addingcomplex(comp1, comp2);
    comp3.displaydata();
    return 0;
}
