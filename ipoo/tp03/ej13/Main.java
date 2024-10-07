import java.util.List;
import java.util.Arrays;
import java.util.ArrayList;

public class Main {
    static private List<String> getFilterOutput(List<String> lines, String filter) {
        List<String> result = new ArrayList<>();

        lines.stream()
            .filter(s -> !s.contains(filter))
            .forEach(result::add);

        return result;
    }

    public static void main(String[] args) {
        List<String> lines = Arrays.asList("Java", "PHP", "C++");

        System.out.println(getFilterOutput(lines, "PHP"));
    }
}
