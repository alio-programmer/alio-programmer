import java.util.*;
interface vehicle {
    void gear_change(int x);
    void speed_up();
    void breaks();
    void display();
    }
class Bicycle implements vehicle{
    int speed,gear;
Bicycle(){
int gear=1;
int speed=10;

}
public void gear_change(int gearx){
if (gearx <=6 && gearx >0 ){
    int gear =gearx;
System.out.println("change gear is="+gear);
}
else {
System.out.println("invalid gear ");
}
}
public void speed_up(){
if (speed>10 && speed <50){
speed=speed+5;
System.out.println("chage speed is="+speed);
}
}
public void breaks(){
int choice;
Scanner sc=new Scanner(System.in);
System.out.println("enter the choice 1:stop car  2:reduce the speed");
choice =sc.nextInt();
if(choice==1){
    speed=0;
    gear=0;
    System.out.println("bicycle is stopped");
}
else if(choice==2){
speed=-5;
gear=-1;
System.out.println("current speed and gear id/n"+speed +gear);
}
else{
System.out.println("invalid condition");
}
}
public void display(){
    System.out.println("speed of the car"+speed);
    System.out.println("gear is on"+gear);
}
}
class Car implements vehicle{
int speed,gear;
Car(){
int gear=1;
int speed=10;

}
public void gear_change(int gearx){
if (gearx <=6 && gearx >0 ){
    int gear =gearx;
System.out.println("change gear is="+gear);
}
else {
System.out.println("invalid gear ");
}
}
public void speed_up(){
if (speed>10 && speed <150){
speed=speed+5;
System.out.println("chage speed is="+speed);
}
}
public void breaks(){
int choice;
Scanner sc=new Scanner(System.in);
System.out.println("enter the choice 1:stop car  2:reduce the speed");
choice =sc.nextInt();
if(choice==1){
    speed=0;
    gear=0;
    System.out.println("bicycle is stopped");
}
else if(choice==2){
speed=-5;
gear=-1;
System.out.println("current speed and gear id/n"+speed +gear);
}
else{
System.out.println("invalid condition");
}
}
public void display(){
    System.out.println("speed of the car"+speed);
    System.out.println("gear is on"+gear);
}
}
class bike implements vehicle{
    int speed,gear;
bike(){
int gear=1;
int speed=10;

}
public void gear_change(int gearx){
if (gearx <=6 && gearx >0 ){
    int gear =gearx;
System.out.println("change gear is="+gear);
}
else {
System.out.println("invalid gear ");
}
}
public void speed_up(){
if (speed>10 && speed <100){
speed=speed+5;
System.out.println("chage speed is="+speed);
}
}
public void breaks(){
int choice;
Scanner sc=new Scanner(System.in);
System.out.println("enter the choice 1:stop car  2:reduce the speed");
choice =sc.nextInt();
if(choice==1){
    speed=0;
    gear=0;
    System.out.println("bicycle is stopped");
}
else if(choice==2){
speed=-5;
gear=-1;
System.out.println("current speed and gear id/n"+speed +gear);
}
else{
System.out.println("invalid condition");
}
}
public void display(){
    System.out.println("speed of the car"+speed);
    System.out.println("gear is on"+gear);
}
}
class exp5{
public static void main(String []arg){
vehicle s =null;
do{
int choice ;

int x;
Scanner sc =new Scanner (System.in);
System.out.println("enetr the choice =1:bicycle 2:car 3:bike");
choice=sc.nextInt();
if(choice ==1){
    Bicycle v=new Bicycle();
}
else if(choice ==2){
Car v=new Car();
}
else if (choice==3){
    bike v=new bike();
}
else{
      break ;
}
}while (choice)
}
}
