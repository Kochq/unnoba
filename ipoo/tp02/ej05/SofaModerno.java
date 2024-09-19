public class SofaModerno extends Sofa {
    public SofaModerno(String material, String color) {
        super(material, color);
    }

    public String toString() {
        return "Sofá moderno de " + this.getMaterial() + " color " + this.getColor();
    }
}
