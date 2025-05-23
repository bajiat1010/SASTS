import java.io.*;

public class ExceptionDemo {

    public static void main(String[] args) {
        // Demonstrating ClassNotFoundException
        try {
            Class.forName("NonExistentClass");
        } catch (ClassNotFoundException e) {
            System.out.println("ClassNotFoundException caught:");
            System.out.println(e.getMessage());
        }

        // Demonstrating EOFException
        try {
            // Create a file and write some data
            FileOutputStream fos = new FileOutputStream("data.txt");
            ObjectOutputStream oos = new ObjectOutputStream(fos);
            oos.writeInt(100);
            oos.close();

            // Now try to read more data than available
            FileInputStream fis = new FileInputStream("data.txt");
            ObjectInputStream ois = new ObjectInputStream(fis);

            System.out.println("Read Integer: " + ois.readInt());

            // Trying to read again causes EOFException
            System.out.println("Read again (will cause EOFException):");
            System.out.println(ois.readInt()); // Nothing more to read

            ois.close();

        } catch (EOFException e) {
            System.out.println("EOFException caught: End of file reached.");
        } catch (IOException e) {
            System.out.println("IOException caught: " + e.getMessage());
        }
    }
}