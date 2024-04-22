import java.util.Vector;

public class Album {
    private String nombre;
    private Vector<Foto> fotos = new Vector<>();
    
    public Album(String nombre) {
        setNombre(nombre);
    }

    public Album() {}

    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public Vector<Foto> getFotos() {
        return fotos;
    }
    public void setFotos(Vector<Foto> fotos) {
        this.fotos = fotos;
    }

    public void addFoto(Foto foto) {
        getFotos().addElement(foto);
    }
    public void addFotos(Vector<Foto> fotos) {
        for(Foto foto : fotos) {
            this.addFoto(foto);
        }
    }

    public boolean deleteFoto(int id) {
        for(int i = 0; i < getCantFotos(); i++) {
            if(getFotos().elementAt(i).getId() == id) {
                getFotos().remove(i);
                return true;
            }
        }

        return false;
    }

    public void clearAlbum() {
        getFotos().removeAll(getFotos());
    }

    public int getCantFotos() {
        return getFotos().size();
    }
}
