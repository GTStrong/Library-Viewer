#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[81];

// ---------REGISTROS----------

	struct Estudiantes
	{
		int codigo;
		int dni;
		
		string apeYNom;
		string turno;
		string curso;
	
		bool borrado;	
	};
	
	struct Profesionales
	{
		int codigo;
		int dni;
		
		string apeYNom;
		string telefono;
		
		bool borrado;
	};
	
	struct Libros
	{
		int codigo;
		int cantidad;
		
		string titulo;
		string editorial;
		string seccion;
		string autor;
		
		bool borrado;
	};
	
	struct Objetos
	{
		int codigo;
		int cantidad;
		
		string objeto;
		
		bool borrado;
	};
	
	struct Prestamo_Libros
	{
		int codigo;
		int cantidad;
		
		string titulo;
		string prestatario;
		
		bool borrado;	
	};	
	
	struct Prestamo_Objetos
	{
		int codigo;
		
		string titulo;
		string prestatario;
		string cantidad;
		
		bool borrado;	
};

// ----------------------------



// ****************FUNCIONES********************

	// ------- FUNCIONES PRINCIPALES ----------
	
		// - Modulo de biblioteca
			void Modulo_Biblioteca();
			void Modulo_Biblioteca_Libros();
			void Modulo_Biblioteca_Objetos();
			
			void Modulo_Biblioteca_Libros_NuevoLibro();
			void Modulo_Biblioteca_Libros_EditarLibro();
			void Modulo_Biblioteca_Libros_EliminarLibro();	
			void Modulo_Biblioteca_Libros_BuscarLibro();
			
			void Modulo_Biblioteca_Objetos_NuevoObjeto();
			void Modulo_Biblioteca_Objetos_EditarObjeto();
			void Modulo_Biblioteca_Objetos_EliminarObjeto();
			void Modulo_Biblioteca_Objetos_BuscarObjeto();
		
			
		// - Modulo de socios
			void Modulo_Socios();
			void Modulo_Socios_Estudiantes();
			void Modulo_Socios_Profesionales();
	
	
		// - Modulo de prestamos
			void Modulo_Prestamos();
			void Modulo_Prestamos_Libros();
			void Modulo_Prestamos_Objetos();
			
			void Modulo_Prestamos_Libros_Nuevo();
			void Modulo_Prestamos_Libros_Editar();
			void Modulo_Prestamos_Libros_Completar();
			void Modulo_Prestamos_Libros_Buscar();
			
			void Modulo_Prestamos_Objetos_Nuevo();
			void Modulo_Prestamos_Objetos_Editar();
			void Modulo_Prestamos_Objetos_Completar();
			void Modulo_Prestamos_Objetos_Buscar();
			
			void Modulo_Prestamos_Libros_Nuevo_Particular();
			void Modulo_Prestamos_Libros_Nuevo_Socios();
			
			void Modulo_Prestamos_Objetos_Nuevo_Particular();
			void Modulo_Prestamos_Objetos_Nuevo_Socios();
			
	// ----------------------------------------
		
	// ------- FUNCIONES COMPLEMENTARIAS ----------
	
		void Salir();
		
	// --------------------------------------------
		
// *********************************************	
	


main()
{
	system("color F0");
	
	FILE *libros;
	FILE *elementos;
	
	FILE *estudiantes;
	FILE *profesionales;
	
	FILE *prestamos_estudiantes;
	FILE *prestamos_profesionales;
	
	int opcion = 0;
	
	do
	{
		system("cls");
		
		printf("--LIBRARY VIEWER--");
		printf("\n\n\t1- MODULO DE SOCIOS");
		printf("\n\t2- MODULO DE BIBLIOTECA");
		printf("\n\t3- MODULO DE PRESTAMOS");
		
		printf("\n\n\t4- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1: 	
					{
						Modulo_Socios();
						break;
					}
			case 2: 	
					{
						Modulo_Biblioteca();	
						break;
					}
			case 3: 	
					{
						Modulo_Prestamos();
						break;
					}
			case 4: 	
					{
						Salir();
					}
			default: 	
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}																
		}
		
	}
	while(opcion >= 1 || opcion <= 3);	
	
}



// *************** MODULO DE BIBLIOTECA *****************

