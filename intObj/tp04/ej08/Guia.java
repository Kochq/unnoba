public class Guia extends Persona {

    public Guia(String nombre, int matricula) {
		super(nombre);
        this.setMatricula(matricula);
	}

	private int matricula;

	public int getMatricula() {
		return matricula;
	}

	public void setMatricula(int matricula) {
		this.matricula = matricula;
	}
}
