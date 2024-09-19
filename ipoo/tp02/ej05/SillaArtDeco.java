public class SillaArtDeco extends Silla {
    public SillaArtDeco(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Silla Art Deco de " + this.getMaterial() + " de color " + this.getColor();
    }
}
