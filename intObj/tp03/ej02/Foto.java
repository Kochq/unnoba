public class Foto {
    private String title;
    private static int contador = 0;
    private int id;

    public Foto() {
        setId(++contador);
    }

    public Foto(String title) {
        setTitle(title);
        setId(++contador);
    }

	public String getTitle() {
		return title;
	}
	public void setTitle(String title) {
		this.title = title;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
}
