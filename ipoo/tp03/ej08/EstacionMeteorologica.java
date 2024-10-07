import java.util.List;

import tp01.ej06.Clima;

import java.util.ArrayList;
import java.util.Comparator;

public class EstacionMeteorologica {
    private Clima climaActual;
    private List<Clima> historialClimas = new ArrayList<Clima>();

	public Clima getClimaActual() {
		return climaActual;
	}
	public void setClimaActual(Clima climaActual) {
		this.climaActual = climaActual;
	}

	public List<Clima> getHistorialClimas() {
		return historialClimas;
	}
	public void setHistorialClimas(List<Clima> historialClimas) {
		this.historialClimas = historialClimas;
	}

    public Clima climaActual() {
        return this.getClimaActual();
    }

    public void agregarClima(Clima clima) {
        this.getHistorialClimas().add(clima);
    }

    public void eliminarClima(Clima unClima) {
        this.getHistorialClimas().remove(unClima);
    }

    public List<Clima> getClimas() {
        return this.getHistorialClimas();
    }

    public void ordenarClimaPorFecha() {
        this.getHistorialClimas().sort(new Comparator<Clima>() {
			@Override
			public int compare(Clima arg0, Clima arg1) {
                return arg0.getUltimaActualizacion().compareTo(arg1.getUltimaActualizacion());
			}
        });
    }

    public void ordenarClimaPorTemperatura() {
        this.getHistorialClimas().sort(new Comparator<Clima>() {
            @Override
            public int compare(Clima arg0, Clima arg1) {
                return Float.compare(arg0.getTemp(), arg1.getTemp());
            }
        });
    }
}
