import java.awt.Color;
import java.awt.Font;

import javax.swing.BorderFactory;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.border.Border;


public class Main extends JFrame {
    static ImageIcon gatoA = new ImageIcon("pop_catM.png");
    static ImageIcon gatoM = new ImageIcon("pop_catA.png");

    JButton boton;

    public static void toggleText(JLabel label) {
        if(label.getText() == "miau") {
            label.setText("");
        } else {
            label.setText("miau");
        }
    }

    public static void toggleImg(JLabel label) {
        if(label.getIcon() == gatoA) {
            label.setIcon(gatoM);
        } else {
            label.setIcon(gatoA);
        }
    }

    public static void main(String[] args) {
        JLabel label = new JLabel();
        JButton boton = new JButton();
        Border border = BorderFactory.createLineBorder(Color.black, 3);
        JFrame frame = new JFrame();

        label.setText("");
        label.setIcon(gatoA);
        label.setHorizontalTextPosition(JLabel.CENTER);
        label.setVerticalTextPosition(JLabel.BOTTOM);
        label.setBackground(Color.black);
        label.setOpaque(true);
        label.setForeground(Color.white);
        label.setFont(new Font("CaskaydiaCove Nerd Font Mono", Font.BOLD, 20));
        label.setBorder(border);
        label.setHorizontalAlignment(JLabel.CENTER);
        label.setVerticalAlignment(JLabel.CENTER);

        label.setBounds(400,0,520,550);
        boton.setBounds(610,600,70,30);

        boton.setText("miau");

        boton.addActionListener(e -> {
            toggleText(label);
            toggleImg(label);
        });

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        frame.setVisible(true);
        frame.setResizable(false);
        frame.setLayout(null);

        frame.setTitle("gato");
        frame.setSize(1280,720);

        frame.getContentPane().setBackground(new Color(18, 33, 43));

        frame.add(label);
        frame.add(boton);
    }
}
