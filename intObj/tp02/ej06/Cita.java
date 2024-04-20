import java.util.Date;

public class Cita {
    private Persona contacto;
    private Lugar lugar;
    private int importancia;
    private Date fecha;

    public Cita() {
        setContacto(new Persona());
        setFecha(new java.util.Date());
        setLugar(new Lugar());
    }

    public Persona getContacto() {
        return contacto;
    }
    public void setContacto(Persona contacto) {
        this.contacto = contacto;
    }

    public Lugar getLugar() {
        return lugar;
    }
    public void setLugar(Lugar lugar) {
        this.lugar = lugar;
    }

    public int getImportancia() {
        return importancia;
    }
    public void setImportancia(int importancia) {
        this.importancia = importancia;
    }

    public Date getFecha() {
        return fecha;
    }
    public void setFecha(Date fecha) {
        this.fecha = fecha;
    }
}
