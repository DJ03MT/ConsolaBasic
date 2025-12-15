#include <iostream>
#include <string>

using namespace std;

//Funciones
void menu();
string buscarPosicionString(string valor, string array[]); 
int validarCredenciales(); 

//Variables global

float depositar;
float retirar;
string usuario;
string contrasena;
string Usuarios[]={"Usuario1","Usuario2","Usuario3"}; 
string Contrasenas[]={"Contrasena1","Contrasena2","Contrasena3"};
float Saldos[]={1000,2000,3000};

int usuarioPosicion = sizeof(Usuarios)/sizeof(Usuarios[0]);

int obtenerIndice(string valor, string array[], int tamano) {
    for (int i = 0; i < tamano; i++){
        if (array[i] == valor){
            return i;
        }
    }
    return -1;
}

int main()
{
    int opcion;
    int usuarioIndex; 

    menu();
    cout<<"Elige una opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"Retirar"<<endl;
            usuarioIndex = validarCredenciales();
            
            cout<<"Ingrese la cantidad a retirar: ";
            cin>>retirar;
            if (retirar > Saldos[usuarioIndex]){
                cout<<"No tienes saldo suficiente"<<endl;
                cout<< "Volviendo al menu principal"<<endl;
                return main();
            }else{
                Saldos[usuarioIndex] -= retirar;
                cout<<"Retiro exitoso"<<endl;
                cout<<"Tu saldo despues de retirar es: "<<Saldos[usuarioIndex]<<" cordobas"<<endl;
            }
            
            break;
        case 2:
            cout<<"Depositar"<<endl;
            usuarioIndex = validarCredenciales();

            cout<<"Ingrese la cantidad a depositar: ";
            cin>>depositar;
            Saldos[usuarioIndex] += depositar;
            cout<<"Deposito exitoso"<<endl;
            cout<<"Tu saldo despues de depositar es: "<<Saldos[usuarioIndex]<<" cordobas"<<endl;
            break;
        case 3:
            cout<<"Consultar saldo"<<endl;
            usuarioIndex = validarCredenciales();

            cout<<"Tu saldo es: "<<Saldos[usuarioIndex]<<" cordobas"<<endl;
            break;
        case 4:
            cout<<"Salir"<<endl;
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
    }
    
    return 0;
}


void menu(){
    cout<< "---- Menu Principal ----"    <<endl;
    cout<< "1. Retirar"    <<endl;
    cout<< "2. Depositar"    <<endl;
    cout<< "3. Consultar saldo"    <<endl;
    cout<< "4. Salir"    <<endl;
    cout<< "------------------------"    <<endl;
}

int validarCredenciales() {
    int uIndex = -1;
    int cIndex = -1;
    bool credencialesValidas = false;

    do {
        cout<<"Ingrese su Usuario: ";
        cin>>usuario;
        cout<<"Ingrese su Contrasena: ";
        cin>>contrasena;

        uIndex = obtenerIndice(usuario, Usuarios, usuarioPosicion);
        cIndex = obtenerIndice(contrasena, Contrasenas, usuarioPosicion);

        // Validar:
        // 1. Usuario existe (uIndex != -1)
        // 2. Contraseña existe (cIndex != -1)
        // 3. Coinciden en posición (uIndex == cIndex)
        if (uIndex != -1 && cIndex != -1 && uIndex == cIndex) {
            credencialesValidas = true;
        } else {
            cout<<"Usuario o contrasena incorrectos, o no coinciden. Intentelo de nuevo"<<endl;
        }

    } while (!credencialesValidas);

    return uIndex;
}