void Modulo_Biblioteca()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE BIBLIOTECA--");
		
		printf("\n\n\t1- VER LIBROS");
		printf("\n\t2- VER OBJETOS");
		
		printf("\n\n\t3- VOLVER(MENU PRINCIPAL)");
		printf("\n\t4- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Biblioteca_Libros();	
					}
			case 2:
					{
						Modulo_Biblioteca_Objetos();
					}
			case 3:
					{
						main();	
					}
			case 4:
					{
						Salir();
					}
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 3);	
}

void Modulo_Biblioteca_Libros()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE BIBLIOTECA/LIBROS--");
		
		printf("\n\n\t1- NUEVO LIBRO");
		printf("\n\t2- EDITAR LIBRO");
		printf("\n\t3- ELIMINAR LIBRO");
		printf("\n\t4- BUSCAR LIBRO");
		
		printf("\n\n\t5- VOLVER(MODULO DE BIBLIOTECA)");
		printf("\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Biblioteca_Libros_NuevoLibro();	
					}
			case 2:
					{
						Modulo_Biblioteca_Libros_EditarLibro();
					}
			case 3:
					{
						Modulo_Biblioteca_Libros_EliminarLibro();
						break;
					}
			case 4:
					{
						Modulo_Biblioteca_Libros_BuscarLibro();
						break;
					}
			case 5:
					{
						Modulo_Biblioteca();
					}
			case 6:
					{
						Salir();
					}										
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 3);		
}

void Modulo_Biblioteca_Objetos()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE BIBLIOTECA/OBJETOS--");
		
		printf("\n\n\t1- NUEVO OBJETO");
		printf("\n\t2- EDITAR OBJETO");
		printf("\n\t3- ELIMINAR OBJETO");
		printf("\n\t4- BUSCAR OBJETO");
		
		printf("\n\n\t5- VOLVER(MODULO DE BIBLIOTECA)");
		printf("\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Biblioteca_Objetos_NuevoObjeto();
					}
			case 2:
					{
						Modulo_Biblioteca_Objetos_EditarObjeto();	
					}
			case 3:
					{
						Modulo_Biblioteca_Objetos_EliminarObjeto();
						break;
					}
			case 4:
					{
						Modulo_Biblioteca_Objetos_BuscarObjeto();
						break;
					}
			case 5:
					{
						Modulo_Biblioteca();
					}
			case 6:
					{
						Salir();
					}										
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 3);		
}

void Modulo_Biblioteca_Libros_NuevoLibro()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE BIBLIOTECA/LIBROS/NUEVO LIBRO--");
		
		printf("\n\n\t1- INGRESAR CODIGO");
		printf("\n\t2- INGRESAR TITULO");
		printf("\n\t3- INGRESAR EDITORIAL");
		printf("\n\t4- INGRESAR SECCION");
		printf("\n\t5- INGRESAR AUTOR");
		printf("\n\t6- INGRESAR EXISTENCIAS");
		
		printf("\n\n\t7- GUARDAR LIBRO");
		
		printf("\n\n\t8- VOLVER(MODULO DE BIBLIOTECA/LIBROS)");
		printf("\n\t9- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						break;
					}
			case 2:
					{
						break;	
					}
			case 3:
					{
						break;	
					}
			case 4:
					{
						break;	
					}
			case 5:
					{
						break;	
					}
			case 6:
					{
						break;
					}
			case 7:
					{
						break;	
					}										
			case 8:
					{
						Modulo_Biblioteca_Libros();	
					}										
			case 9:
					{
						Salir();		
					}																					
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 8);			
}

void Modulo_Biblioteca_Libros_EditarLibro()
{
	int opcion = 0;
	int target = 0;
	
	system("cls");
	printf("INGRESE EL CODIGO DEL LIBRO A EDITAR: ");
	scanf("%d", &target);
	
	printf("Codigo\t\tTitulo\t\tEditorial\t\tSeccion\t\tAutor\t\tCantidad");
	
	do
	{
		system("cls");
		printf("--MODULO DE BIBLIOTECA/LIBROS/EDITAR LIBRO--");
		
		printf("\n\n\t1- EDITAR TITULO");
		printf("\n\t2- EDITAR EDITORIAL");
		printf("\n\t3- EDITAR SECCION");
		printf("\n\t4- EDITAR AUTOR");
		printf("\n\t5- EDITAR EXISTENCIAS");
		
		printf("\n\n\t6- GUARDAR LIBRO");
		
		printf("\n\n\t7- VOLVER(MODULO DE BIBLIOTECA/LIBROS)");
		printf("\n\t8- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						break;
					}
			case 2:
					{
						break;	
					}
			case 3:
					{
						break;	
					}
			case 4:
					{
						break;	
					}
			case 5:
					{
						break;	
					}
			case 6:
					{
						break;
					}
			case 7:
					{
						Modulo_Biblioteca_Libros();
					}										
			case 8:
					{
						Salir();
					}																															
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 7);			
}

