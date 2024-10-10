import java.util.Scanner;
import java.io.*;
public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int booknum;
        String name;
        float price;
        char reference;
        boolean textbook;
        Filewriter fw = new Filewriter(book_records.txt);
        int ch;
        while(true){
            System.out.println("Press 1 to add new entry\nPress 2 to exit");
            ch=sc.nextInt();
            switch(ch){
                case 1:
                    int c;
                    System.out.print("Book number:");
                    booknum = sc.nextInt();
                    System.out.print("Name:");
                    name = sc.nextLine();
                    System.out.print("Price:");
                    price = sc.nextInt();
                    System.out.print("Reference/stack:");
                    reference = sc.next.charAt(0);
                    System.out.print("Textbook:1 for true/2 for false");
                    if(c==1)
                        textbook = true;
                    else
                        textbook = false;
                case 2:
                    System.exit(0);
            }
        }
    }
}