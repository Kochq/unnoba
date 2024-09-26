package tp01.ej01;

import java.util.Vector;

public class Banco {
    private String nombre;
    private String ubicacion;
    private Moneda moneda;
	private Vector<Transaccion> transacciones = new Vector<Transaccion>();
    private Vector<Cliente> clientes = new Vector<Cliente>();

    public Banco(String nombre, String ubicacion, Moneda moneda) {
        this.setNombre(nombre);
        this.setUbicacion(ubicacion);
        this.setMoneda(moneda);
        this.setClientes(new Vector<Cliente>());
        this.setTransacciones(new Vector<Transaccion>());
    }

    public Moneda getMoneda() {
		return moneda;
	}
	public void setMoneda(Moneda moneda) {
		this.moneda = moneda;
	}

	public String getNombre() {
		return nombre;
	}
	public void setNombre(String nombre) {
		this.nombre = nombre;
	}

	public String getUbicacion() {
		return ubicacion;
	}
	public void setUbicacion(String ubicacion) {
		this.ubicacion = ubicacion;
	}

	public Vector<Transaccion> getTransacciones() {
		return transacciones;
	}
	public void setTransacciones(Vector<Transaccion> transacciones) {
		this.transacciones = transacciones;
	}

	public Vector<Cliente> getClientes() {
		return clientes;
	}
	public void setClientes(Vector<Cliente> clientes) {
		this.clientes = clientes;
	}

    public void agregarTransaccion(Transaccion transaccion) {
        this.getTransacciones().add(transaccion);
    }

    public int cantidadTotalTransacciones() {
        return this.getTransacciones().size();
    }

    public double impuestoACobrarDe(Transaccion transaccion) {
        return transaccion.getBancoDestino().getMoneda().convertirPesos(transaccion.calcularImpuesto());
    }

    public double impuestosACobrar() {
        double suma = 0;

        for (Transaccion t : this.getTransacciones()) {
            suma += t.getBancoDestino().getMoneda().convertirPesos(t.calcularImpuesto());
        }

        return suma;
    }

    public double montoTotalDeTransacciones() {
        double suma = 0;

        for (Transaccion t : this.getTransacciones()) {
            suma += t.getBancoDestino().getMoneda().convertirPesos(t.calcularImpuesto()) + t.getBancoDestino().getMoneda().convertirPesos(t.getMonto());
        }

        return suma;
    }

    public static void main(String[] args) {
        Moneda peso = new Peso();
        Moneda dolar = new Dolar();
        Banco banco1 = new Banco("banco1", "aca", peso);
        Banco banco2 = new Banco("banco2", "aca", dolar);
        Cliente cliente1 = new Cliente("Mateo");

        Transaccion t1 = new TNacional("hoy", banco1, 10000, cliente1);
        Transaccion t2 = new TInternacional("hoy", banco2, 500, cliente1);

        banco1.agregarTransaccion(t1);
        banco1.agregarTransaccion(t2);

        System.out.println(banco1.cantidadTotalTransacciones());
        System.out.println(banco1.impuestoACobrarDe(banco1.getTransacciones().elementAt(1)));
        System.out.println(banco1.impuestosACobrar());
        System.out.println(banco1.montoTotalDeTransacciones());
    }
}
