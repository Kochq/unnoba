public class Main {
    public static void main(String[] args) {
        CarpinteriaModerna cModerna = new CarpinteriaModerna();
        CarpinteriaVictoriana cVictoriana = new CarpinteriaVictoriana();
        CarpinteriaArtDeco cArtDeco = new CarpinteriaArtDeco();

        Sofa sofaM = cModerna.fabricarSofa("tela", "rojo");
        Sofa sofaV = cVictoriana.fabricarSofa("madera", "cafe");
        Sofa sofaA = cArtDeco.fabricarSofa("metal", "verde");

        Silla sillaM = cModerna.fabricarSilla("plastico", "azul");
        Silla sillaV = cVictoriana.fabricarSilla("madera", "cafe");
        Silla sillaA = cArtDeco.fabricarSilla("metal", "verde");

        Mesita mesitaM = cModerna.fabricarMesita("madera", "cafe");
        Mesita mesitaV = cVictoriana.fabricarMesita("madera", "cafe");
        Mesita mesitaA = cArtDeco.fabricarMesita("madera", "cafe");

        System.out.println(sofaM);
        System.out.println(sofaV);
        System.out.println(sofaA);

        System.out.println(sillaM);
        System.out.println(sillaV);
        System.out.println(sillaA);

        System.out.println(mesitaM);
        System.out.println(mesitaV);
        System.out.println(mesitaA);
    }
}
