public class Subscriber extends Observer {
    public Subscriber(Observable o) {
        super(o);
    }

    public void update() {
        System.out.println("New video uploaded");
    }
}
