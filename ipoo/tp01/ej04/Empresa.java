import java.util.ArrayList;

public class Empresa {
    private String nombre;
    private String direccion;
    private ArrayList<Contenedor> contenedores = new ArrayList<Contenedor>();

	public Empresa(String nombre, String direccion) {
        this.setNombre(nombre);
        this.setDireccion(direccion);
    }

    public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getDireccion() {
		return direccion;
	}
	public void setDireccion(String direccion) {
		this.direccion = direccion;
	}

	public ArrayList<Contenedor> getContenedores() {
		return contenedores;
	}
	public void setContenedores(ArrayList<Contenedor> contenedores) {
		this.contenedores = contenedores;
	}

    public void agregarContenedor(Contenedor contenedor) {
        contenedores.add(contenedor);
    }

    public float pesoContenedores() {
        float pesoTotal = 0;
        for (Contenedor c : contenedores) {
            pesoTotal += c.getPeso();
        }
        return pesoTotal;
    }

    public float valorDeTodosLosArticulo() {
        float valorTotal = 0;
        for (Contenedor c : contenedores) {
            valorTotal += c.getValor();
        }
        return valorTotal;
    }

    public float pesoArticulo(Producto producto) {
        return producto.getPeso();
    }

    public float pesoContenedor(Contenedor unContenedor) {
        return unContenedor.getPeso();
    }

    public float valorDeLosArticulos(Contenedor unContenedor) {
        return unContenedor.getValor();
    }
}
