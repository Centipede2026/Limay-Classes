public class Thrd1 {
    public static void main(String[] args) {
        System.out.println("Main Starts");
        Thread th = Thread.currentThread();
        System.out.println("Name: "+th.getName());
        System.out.println("Priority: "+th.getPriority()); // 1 to 10
        System.out.println("is Alive: "+th.isAlive()); 
        System.out.println("Main Ends");
    }
}
