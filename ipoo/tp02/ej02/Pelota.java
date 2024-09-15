import java.util.ArrayList;

public class Pelota {
    private ArrayList<Partido> partidos;

    public Pelota(ArrayList<Partido> partidos) {
        this.setPartidos(partidos);
    }

    public ArrayList<Partido> getPartidos() {
		return partidos;
	}
	public void setPartidos(ArrayList<Partido> partidos) {
		this.partidos = partidos;
	}

    //Agrega un partido a la colección de partidos que tiene el sistema.
	public void agregarPartido(Equipo local, Equipo visita, Estadio estadio, int valorEntrada) {
        this.getPartidos().add(new Partido(local, visita, estadio, valorEntrada));
    }

    //Retorna el estadio con mayor capacidad de espectadores
    public Estadio estadioConMayorCapacidad() {
        Estadio estadioCapacitivo = this.getPartidos().get(0).getEstadio();

        for (Partido p : this.getPartidos()) {
            if(estadioCapacitivo.getCapacidad() < p.getEstadio().getCapacidad()) {
                estadioCapacitivo = p.getEstadio();
            }
        }

        return estadioCapacitivo;
    }

    //Retorna la suma de todos los espectadores de todos los partidos. Es decir, la suma de la capacidad de cada estadio de cada partido.
    public int cantidadTotalEspectadores() {
        int suma = 0;

        for (Partido p : this.getPartidos()) {
            suma += p.getEstadio().getCapacidad();
        }

        return suma;
    }

    //Retorna la suma recaudada en el partido que se pasa como parámetro.
    public double montoRecaudado(Partido partido) {
        return partido.getEstadio().getCapacidad() * partido.getValorEntrada();
    }

    //Retorna la suma total recaudada por todos los partidos de la copa }
    public double montoTotalRecaudado() {
        double suma = 0;

        for (Partido p : this.getPartidos()) {
            suma += p.getEstadio().getCapacidad() * p.getValorEntrada();
        }

        return suma;
    }
}
