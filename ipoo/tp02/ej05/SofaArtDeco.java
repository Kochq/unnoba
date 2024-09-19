public class SofaArtDeco extends Sofa {
    public SofaArtDeco(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Sofa Art Deco de " + this.getMaterial() + " de color " + this.getColor();
    }
}
