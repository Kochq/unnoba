public class ReproductorMultimedia implements VideoClip {
    public void play() {
        System.out.println("Reproduciendo...");
    }

    public void bucle() {
        System.out.println("Reproduciendo en bucle...");
    }

    public void stop() {
        System.out.println("Reproducción detenida.");
    }

    public static void main(String[] args) {
        ReproductorMultimedia reproductor = new ReproductorMultimedia();
        reproductor.play();
        reproductor.bucle();
        reproductor.stop();
    }
}
