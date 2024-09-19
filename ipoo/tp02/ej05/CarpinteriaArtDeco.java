public class CarpinteriaArtDeco extends Carpinteria {
    public CarpinteriaArtDeco() {
        super();
    }

    public Mesita fabricarMesita(String material, String color) {
        return new MesitaArtDeco(material, color);
    }

    public Silla fabricarSilla(String material, String color) {
        return new SillaArtDeco(material, color);
    }

    public Sofa fabricarSofa(String material, String color) {
        return new SofaArtDeco(material, color);
    }
}
