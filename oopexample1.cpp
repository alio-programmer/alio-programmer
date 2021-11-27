#include<iostream>
#include<string>
using namespace std;
class cars{
    private:
    //memeber variables or data members
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    float price;

    public:
        //member function
        void setdata(string cname, string mname, string ftype, float m, double p){
            company_name = cname;
            model_name = mname;
            fuel_type = ftype;
            mileage = m;
            price = p;
        }
        void displaydata(){ 
            cout<<"car properties"<<endl<<endl<<endl;
            cout<<"car company:"<<company_name<<endl<<endl;
            cout<<"car model:"<<model_name<<endl<<endl;
            cout<<"car fueltype:"<<fuel_type<<endl<<endl;
            cout<<"car mileage:"<<mileage<<endl<<endl;
            cout<<"car price:"<<price<<endl<<endl;
        }

};
int main(){
    cars car1;
    car1.setdata("toyota", "altis", "petrol", 15.5, 150000);
    car1.displaydata();
}
