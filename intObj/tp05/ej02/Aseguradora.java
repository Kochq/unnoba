import java.util.Vector;
import java.util.Date;

public class Aseguradora {
    private Vector<Poliza> polizas = new Vector<Poliza>();

    public Vector<Poliza> getPolizas() {
        return polizas;
    }
    public void setPolizas(Vector<Poliza> polizas) {
        this.polizas = polizas;
    }
    public void addPoliza(Poliza poliza) {
        this.getPolizas().add(poliza);
    }

    public double montoAPagarDe(Poliza unaPoliza) {
        return unaPoliza.calcularValorPoliza();
    }

    public double montoTotalAsegurado() {
        double total = 0;
        for(Poliza poliza : this.getPolizas()) {
            total += poliza.getAuto().getValuacion();
        }

        return total;
    }

    public double montoTotalACobrar() {
        double total = 0;
        for(Poliza poliza : this.getPolizas()) {
            total += poliza.calcularValorPoliza();
        }

        return total;
    }

    public void asegurarAutoTotal(Auto unAuto, String unNombre) {
        Poliza nPol = new PolizaTotal(unNombre, new Date(), unAuto);

        this.addPoliza(nPol);
    }

    public void asegurarAutoParcial(Auto unAuto, String unNombre) {
        Poliza nPol = new PolizaParcial(unNombre, new Date(), unAuto);

        this.addPoliza(nPol);
    }
    
    public int cantidadDePolizas() {
        return this.getPolizas().size();
    }

    public static void main(String[] args) {
        Aseguradora aseguradora = new Aseguradora();
        Auto auto1 = new Auto("toyota", "nosexd", 200_000);
        Auto auto2 = new Auto("peugeot", "206", 500_000);
        Auto auto3 = new Auto("ferrari", "nosexd2", 2_000_000);
        Auto auto4 = new Auto("toyota", "nosexd2", 200_000);

        aseguradora.asegurarAutoTotal(auto1, "autito1");
        aseguradora.asegurarAutoTotal(auto2, "autito2");
        aseguradora.asegurarAutoTotal(auto3, "autito3");
        aseguradora.asegurarAutoParcial(auto4, "autote");

        System.out.println(aseguradora.montoAPagarDe(aseguradora.getPolizas().elementAt(3)));
        System.out.println(aseguradora.montoTotalACobrar());
        System.out.println(aseguradora.montoTotalAsegurado());
    }
}
