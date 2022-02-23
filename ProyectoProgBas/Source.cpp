#include <iostream>
using namespace std;

int main() {

	int opcion, salir = 2;
	int op;
	char hora[5];
	int num = 1, trat, cant, precun, total;
	char nombre[100];
	char tratamiento[50];
	char desc[100];

	do {
		cout << "Eliga una opcion:" << endl << "1.-Agendar cita" << endl << "2.-Modificar cita" << endl << "3.-Eliminar cita" << endl << "4.-Lista de citas vigentes" << endl << "5.-Limpiar pantalla" << endl << "6.-Salir" << endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			cout << endl << "AGENDAR UNA CITA" << endl << "Numero de cita: ";
			cout << num << endl;
			num = num + 1;
			cout << "Nombre del paciente: ";
			cin >> nombre;
			cout << "Hora del tratamiento: ";
			cin >> hora;
			cout << "Nombre del tratamiento: ";
			cin >> tratamiento;
			cout << "Descripcion del tratamiento: ";
			cin >> desc;
			cout << "Precio unitario tratamiento: ";
			cin >> trat;
			cout << "Cantidad del tratamiento: ";
			cin >> cant;
			cout << "Precio unitario: ";
			cin >> precun;
			cout << "Total: $";
			total = precun + (trat * cant);
			cout << total;
			cout << endl << "Que desea hacer?" << endl << "1.-Salir" << endl << "2.-Regresar al menu" << endl;
			cin >> salir;

			break;

		case 2:
			cout << endl << "MODIFICAR CITA";
			cout << endl << "Que desea hacer?" << endl << "1.-Salir" << endl << "2.-Regresar al menu" << endl;
			cin >> salir;
			break;

		case 3:
			cout << endl << "ELIMINAR CITA";
			cout << endl << "Que desea hacer?" << endl << "1.-Salir" << endl << "2.-Regresar al menu" << endl;
			cin >> salir;
			break;

		case 4:
			cout << endl << "LISTA DE CITAS";
			cout << endl << "Que desea hacer?" << endl << "1.-Salir" << endl << "2.-Regresar al menu" << endl;
			cin >> salir;
			break;

		case 5:
			cout << endl << "LIMPIAR";
			cout << endl << "Que desea hacer?" << endl << "1.-Salir" << endl << "2.-Regresar al menu" << endl;
			cin >> salir;
			break;

		case 6:
			return 0;
			break;

		default:
			cout << "Opcion no valida, intente de nuevo";
			break;
		}
	} 	while (salir == 2);
}