import java.util.Scanner;

public class sum {
    public static void main(String[] args){
        /* int a=12;
        int b=22;
        int c=11;
        int sum= a+b+c;
        System.out.println(sum);*/

        //program to calculate cgpa
        float phy=76,chem=89,math=98;
        // Scanner s= new Scanner(System.In);
        // System.out.println("Enter phy chem and math's marks out of 100 each :");
        // phy = s.nextInt();
        // chem = s.nextInt();
        // math = s.nextInt();
        float percentage = (phy+chem+math)/3;
        System.out.println(percentage);
        float cgpa= percentage/9.5f;
        System.out.println(cgpa);
    }
}