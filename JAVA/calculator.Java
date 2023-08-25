import java.util.*;
class Calculator {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int choice;
        do {
            System.out.println("Enter a number between 1 and 5: ");
            System.out.println("1: addition");
            System.out.println("2: subtraction");
            System.out.println("3: multiplication");
            System.out.println("4: division");
            System.out.println("5: factorial");
            System.out.print("Enter Choice = ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    int a, b;
                    System.out.println("Enter two numbers: ");
                    a = sc.nextInt();
                    b = sc.nextInt();
                    System.out.println("a + b = " + (a + b));
                    break;

                case 2:
                    System.out.println("Enter two numbers: ");
                    a = sc.nextInt();
                    b = sc.nextInt();
                    System.out.println("a - b = " + (a - b));
                    break;

                case 3:
                    System.out.println("Enter two numbers: ");
                    a = sc.nextInt();
                    b = sc.nextInt();
                    System.out.println("a * b = " + (a * b));
                    break;

                case 4:
                    System.out.println("Enter two numbers: ");
                    a = sc.nextInt();
                    b = sc.nextInt();
                    System.out.println("a / b = " + ((float) a / b));
                    break;

                case 5:
                    int fact = 1;
                    int i = 1;
                    System.out.println("Enter a number: ");
                    int num = sc.nextInt();
                    for (i = 1; i <= num; i++) {
                        fact = fact * i;
                    }
                    System.out.println("fact is  " + fact);
                    break;

                default:
                    System.out.println("Invalid choice");
            }
        }while (choice != 6);

        sc.close();
    }
}



import java.util.Scanner;        //using while loop only

public class Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int choice;

        while (true) {
            System.out.println("Enter a number between 1 and 5: ");
            System.out.println("1: addition");
            System.out.println("2: subtraction");
            System.out.println("3: multiplication");
            System.out.println("4: division");
            System.out.println("5: factorial");
            System.out.print("Enter Choice = ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    int a, b;
                    System.out.println("Enter two numbers: ");
                    a = sc.nextInt();
                    b = sc.nextInt();
                    System.out.println("a + b = " + (a + b));
                    break;

                case 2:
                    System.out.println("Enter two numbers: ");
                    a = sc.nextInt();
                    b = sc.nextInt();
                    System.out.println("a - b = " + (a - b));
                    break;

                case 3:
                    System.out.println("Enter two numbers: ");
                    a = sc.nextInt();
                    b = sc.nextInt();
                    System.out.println("a * b = " + (a * b));
                    break;

                case 4:
                    System.out.println("Enter two numbers: ");
                    a = sc.nextInt();
                    b = sc.nextInt();
                    System.out.println("a / b = " + ((float) a / b));
                    break;

                case 5:
                    int fact = 1;
                    int i = 1;
                    System.out.println("Enter a number: ");
                    int num = sc.nextInt();
                    for (i = 1; i <= num; i++) {
                        fact = fact * i;
                    }
                    System.out.println("fact is " + fact);
                    break;

                default:
                    System.out.println("Invalid choice");
            }

            if (choice == 6) {
                break;
            }
        }

        sc.close();
    }
}
