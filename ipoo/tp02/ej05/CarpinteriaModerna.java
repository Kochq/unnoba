public class CarpinteriaModerna extends Carpinteria {
    public CarpinteriaModerna() {
        super();
    }

    public Mesita fabricarMesita(String material, String color) {
        return new MesitaModerna(material, color);
    }

    public Silla fabricarSilla(String material, String color) {
        return new SillaModerna(material, color);
    }

    public Sofa fabricarSofa(String material, String color) {
        return new SofaModerno(material, color);
    }
}
