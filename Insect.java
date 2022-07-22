public class Insect {
     //instance variable
     private double weight;
     private int x;
     private int y;

    //constructor
    public Insect(double initWeight, int initX, int initY){
        weight =  initWeight;
        x = initX;
        y = initY;
    }
     //constructor
     public static void main(String[] args){
        Insect buzz1 = new Insect(10,5,100);
        Insect buzz2 = new Insect(10,15,300);
        Insect bug1 = new Insect(10,100,90);
        Insect bug2 = new Insect(4,-300,400);

     }
}
