public class MesitaArtDeco extends Mesita {
    public MesitaArtDeco(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Mesita Art Deco de " + this.getMaterial() + " de color " + this.getColor();
    }
}