void Modulo_Biblioteca_Libros_EliminarLibro()
{
	system("cls");
	printf("INGRESE EL CODIGO DEL LIBRO A ELIMINAR: "),
	system("cls");
	printf("DESEA ELIMINAR EL LIBRO(SI|NO): ");
	system("cls");
	printf("Se ha eliminado el libro exitosamente...");
}

void Modulo_Biblioteca_Libros_BuscarLibro()
{
	system("cls");
	printf("INGRESE EL CODIGO DEL LIBRO A BUSCAR: ");
}

//

void Modulo_Biblioteca_Objetos_NuevoObjeto()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE BIBLIOTECA/LIBROS/NUEVO LIBRO--");
		
		printf("\n\n\t1- INGRESAR OBJETO");
		printf("\n\t2- INGRESAR EXISTENCIAS");
		
		printf("\n\n\t3- GUARDAR OBJETO");
		
		printf("\n\n\t4- VOLVER(MODULO DE BIBLIOTECA/OBJETOS)");
		printf("\n\t5- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						break;
					}
			case 2:
					{
						break;	
					}
			case 3:
					{
						break;	
					}
			case 4:
					{
						Modulo_Biblioteca_Objetos();	
					}
			case 5:
					{
						Salir();
					}																					
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 8);			
}

void Modulo_Biblioteca_Objetos_EditarObjeto()
{
	int opcion = 0;
	int target = 0;
	
	system("cls");
	printf("INGRESE EL CODIGO DEL OBJETO A EDITAR: ");
	scanf("%d", &target);
	
	do
	{
		system("cls");
		printf("--MODULO DE BIBLIOTECA/LIBROS/EDITAR LIBRO--");
		
		printf("\n\n\t1- EDITAR OBJETO");
		printf("\n\t2- EDITAR EXISTENCIAS");
		
		printf("\n\n\t3- GUARDAR OBJETO");
		
		printf("\n\n\t4- VOLVER(MODULO DE BIBLIOTECA/OBJETOS)");
		printf("\n\t5- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						break;
					}
			case 2:
					{
						break;	
					}
			case 3:
					{
						break;	
					}
			case 4:
					{
						Modulo_Biblioteca_Objetos();	
					}
			case 5:
					{
						Salir();
					}																															
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 7);			
}

void Modulo_Biblioteca_Objetos_EliminarObjeto()
{
	system("cls");
	printf("INGRESE EL CODIGO DEL OBJETO A ELIMINAR: "),
	system("cls");
	printf("DESEA ELIMINAR EL LIBRO(SI|NO): ");
	system("cls");
	printf("Se ha eliminado el libro exitosamente...");
}

void Modulo_Biblioteca_Objetos_BuscarObjeto()
{
	system("cls");
	printf("INGRESE EL CODIGO DEL OBJETO A BUSCAR: ");
}


// ******************************************************



// *************** MODULO DE SOCIOS *****************

void Modulo_Socios()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE SOCIOS/PROFESIONALES--");
		
		printf("\n\n\t1- ESTUDIANTES");
		printf("\n\t2- PROFESIONALES");
		
		printf("\n\n\t3- VOLVER(MENU PRINCIPAL)");
		printf("\n\t4- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Socios_Estudiantes();
					}
			case 2:
					{
						Modulo_Socios_Profesionales();
					}
			case 3:
					{
						main();	
					}
			case 4:
					{
						Salir();
					}
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 3);
	
}

void Modulo_Socios_Estudiantes()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE SOCIOS/ESTUDIANTES--");
		printf("\n\n\t1- NUEVO ESTUDIANTE");
		printf("\n\t2- EDITAR ESTUDIANTE");
		printf("\n\t3- ELIMINAR ESTUDIANTE");
		printf("\n\t4- BUSCAR ESTUDIANTE");
		
		printf("\n\n\t5- VOLVER(MODULO DE SOCIOS)");
		printf("\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						
						break;
					}
			case 2:
					{
						
						break;
					}
			case 3:
					{
						
						break;
					}
			case 4:
					{
						
						break;
					}
			case 5:
					{
						Modulo_Socios();
					}
			case 6:
					{
						Salir();
					}
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 5);	
}

