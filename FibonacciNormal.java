public class FibonacciNormal{

     public static int fib(int n)
     {
         if (n == 1)
         {
             return n;
         }
         if (n == 0)
         {
             return n;
         }

             return (fib(n-1) + fib(n-2));
         
     }
     public static void main(String []args)
     {
        int n = 4;
        fib(n);
        System.out.println("Hello World : " + fib(n));
     }
}
