public class Singleton {
    private static Singleton instance = null;
    private String archivo;

	private Singleton() {};
    private Singleton(String archivo) {
        this.setArchivo(archivo);
    }

    public String getArchivo() {
		return archivo;
	}
	public void setArchivo(String archivo) {
		this.archivo = archivo;
	}

	public static Singleton getInstance(String archivo) {
        if(instance == null) {
            instance = new Singleton(archivo);
        }

        return instance;
	}

    public void escribirArchivo(String contenido) {
        System.out.println("Escribiste: " + contenido + " en el archivo: " + this.getArchivo());
    }

    public static void main(String[] args) {
        Singleton inst1 = Singleton.getInstance("test.txt");
        inst1.escribirArchivo("Esto es una prueba 1");
        Singleton inst2 = Singleton.getInstance("test2.txt");
        inst2.escribirArchivo("Esto es una prueba 2");
    }
}