void Modulo_Socios_Profesionales()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE SOCIOS/PROFESIONALES--");
		printf("\n\n\t1- NUEVO PROFESIONAL");
		printf("\n\t2- EDITAR PROFESIONAL");
		printf("\n\t3- ELIMINAR PROFESIONAL");
		printf("\n\t4- BUSCAR PROFESIONAL");
		
		printf("\n\n\t5- VOLVER(MODULO DE SOCIOS)");
		printf("\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						
						break;
					}
			case 2:
					{
						
						break;
					}
			case 3:
					{
						
						break;
					}
			case 4:
					{
						
						break;
					}
			case 5:
					{
						Modulo_Socios();
					}
			case 6:
					{
						Salir();
					}
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 5);	
}


// **************************************************



// *************** MODULO DE PRESTAMOS *****************

void Modulo_Prestamos()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE PRESTAMOS--");
		
		printf("\n\n\t1- PRESTAMOS DE LIBROS");
		printf("\n\t2- PRESTAMOS DE OBJETOS");
		
		printf("\n\n\t3- VOLVER(MENU PRINCIPAL)");
		printf("\n\t4- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Prestamos_Libros();	
					}
			case 2:
					{
						Modulo_Prestamos_Objetos();	
					}
			case 3:
					{
						main();	
					}
			case 4:
					{
						Salir();
					}
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 3);
}

void Modulo_Prestamos_Libros()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE PRESTAMOS/LIBROS--");
		
		printf("\n\n\t1- NUEVO PRESTAMO");
		printf("\n\t2- EDITAR PRESTAMO");
		printf("\n\t3- COMPLETAR PRESTAMO");
		printf("\n\t4- BUSCAR PRESTAMO");
		
		printf("\n\n\t5- VOLVER(MODULO PRESTAMOS)");
		printf("\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Prestamos_Libros_Nuevo();	
					}
			case 2:
					{
						Modulo_Prestamos_Libros_Editar();	
					}
			case 3:
					{
						Modulo_Prestamos_Libros_Completar();
					}
			case 4:
					{
						Modulo_Prestamos_Libros_Buscar();
					}
			case 5:
					{
						Modulo_Prestamos();	
					}
			case 6:
					{
						Salir();
					}										
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
	}
	while(opcion >= 1 || opcion <= 5);	
}

void Modulo_Prestamos_Objetos()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE PRESTAMOS/OBJETOS--");
		
		printf("\n\n\t1- NUEVO PRESTAMO");
		printf("\n\t2- EDITAR PRESTAMO");
		printf("\n\t3- COMPLETAR PRESTAMO");
		printf("\n\t4- BUSCAR PRESTAMO");
		
		printf("\n\n\t5- VOLVER(MODULO PRESTAMOS)");
		printf("\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Prestamos_Objetos_Nuevo();	
					}
			case 2:
					{
						Modulo_Prestamos_Objetos_Editar();	
					}
			case 3:
					{
						Modulo_Prestamos_Objetos_Completar();	
					}
			case 4:
					{
						Modulo_Prestamos_Objetos_Buscar();
					}
			case 5:
					{
						Modulo_Prestamos();	
					}
			case 6:
					{
						Salir();
					}										
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
		
	}
	while(opcion >= 1 || opcion <= 5);		
}


void Modulo_Prestamos_Libros_Nuevo()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE PRESTAMOS/LIBROS/NUEVO PRESTAMO--");
		
		printf("\n\n\t1- PRESTAMO PARTICULAR");
		printf("\n\t2- PRESTAMO PARA SOCIO");
		
		printf("\n\n\t3- VOLVER(MODULO PRESTAMOS/LIBROS)");
		printf("\n\t4- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Prestamos_Libros_Nuevo_Particular();
						break;	
					}
			case 2:
					{
						Modulo_Prestamos_Libros_Nuevo_Socios();
						break;	
					}
			case 3:
					{
						Modulo_Prestamos_Libros();		
					}
			case 4:
					{
						Salir();
					}									
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
		
	}
	while(opcion >= 1 || opcion <= 3);	
}

