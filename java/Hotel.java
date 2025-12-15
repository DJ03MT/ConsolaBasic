package java;

import java.util.Scanner;

public class Hotel {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Bienvenido al Hotel");
        System.out.println("Por favor, ingresa tu nombre: ");
        String nombre = scanner.nextLine();

        System.out.println("Por favor, ingresa tu apellido: ");
        String apellido = scanner.nextLine();

        System.out.println("Por favor, ingresa tu edad: ");
        int edad = scanner.nextInt();

        System.out.println("Por favor, ingresa tu genero: ");
        String genero = scanner.nextLine();

        System.out.println("Por favor, ingresa tu numero de habitacion: ");
        int habitacion = scanner.nextInt();

        int opcion = scanner.nextInt();

        switch (opcion) {
            case 1:
                System.out.println("Check-in");

                System.out.println("Por favor, ingresa tu numero de habitacion: ");
                int habitacionCheckIn = scanner.nextInt();

                break;
            case 2:
                System.out.println("Check-out");
                break;
            case 3:
                System.out.println("Salir");
                break;
            default:
                System.out.println("Opcion no valida");
                break;
        }

    }
}
