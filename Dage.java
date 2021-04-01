package com.company;
import java.util.*;

public class Dage {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a;
        double Dage;
        System.out.print("输入狗的年龄：");
        int age = in.nextInt();
        if (age > 2) {
            a = age - 2;
            Dage = 2 * 10.5 + a * 4;
            System.out.print("狗的年龄：" + Dage);

        }
        else {
            Dage = age * 10.5;
            System.out.print("狗的年龄：" + Dage);
        }

    }
}
