public class YoutubeChannel extends Observable {
    public void deleteObserver(Observer o) {
        System.out.println("Borrao");
    }

    public void notificar() {
        for(Observer o : this.getObservers()) {
            o.update();
        }
    }

    public static void main(String[] args) {
        YoutubeChannel canal1 = new YoutubeChannel();
        YoutubeChannel canal2 = new YoutubeChannel();

        Subscriber sub1 = new Subscriber(canal1);
        Subscriber sub2 = new Subscriber(canal1);
        Subscriber sub6 = new Subscriber(canal1);
        Subscriber sub3 = new Subscriber(canal2);
        Subscriber sub4 = new Subscriber(canal2);
        Subscriber sub5 = new Subscriber(canal2);

        canal1.addObserver(sub1);
        canal1.addObserver(sub2);
        canal1.addObserver(sub6);
        canal2.addObserver(sub3);
        canal2.addObserver(sub4);
        canal2.addObserver(sub5);

        canal1.notificar();
    }
}