void Modulo_Prestamos_Libros_Editar()
{
	int opcion = 0;
	
	system("cls");
	printf("INGRESE EL CODIGO DEL PRESTAMO: ");
	
	do
	{
		system("cls");
		printf("--MODULO DE PRESTAMOS/LIBROS/EDITAR PRESTAMO--");
		
		printf("\n\n\t1- EDITAR CODIGO");
		printf("\n\t2- EDITAR LIBRO");
		printf("\n\t3- EDITAR PRESTATARIO");
		printf("\n\t4- EDITAR CANTIDAD");
		
		printf("\n\n\t5- GUARDAR PRESTAMO");
		
		printf("\n\n\t6- VOLVER(MODULO PRESTAMOS/LIBROS)");
		printf("\n\t7- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						break;
					}
			case 2:
					{
						break;
					}
			case 3:
					{
						break;
					}
			case 4:
					{
						break;
					}	
			case 5:
					{
						break;	
					}
			case 6:
					{
						Modulo_Prestamos_Libros();	
					}
			case 7:
					{
						Salir();
					}																							
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
		
	}
	while(opcion >= 1 || opcion <= 6);	
}

void Modulo_Prestamos_Libros_Completar()
{
	printf("INGRESE EL CODIGO DEL PRESTAMO: ");
	system("cls");
	
	printf("DESEA COMPLETAR EL PRESTAMO(SI|NO): ");
	system("cls");
	
	printf("Prestamo completado con exito...");
}

void Modulo_Prestamos_Libros_Buscar()
{
		
}


void Modulo_Prestamos_Libros_Nuevo_Particular()
{
	
}

void Modulo_Prestamos_Libros_Nuevo_Socios()
{
	
}


void Modulo_Prestamos_Objetos_Nuevo()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE PRESTAMOS/OBJETOS/NUEVO PRESTAMO--");
		
		printf("\n\n\t1- PRESTAMO PARTICULAR");
		printf("\n\t2- PRESTAMO PARA SOCIO");
		
		printf("\n\n\t3- VOLVER(MODULO PRESTAMOS/OBJETOS)");
		printf("\n\t4- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Prestamos_Objetos_Nuevo_Particular();
						break;	
					}
			case 2:
					{
						Modulo_Prestamos_Objetos_Nuevo_Socios();
						break;
					}
			case 3:
					{
						Modulo_Prestamos_Libros();		
					}
			case 4:
					{
						Salir();
					}									
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
		
	}
	while(opcion >= 1 || opcion <= 3);	
}

void Modulo_Prestamos_Objetos_Editar()
{
	int opcion = 0;
	
	system("cls");
	printf("INGRESE EL CODIGO DEL PRESTAMO: ");
	
	do
	{
		system("cls");
		printf("--MODULO DE PRESTAMOS/OBJETOS/EDITAR PRESTAMO--");
		
		printf("\n\n\t1- EDITAR CODIGO");
		printf("\n\t2- EDITAR OBJETO");
		printf("\n\t3- EDITAR PRESTATARIO");
		printf("\n\t4- EDITAR CANTIDAD");
		
		printf("\n\n\t5- GUARDAR PRESTAMO");
		
		printf("\n\n\t6- VOLVER(MODULO PRESTAMOS/OBJETOS)");
		printf("\n\t7- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						break;	
					}
			case 2:
					{
						break;
					}
			case 3:
					{
						break;
					}
			case 4:
					{
						break;
					}	
			case 5:
					{
						break;
					}
			case 6:
					{
						Modulo_Prestamos_Libros();	
					}
			case 7:
					{
						Salir();
					}																							
			default:
					{
						system("cls");
						printf("Opcion incorrecta. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");
						break;
					}	
		}	
		
	}
	while(opcion >= 1 || opcion <= 6);	
}

void Modulo_Prestamos_Objetos_Completar()
{
	printf("INGRESE EL CODIGO DEL PRESTAMO: ");
	system("cls");
	
	printf("DESEA COMPLETAR EL PRESTAMO(SI|NO): ");
	system("cls");
	
	printf("Prestamo completado con exito...");
}

void Modulo_Prestamos_Objetos_Buscar()
{
		
}


void Modulo_Prestamos_Objetos_Nuevo_Particular()
{
	
}

void Modulo_Prestamos_Objetos_Nuevo_Socios()
{
	
}

// *****************************************************



// *************** FUNCIONES COMPLEMENTARIAS *****************

void Salir()
{
	system("cls");
	printf("Finalizando...");
	printf("\n\n");
	system("pause");
	
	exit(EXIT_SUCCESS);	
}

// ***********************************************************




















