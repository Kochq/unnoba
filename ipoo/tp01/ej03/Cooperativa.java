package tp01.ej03;

import java.util.ArrayList;
import java.util.Date;

public class Cooperativa {
    private ArrayList<Chofer> choferes = new ArrayList<Chofer>();

	public ArrayList<Chofer> getChoferes() {
		return choferes;
	}
	public void setChoferes(ArrayList<Chofer> choferes) {
		this.choferes = choferes;
	}

    public Chofer realizarViaje(int cantPasajeros, float cantKmts) {
        Chofer chofer = null;
        for (Chofer c : choferes) {
            if (c.getColectivo().getCantPasajeros() >= cantPasajeros) {
                c.getColectivo().setKm(c.getColectivo().getKm() + cantKmts);
                c.getColectivo().setUltimoViaje(new Date());
                chofer = c;
                break;
            }
        }
        return chofer;
    }

    public Colectivo mayorKilometro() {
        Colectivo cMayorKm = choferes.get(0).getColectivo();
        for (Chofer c : choferes) {
            if (c.getColectivo().getKm() > cMayorKm.getKm()) {
                cMayorKm = c.getColectivo();
            }
        }

        return cMayorKm;
    }
}
