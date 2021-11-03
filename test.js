// Making some changes and second commit



import java.io.*;
import java.util.*;

public class End_Of_File_Example{

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String ab= scanner.nextLine();
        int a=0;

        while(ab != null){
            System.out.printf("%d %s\n",++a,ab);
            ab=scanner.nextLine();
        }
        scanner.close();
    }
}

