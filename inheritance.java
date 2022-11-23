import java.util.*;

public class Shape {
    double height, base; // base data memebers 
        

    double area(double height , double base){   //base class area 
        
        double result = height*base ;
        
        return result;      
    }
    
      
}
class Rectangle extends Shape{   //inheriting class shape
    
        Rectangle(){            //cerating class contructor  to take value
            Shape o1 = new Shape();
            Scanner obj1 = new Scanner(System.in);
            System.out.println("Enter the height of the shape:");
            o1.height = obj1.nextDouble();
            Scanner obj2 = new Scanner(System.in);
            System.out.println("Enter the base of the shape:");
            o1.base = obj2.nextDouble();
            
            double area = o1.area(o1.height, o1.base);
            System.out.println("area of your rectangle is:"+" "+area);
        }
               
}

class Triangle extends Shape{   //inheriting class shape
    
        Triangle(){              //cerating class contructor  to take value
            Shape o2 = new Shape();
            Scanner obj1 = new Scanner(System.in);
            System.out.println("Enter the height of the shape:");
            o2.height = obj1.nextDouble();
            Scanner obj2 = new Scanner(System.in);
            System.out.println("Enter the base of the shape:");
            o2.base = obj2.nextDouble();
            double area = o2.area(o2.height, o2.base);
            double areaoftriangle = area/2;
            System.out.println("area of your triangle is:"+" "+areaoftriangle);
        }
               
}
class User{
    public static void main(String[] args){
        int choice;
        int cont;
        do{
            System.out.println("what do you want to calculate(1.rectangle 2.triangle:");
            Scanner x = new Scanner(System.in);
            choice = x.nextInt();
            if(choice==1){
                Rectangle r1 = new Rectangle();
            }
            else if(choice==2){
                Triangle t1 = new Triangle();    
            }
            System.out.println("do you want to contiue:1 for yes, 2 for no");
            Scanner y = new Scanner(System.in);
            cont = y.nextInt();
            
        }while(cont==1);
                         
    }
    
}
