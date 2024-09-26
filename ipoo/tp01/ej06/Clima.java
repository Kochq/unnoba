package tp01.ej06;
import java.util.Date;

public class Clima {
    private String ciudad;
    private String provincia;
    private String pais;
    private float temp;
    private float tempMin;
    private float tempMax;
    private String escala;
    private float presion;
    private float viento;
    private String direccionViento;
    private float humedad;
    private Date ultimaActualizacion;
    private float visibilidad;

    public Clima(String ciudad, String provincia, String pais, float temp, float tempMin, float tempMax, String escala, float presion, float viento, String direccionViento, float humedad, Date ultimaActualizacion, float visibilidad) {
        this.setCiudad(ciudad);
        this.setProvincia(provincia);
        this.setPais(pais);
        this.setTemp(temp);
        this.setTempMin(tempMin);
        this.setTempMax(tempMax);
        this.setEscala(escala);
        this.setPresion(presion);
        this.setViento(viento);
        this.setDireccionViento(direccionViento);
        this.setHumedad(humedad);
        this.setUltimaActualizacion(ultimaActualizacion);
        this.setVisibilidad(visibilidad);
    }

	public String getCiudad() {
		return ciudad;
	}
	public void setCiudad(String ciudad) {
		this.ciudad = ciudad;
	}

	public String getProvincia() {
		return provincia;
	}
	public void setProvincia(String provincia) {
		this.provincia = provincia;
	}

	public String getPais() {
		return pais;
	}
	public void setPais(String pais) {
		this.pais = pais;
	}

	public float getTemp() {
		return temp;
	}
	public void setTemp(float temp) {
		this.temp = temp;
	}

	public float getTempMin() {
		return tempMin;
	}
	public void setTempMin(float tempMin) {
		this.tempMin = tempMin;
	}

	public float getTempMax() {
		return tempMax;
	}
	public void setTempMax(float tempMax) {
		this.tempMax = tempMax;
	}

	public String getEscala() {
		return escala;
	}
	public void setEscala(String escala) {
		this.escala = escala;
	}

	public float getPresion() {
		return presion;
	}
	public void setPresion(float presion) {
		this.presion = presion;
	}

	public float getViento() {
		return viento;
	}
	public void setViento(float viento) {
		this.viento = viento;
	}

	public String getDireccionViento() {
		return direccionViento;
	}
	public void setDireccionViento(String direccionViento) {
		this.direccionViento = direccionViento;
	}

	public float getHumedad() {
		return humedad;
	}
	public void setHumedad(float humedad) {
		this.humedad = humedad;
	}

	public Date getUltimaActualizacion() {
		return ultimaActualizacion;
	}
	public void setUltimaActualizacion(Date ultimaActualizacion) {
		this.ultimaActualizacion = ultimaActualizacion;
	}

	public float getVisibilidad() {
		return visibilidad;
	}
	public void setVisibilidad(float visibilidad) {
		this.visibilidad = visibilidad;
	}
}
