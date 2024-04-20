public class Lugar {
    private String direccion;
    private String nombre;

    public Lugar() {
        setDireccion("");
        setNombre("");
    }
    public Lugar(String direccion, String nombre) {
        setDireccion(direccion);
        setNombre(nombre);
    }

    public String getDireccion() {
        return direccion;
    }
    public void setDireccion(String direccion) {
        this.direccion = direccion;
    }

    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
}
