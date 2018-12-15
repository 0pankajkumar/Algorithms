public class FibonacciDynamic{

     public static long fib(int n)
     {
         long f[] = new long[n+2];
         f[0] = 0;
         f[1] = 1;
         
         for(int i=2; i<=n; i++)
         {
             f[i] = f[i-1] + f[i-2];
         }
         
         
         return f[n];
     }
     public static void main(String []args)
     {
        int n = 1140000;
        //fib(n);
        System.out.println("Hello World : " + fib(n));
     }
}{

     public static long fib(int n)
     {
         long f[] = new long[n+2];
         f[0] = 0;
         f[1] = 1;
         
         for(int i=2; i<=n; i++)
         {
             f[i] = f[i-1] + f[i-2];
         }
         
         
         return f[n];
     }
     public static void main(String []args)
     {
        int n = 1140000;
        //fib(n);
        System.out.println("Hello World : " + fib(n));
     }
}
