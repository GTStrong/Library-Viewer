#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[81];

// ---------REGISTROS----------

	struct Estudiantes
	{
		string codigo;
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
		int existencias;
		
		string codigo;
		string titulo;
		string editorial;
		string seccion;
		string autor;
		
		bool borrado;
	};
	
	struct Objetos
	{
		int existencias;
		
		string codigo;
		string nombre;
		
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
			
			void Modulo_Biblioteca_Libros_ListarLibros();
			void Modulo_Biblioteca_Libros_NuevoLibro();
			void Modulo_Biblioteca_Libros_EditarLibro();
			void Modulo_Biblioteca_Libros_EliminarLibro();	
			void Modulo_Biblioteca_Libros_BuscarLibro();
			
			void Modulo_Biblioteca_Libros_ListarObjetos();
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
		void Abrir_Archivo_Libros(FILE *arch);
		
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
		
		printf("\n\n\t1- LISTAR LIBROS");
		printf("\n\n\t2- NUEVO LIBRO");
		printf("\n\t3- EDITAR LIBRO");
		printf("\n\t4- ELIMINAR LIBRO");
		printf("\n\t5- BUSCAR LIBRO");
		
		printf("\n\n\t6- VOLVER(MODULO DE BIBLIOTECA)");
		printf("\n\t7- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch(opcion)
		{
			case 1:
					{
						Modulo_Biblioteca_Libros_ListarLibros();	
						break;
					}
			case 2:
					{
						Modulo_Biblioteca_Libros_NuevoLibro();	
						break;
					}
			case 3:
					{
						Modulo_Biblioteca_Libros_EditarLibro();
						break;
					}
			case 4:
					{
						Modulo_Biblioteca_Libros_EliminarLibro();
						break;
					}
			case 5:
					{
						Modulo_Biblioteca_Libros_BuscarLibro();
						break;
					}
			case 6:
					{
						Modulo_Biblioteca();
						break;
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

void Modulo_Biblioteca_Objetos()
{
	int opcion = 0;
	
	do
	{
		system("cls");
		printf("--MODULO DE BIBLIOTECA/OBJETOS--");
		
		printf("\n\n\t1- LISTAR OBJETOS");
		printf("\n\n\t2- NUEVO OBJETO");
		printf("\n\t3- EDITAR OBJETO");
		printf("\n\t4- ELIMINAR OBJETO");
		printf("\n\t5- BUSCAR OBJETO");
		
		printf("\n\n\t6- VOLVER(MODULO DE BIBLIOTECA)");
		printf("\n\t7- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		scanf("%d", &opcion);
		
		switch( opcion )
		{
			case 1:
					{
						Modulo_Biblioteca_Libros_ListarObjetos();
						break;
					}			
			case 2:
					{
						Modulo_Biblioteca_Objetos_NuevoObjeto();
						break;
					}
			case 3:
					{
						Modulo_Biblioteca_Objetos_EditarObjeto();	
						break;
					}
			case 4:
					{
						Modulo_Biblioteca_Objetos_EliminarObjeto();
						break;
					}
			case 5:
					{
						Modulo_Biblioteca_Objetos_BuscarObjeto();
						break;
					}
			case 6:
					{
						Modulo_Biblioteca();
						break;
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

void Modulo_Biblioteca_Libros_ListarLibros()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_libros;
		arch_libros = fopen("Libros.dat", "rb");
			
		if(arch_libros == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Libros.dat");
			printf("\n\n(No hay ningun libro en la base de datos)");
			printf("\n\n");
			system("pause");
		}
		
	// ----------------------------------------------------------
	
	else
	{
		system("cls");
		
		Libros Reg_Libros;
		
		int i = 0;
		
		bool bandera = false;
		
		rewind(arch_libros);
		fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
		
		while(!feof(arch_libros))
		{
			if( Reg_Libros.borrado == false )
			{
				bandera = true;
				
				printf("LIBRO [%d]", i+1);
			
				printf("\n\tCodigo: %s", Reg_Libros.codigo);
				printf("\n\tTitulo: %s",Reg_Libros.titulo);
				printf("\n\tEditorial: %s",Reg_Libros.editorial);
				printf("\n\tSeccion: %s", Reg_Libros.seccion);
				printf("\n\tAutor: %s", Reg_Libros.autor);
				printf("\n\tExistencias: %d", Reg_Libros.existencias);
				printf("\n\n\n");
				
				i++;	
			}
				
			fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
		}
		
		if(bandera == false)
		{
			system("cls");
			printf("No se registro ningun libro...");
			printf("\n\n");
		}
	}
	
	system("pause");
	fclose(arch_libros);	
}

void Modulo_Biblioteca_Libros_NuevoLibro()
{	
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
	FILE *arch_libros;
	
	arch_libros = fopen("Libros.dat", "r+b");
	
	if(arch_libros == NULL)
	{
		arch_libros = fopen("Libros.dat", "a+b");
	}
	
	if(arch_libros == NULL)
	{
		system("cls");
		printf("ERROR. No se pudo crear el archivo Libros.dat");
		printf("\n\n");
		system("pause");	
	}	
	
	// ----------------------------------------------------------
	
	else
	{	
		Libros Reg_Libros;
		
		int opcion = 0;
		
		// -------- INICIALIZACIÓN DE VARIABLES A UN VALOR NULO -------- // Esto se hace para que las cadenas no almacenen caracteres aleatorios por el buffer de lectura.
		
			Reg_Libros.existencias = 0; 
		
			for(int i=0; i<strlen(Reg_Libros.codigo); i++)
				Reg_Libros.codigo[i] = NULL;

			for(int i=0; i<strlen(Reg_Libros.titulo); i++)
				Reg_Libros.titulo[i] = NULL;

			for(int i=0; i<strlen(Reg_Libros.editorial); i++)
				Reg_Libros.editorial[i] = NULL;
		
			for(int i=0; i<strlen(Reg_Libros.seccion); i++)
				Reg_Libros.seccion[i] = NULL;
		
			for(int i=0; i<strlen(Reg_Libros.autor); i++)
				Reg_Libros.autor[i] = NULL;
		
		// -------------------------------------------------------------
		
		do
		{
			system("cls");
			printf("--MODULO DE BIBLIOTECA/LIBROS/NUEVO LIBRO--");
			
				printf("\n\n\t1- INGRESAR CODIGO");
					if( strlen(Reg_Libros.codigo) != 0 ) // Comprobación de valor en la variable para imprimir en pantalla.
						printf(" (Actual: %s)", Reg_Libros.codigo);

			
				printf("\n\t2- INGRESAR TITULO");
					if( strlen(Reg_Libros.titulo) != 0 )
						printf(" (Actual: %s)", Reg_Libros.titulo);
								
				printf("\n\t3- INGRESAR EDITORIAL");
					if( strlen(Reg_Libros.editorial) != 0 )
						printf(" (Actual: %s)", Reg_Libros.editorial);			
				
				printf("\n\t4- INGRESAR SECCION");
					if( strlen(Reg_Libros.seccion) != 0 )
						printf(" (Actual: %s)", Reg_Libros.seccion);			
				
				printf("\n\t5- INGRESAR AUTOR");
					if( strlen(Reg_Libros.autor) != 0 )
						printf(" (Actual: %s)", Reg_Libros.autor);			
				
				printf("\n\t6- INGRESAR EXISTENCIAS");
					if( Reg_Libros.existencias != 0 )
						printf(" (Actual: %d)", Reg_Libros.existencias);			
				
			
			printf("\n\n\t7- GUARDAR LIBRO");
			
			printf("\n\n\t8- VOLVER(MODULO DE BIBLIOTECA/LIBROS)");
			printf("\n\t9- CERRAR APLICACION");
			
			printf("\n\nSELECCIONE UNA OPCION: ");
			scanf("%d", &opcion);
			
			switch(opcion)
			{
				case 1:
						{
							system("cls");
							printf("INGRESAR CODIGO: ");
							_flushall();
							gets(Reg_Libros.codigo);
							
							break;
						}
				case 2:
						{
							system("cls");
							printf("INGRESAR TITULO: ");
							_flushall();
							gets(Reg_Libros.titulo);
							
							break;	
						}
				case 3:
						{
							system("cls");
							printf("INGRESAR EDITORIAL: ");
							_flushall();
							gets(Reg_Libros.editorial);
													
							break;	
						}
				case 4:
						{
							system("cls");
							printf("INGRESAR SECCION: ");
							_flushall();
							gets(Reg_Libros.seccion);
													
							break;	
						}					
				case 5:
						{
							system("cls");
							printf("INGRESAR AUTOR: ");
							_flushall();
							gets(Reg_Libros.autor);
													
							break;	
						}
				case 6:
						{
							system("cls");
							printf("INGRESAR EXISTENCIAS: ");
							scanf("%d", &Reg_Libros.existencias);
													
							break;	
						}
				case 7:
						{
							// Con el if se comprueba que esten todos los campos del registro completos para guardar el libro.
							
							if( strlen(Reg_Libros.codigo) != 0 && strlen(Reg_Libros.titulo) != 0 && strlen(Reg_Libros.editorial) != 0 && strlen(Reg_Libros.seccion) != 0 && strlen(Reg_Libros.autor) != 0 && Reg_Libros.existencias != 0)
							{	
								// -------------- CARGA DEL REGISTRO EN ARCHIVO --------------

									fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
									
									system("cls");
									printf("El libro fue guardado exitosamente...");
									printf("\n\n");
									system("pause");
								
								// -----------------------------------------------------------
								
								// -------- INICIALIZACIÓN DE VARIABLES A UN VALOR NULO -------- // Para vaciar los campos y poder agregar un nuevo libro.
								
									Reg_Libros.existencias = 0; 
								
									for(int i=0; i<strlen(Reg_Libros.codigo); i++)
										Reg_Libros.codigo[i] = NULL;

									for(int i=0; i<strlen(Reg_Libros.titulo); i++)
										Reg_Libros.titulo[i] = NULL;
									
									for(int i=0; i<strlen(Reg_Libros.editorial); i++)
										Reg_Libros.editorial[i] = NULL;
									
									for(int i=0; i<strlen(Reg_Libros.seccion); i++)
										Reg_Libros.seccion[i] = NULL;
									
									for(int i=0; i<strlen(Reg_Libros.autor); i++)
										Reg_Libros.autor[i] = NULL;
								
								// -------------------------------------------------------------
								
							}
							else
							{
								system("cls");
								printf("No se pudo guardar el libro. Faltan campos por completar.");
								printf("\n\n");
								system("pause");
							}
																								
							break;	
						}										
				case 8:
						{
							fclose(arch_libros);
							Modulo_Biblioteca_Libros();	
						}										
				case 9:
						{
							fclose(arch_libros);
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
	
		
}

void Modulo_Biblioteca_Libros_EditarLibro()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_libros;
		arch_libros = fopen("Libros.dat", "r+b");
		
		if(arch_libros == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Libros.dat");
			printf("\n\n(No hay ningun libro en la base de datos)");
			printf("\n\n");
			system("pause");
		}
	
	// ----------------------------------------------------------
	
	else
	{
		Libros Reg_Libros;
		
		int opcion = 0;
		int existencias = 0;
		int posicion = 0;
		
		string target = {NULL};
		string codigo = {NULL};
		string titulo = {NULL};
		string editorial = {NULL};
		string seccion = {NULL};
		string autor = {NULL};
		string auxiliar = {NULL};							
		
		bool bandera = false;
		bool band_codigo = false;
		bool band_titulo = false;
		bool band_editorial = false;
		bool band_seccion = false;
		bool band_autor = false;
		bool band_existencias = false;
			
		// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
		
			system("cls");
			printf("INGRESE EL CODIGO DEL LIBRO A EDITAR: ");
			_flushall();
			gets(target);
			
			rewind(arch_libros);
			fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
			
			while(!feof(arch_libros) && bandera == false)
			{
				if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
				{
					bandera = true;
					fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
				}
				
				if(bandera == false)
				{
					fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);					
				}
	
			}
				
			if(bandera == true)
			{
				system("cls");
				printf("Se encontro el libro exitosamente...");
				printf("\n\n");
				system("pause");
				system("cls");
			
		// ---------------------------------------------------------------------
		
			do
			{
				system("cls");
				printf("--MODULO DE BIBLIOTECA/LIBROS/EDITAR LIBRO--");
		
				// ------------------ MOSTRAR LIBRO INGRESADO ------------------
				
					/*posicion = ftell(arch_libros);
					printf("\n\nPosicion: %d\n\n", posicion);
					system("pause");*/
					
					
					// Luego de ingresar el codigo en el case 7, si el codigo es incorrecto, 
					//se tiene que volver a recorrer el archivo para volver a coincidir con el target anterior.
					
					rewind(arch_libros);
					fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
					
					bandera = false;
							
					while(!feof(arch_libros) && bandera == false)
					{
						if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
						{
							bandera = true;
							fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
						}
						
						if(bandera == false)
						{
							fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);					
						}
			
					}
				
					printf("\n\n\tCodigo: %s", Reg_Libros.codigo);
					printf("\n\tTitulo: %s",Reg_Libros.titulo);
					printf("\n\tEditorial: %s",Reg_Libros.editorial);
					printf("\n\tSeccion: %s", Reg_Libros.seccion);
					printf("\n\tAutor: %s", Reg_Libros.autor);
					printf("\n\tExistencias: %d", Reg_Libros.existencias);
					
					/*posicion = ftell(arch_libros);
					printf("\n\nPosicion: %d\n\n", posicion);
					system("pause");*/
					
				// -------------------------------------------------------------	
				
				printf("\n\n   1- EDITAR CODIGO");
					if( strlen(codigo) != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
						printf(" (Edicion: %s)", codigo); 
			
				printf("\n   2- EDITAR TITULO");
					if( strlen(titulo) != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
						printf(" (Edicion: %s)", titulo); 
					
				printf("\n   3- EDITAR EDITORIAL");
					if( strlen(editorial) != 0 )
						printf(" (Edicion: %s)", editorial);				
				
				printf("\n   4- EDITAR SECCION");
					if( strlen(seccion) != 0 )
						printf(" (Edicion: %s)", seccion);				
				
				printf("\n   5- EDITAR AUTOR");
					if( strlen(autor) != 0 )
						printf(" (Edicion: %s)", autor);				
								
				printf("\n   6- EDITAR EXISTENCIAS");
					if( existencias != 0 )
						printf(" (Edicion: %d)", existencias);				
								
				
				printf("\n\n   7- GUARDAR LIBRO");
				printf("\n   8- INGRESAR OTRO CODIGO");
				
				printf("\n\n   9- VOLVER(MODULO DE BIBLIOTECA/LIBROS)");
				printf("\n   10- CERRAR APLICACION");
				
				printf("\n\nSELECCIONE UNA OPCION: ");
				scanf("%d", &opcion);
				
				switch(opcion)
				{
					case 1:
							{
								system("cls");
								printf("INGRESE CODIGO: ");
								_flushall();
								gets(codigo);
								
								break;
							}					
					case 2:
							{
								system("cls");
								printf("INGRESE TITULO: ");
								_flushall();
								gets(titulo);
								
								break;
							}
					case 3:
							{
								system("cls");
								printf("INGRESE EDITORIAL: ");
								_flushall();
								gets(editorial);
								
								break;	
							}
					case 4:
							{
								system("cls");
								printf("INGRESE SECCION: ");
								_flushall();
								gets(seccion);
								
								break;	
							}
					case 5:
							{
								system("cls");
								printf("INGRESE AUTOR: ");
								_flushall();
								gets(autor);
								
								break;	
							}
					case 6:
							{
								system("cls");
								printf("INGRESE EXISTENCIAS: ");
								scanf("%d", &existencias);
																
								break;	
							}
					case 7:
							{
								// ------ CARGA DE DATOS EN EL REGISTRO ------
								
									band_codigo = false;
									band_titulo = false;
									band_editorial = false;
									band_seccion = false;
									band_autor = false;
									band_existencias = false;
									
									if( strlen(codigo) != 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
									{
										strcpy(Reg_Libros.codigo, codigo);
										band_codigo = true;										
									}									
									if( strlen(titulo) != 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
									{
										strcpy(Reg_Libros.titulo, titulo);
										band_titulo = true;										
									}	
									if( strlen(editorial) != 0 )
									{
										strcpy(Reg_Libros.editorial, editorial);
										band_editorial = true;									
									}	
									if( strlen(seccion) != 0 )
									{
										strcpy(Reg_Libros.seccion, seccion);	
										band_seccion = true;
									}	
									if( strlen(autor) != 0 )
									{
										strcpy(Reg_Libros.autor, autor);
										band_autor = true;	
									}	
									if( existencias != 0 )
									{
										Reg_Libros.existencias = existencias;
										band_existencias = true;
									}
										
								// -------------------------------------------	
								
								// ----------------------------------------------- CARGA DEL REGISTRO EN EL ARCHIVO -----------------------------------------------
								
									if( band_codigo == true || band_titulo == true || band_editorial == true || band_seccion == true || band_autor == true || band_existencias == true )
									{
										fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
										
										system("cls");
										printf("Se edito el libro exitosamente...");
										printf("\n\n");
										system("pause");
										system("cls");
										
										for(int i=0; i<strlen(codigo); i++) // Revalorizacion de cadenas a un valor nulo.
											codigo[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el libro.										
										
										for(int i=0; i<strlen(titulo); i++) 
											titulo[i] = NULL;
										
										for(int i=0; i<strlen(editorial); i++)
											editorial[i] = NULL;
										
										for(int i=0; i<strlen(seccion); i++)
											seccion[i] = NULL;
										
										for(int i=0; i<strlen(autor); i++)
											autor[i] = NULL;
									}
									else
									{
										system("cls");
										printf("No se edito ningun campo del libro ingresado...");	
										printf("\n\n");
										system("pause");
										system("cls");
									}
						
								// --------------------------------------------------------------------------------------------------------------------------------
									
								break;
							}
					case 8:
							{			
								strcpy(auxiliar, target); // Se declara una variable auxiliar para tomar el valor del target anterior. 
								 						  // Esto se hace porque cuando el target ingresado es incorrecto, el puntero
														  // se tiene que volver a posicionar en el target anterior. 
														  
								system("cls");
								printf("INGRESE EL CODIGO DEL LIBRO A EDITAR: ");
								_flushall();
								gets(target);
								
								// --- REDECLARACIÓN DE VARIABLES A UN VALOR NULO ---
									
									Reg_Libros.existencias = 0; 
									Reg_Libros.borrado == false;						
									
									for(int i=0; i<strlen(Reg_Libros.codigo); i++)
										Reg_Libros.codigo[i] = NULL;
								
									for(int i=0; i<strlen(Reg_Libros.titulo); i++)
										Reg_Libros.titulo[i] = NULL;
									
									for(int i=0; i<strlen(Reg_Libros.editorial); i++)
										Reg_Libros.editorial[i] = NULL;
									
									for(int i=0; i<strlen(Reg_Libros.seccion); i++)
										Reg_Libros.seccion[i] = NULL;
									
									for(int i=0; i<strlen(Reg_Libros.autor); i++)
										Reg_Libros.autor[i] = NULL;
									
								// --------------------------------------------------
											
											
								// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
												
									bandera = false;
									
									rewind(arch_libros);
									fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
									
									while(!feof(arch_libros) && bandera == false)
									{
										if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
										{
											bandera = true;
											fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR); // Posicionamiento del puntero en el target.
										}
											
										if(bandera == false)
											fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);									
									}
									
									/*posicion = ftell(arch_libros);
									printf("Posicion: %d\n\n", posicion);
									system("pause");*/
																						
								// ---------------------------------------------------------------------

								if(bandera == true)
								{
									system("cls");
									printf("Se encontro el libro exitosamente...");
									printf("\n\n");
									system("pause");
									system("cls");
									
									// -- INICIALIZACION DE VARIABLES A UN VALOR NULO --
									
										existencias = 0; 
										
										for(int i=0; i<strlen(codigo); i++)
											codigo[i] = NULL;
											
										for(int i=0; i<strlen(titulo); i++)
											titulo[i] = NULL;
										
										for(int i=0; i<strlen(editorial); i++)
											editorial[i] = NULL;
										
										for(int i=0; i<strlen(seccion); i++)
											seccion[i] = NULL;
										
										for(int i=0; i<strlen(autor); i++)
											autor[i] = NULL;

									// -------------------------------------------------
								}
								else
								{
									system("cls");
									printf("No se encontro el codigo del libro ingresado...");
									printf("\n\n");
									system("pause");
									system("cls");
										
									strcpy(target, auxiliar); // La variable "target" toma el valor del auxiliar, que es del target anterior.	
									//Modulo_Biblioteca_Libros()
								}
									
								break;
							}							
					case 9:
							{
								Modulo_Biblioteca_Libros();
							}										
					case 10:
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
			while(opcion >= 1 || opcion <= 9);					
		}	
		else
		{
			system("cls");
			printf("No se encontro el codigo del libro ingresado...");
			printf("\n\n");
			system("pause");
			system("cls");	
		}	
	}
}

void Modulo_Biblioteca_Libros_EliminarLibro()
{
	
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_libros;
		arch_libros = fopen("Libros.dat", "r+b");
			
		if(arch_libros == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Libros.dat");
			printf("\n\n(No hay ningun libro en la base de datos)");
			printf("\n\n");
			system("pause");
		}
	// ----------------------------------------------------------
	else
	{
		Libros Reg_Libros;
		
		string target = {NULL};
		string centinela = {NULL};	
		
		bool bandera = false;
		
		// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
		
			system("cls");	
			printf("INGRESE EL CODIGO DEL LIBRO A ELIMINAR: ");
			_flushall();
			gets(target);	
			
			bandera = false;
			rewind(arch_libros);
			fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
			
			while(!feof(arch_libros) && bandera == false)
			{
				if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false )
				{
					fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
					bandera = true;	
				}

	
				if (bandera == false)
					fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
			}
		
		// ---------------------------------------------------------------------	
			
			if(bandera == true)
			{
				do
				{
					system("cls");
					printf("DESEA ELIMINAR EL LIBRO(SI|NO): ");
					_flushall();
					gets(centinela);
					
					if( strcmp((strupr(centinela)), "SI") == 0) // Cadena ingresada se convierte a mayusculas, y se compara con la cadena "SI"
					{
						Reg_Libros.borrado = true;
						fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
						
							// ---------------------------- BAJA FISICA DEL LIBRO ------------------------------
							
							FILE *aux;
							aux = fopen("auxiliar.dat", "w+b");
							
							rewind(arch_libros);
							fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
							
							while (!feof(arch_libros))
							{
								if (Reg_Libros.borrado == false)
								{
									fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, aux);
									
									bandera = true;
								}
								
								fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
							}
							
							if (bandera = true)
							{
								system("cls");
								printf("Se ha borrado el libro exitosamente...");
								printf("\n\nVolviendo a Biblioteca/Libros...");
								printf("\n\n");
								system("pause");
								system("cls");
							}
							else
							{
								system("cls");
								printf("No se pudo borrar el libro.");
								printf("\n\n");
								system("pause");
							}
							
							fclose(arch_libros);
							fclose(aux);
							
							remove("Libros.dat");
							rename("auxiliar.dat", "Libros.dat");
							remove("auxiliar.dat");
							
						// -----------------------------------------------------------------------------------
										
					}
					else if( strcmp((strupr(centinela)), "NO") == 0) // Cadena ingresada se convierte a mayusculas, y se compara con la cadena "NO"
					{
						system("cls");
						printf("No se ha borrado el libro ingresado.");
						printf("\n\nVolviendo a Biblioteca/Libros...");
						printf("\n\n");
						system("pause");
						system("cls");
					}
					else if( (strcmp((strupr(centinela)), "SI") != 0) && (strcmp((strupr(centinela)), "NO") != 0) ) // Cadena ingresada es distinta de SI y NO
					{
						system("cls");
						printf("Valor incorrecto. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");	
					}
				} 	
				while( (strcmp((strupr(centinela)), "SI") != 0) && (strcmp((strupr(centinela)), "NO") != 0) ); 
				
			} // Cierre if de bandera
			else
			{
				system("cls");
				printf("No se encontro el codigo del libro ingresado...");
				printf("\n\nVolviendo a Biblioteca/Libros...");
				printf("\n\n");
				system("pause");
				system("cls");
					
				Modulo_Biblioteca_Libros(); // Retornar a la funcion
			}

		
	} // Cierre if de archivo	
}

void Modulo_Biblioteca_Libros_BuscarLibro()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_libros;
		arch_libros = fopen("Libros.dat", "r+b");
			
		if(arch_libros == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Libros.dat");
			printf("\n\n(No hay ningun libro en la base de datos)");
			printf("\n\n");
			system("pause");
		}
	// ----------------------------------------------------------
	else
	{
		Libros Reg_Libros;
		
		string target = {NULL};		
		
		bool bandera = false;
		
		// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
		
			system("cls");	
			printf("INGRESE EL CODIGO DEL LIBRO A BUSCAR: ");
			_flushall();
			gets(target);	
			
			bandera = false;
			rewind(arch_libros);
			fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
			
			while(!feof(arch_libros) && bandera == false )
			{
				if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false )
					bandera = true;
		
				if (bandera == false)
					fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
			}
						
		// ---------------------------------------------------------------------
		
		if(bandera == true)
		{
			system("cls");
			printf("Se ha encontrado el libro exitosamente...");
			
			printf("\n\n\tCodigo: %s", Reg_Libros.codigo);
			printf("\n\tTitulo: %s",Reg_Libros.titulo);
			printf("\n\tEditorial: %s",Reg_Libros.editorial);
			printf("\n\tSeccion: %s", Reg_Libros.seccion);
			printf("\n\tAutor: %s", Reg_Libros.autor);
			printf("\n\tExistencias: %d", Reg_Libros.existencias);	
			
			printf("\n\n");
			system("pause");
			system("cls");		
		}
		else
		{
			system("cls");
			printf("No se encontro el codigo del libro ingresado...");
			printf("\n\nVolviendo a pantalla anterior...");
			printf("\n\n");
			system("pause");
			system("cls");
				
			Modulo_Biblioteca_Libros(); // Retornar a la funcion
		}
	}
}

//

void Modulo_Biblioteca_Libros_ListarObjetos()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_objetos;
		arch_objetos = fopen("Objetos.dat", "rb");
			
		if(arch_objetos == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Objetos.dat");
			printf("\n\n(No hay ningun objeto en la base de datos)");
			printf("\n\n");
		}
		
	// ----------------------------------------------------------
	
	else
	{
		system("cls");
		
		Objetos Reg_Objetos;
		
		int i = 0;
		
		bool bandera = false;
		
		rewind(arch_objetos);
		fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
		
		while(!feof(arch_objetos))
		{
			if( Reg_Objetos.borrado == false )
			{
				bandera = true;
				
				printf("OBJETO [%d]", i+1);
			
					printf("\n\tCodigo: %s", Reg_Objetos.codigo);
					printf("\n\tNombre del objeto: %s", Reg_Objetos.nombre);
					printf("\n\tExistencias: %d", Reg_Objetos.existencias);
					printf("\n\n\n");
				
				i++;	
			}
				
			fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
		}
		
		if(bandera == false)
		{
			printf("No se registro ningun objeto..");
			printf("\n\n");
		}
	}
	
	system("pause");
	fclose(arch_objetos);	
}

void Modulo_Biblioteca_Objetos_NuevoObjeto()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
	FILE *arch_objetos;
	arch_objetos = fopen("Objetos.dat", "r+b");
	
	if(arch_objetos == NULL)
	{
		arch_objetos = fopen("Objetos.dat", "a+b");
	}
	
	if(arch_objetos == NULL)
	{
		system("cls");
		printf("ERROR. No se pudo crear el archivo Objetos.dat");
		printf("\n\n");
		system("pause");	
	}
	// ----------------------------------------------------------

	
	else
	{
		Objetos Reg_Objetos;
		
		int opcion = 0;
		
		// -------- INICIALIZACIÓN DE VARIABLES A UN VALOR NULO -------- // Esto se hace para que las cadenas no almacenen caracteres aleatorios por el buffer de lectura.
		
			for(int i=0; i<strlen(Reg_Objetos.codigo); i++) 
				Reg_Objetos.codigo[i] = NULL;
				
			for(int i=0; i<strlen(Reg_Objetos.nombre); i++)
				Reg_Objetos.nombre[i] = NULL;
				
			Reg_Objetos.existencias = 0;
		
		// -------------------------------------------------------------
		
		do
		{
			system("cls");
			printf("--MODULO DE BIBLIOTECA/LIBROS/NUEVO OBJETO--");
			
			printf("\n\n\t1- INGRESAR CODIGO");
				if( strlen(Reg_Objetos.codigo) != 0 ) // Comprobación de valor en la variable para imprimir en pantalla.
						printf(" (Actual: %s)", Reg_Objetos.codigo);
						
			printf("\n\t2- INGRESAR NOMBRE DE OBJETO");
				if( strlen(Reg_Objetos.nombre) != 0 ) 
						printf(" (Actual: %s)", Reg_Objetos.nombre);
						
			printf("\n\t3- INGRESAR EXISTENCIAS");
				if( Reg_Objetos.existencias != 0 ) 
						printf(" (Actual: %d)", Reg_Objetos.existencias);			
			
			printf("\n\n\t4- GUARDAR OBJETO");
			
			printf("\n\n\t5- VOLVER(MODULO DE BIBLIOTECA/OBJETOS)");
			printf("\n\t6- CERRAR APLICACION");
			
			printf("\n\nSELECCIONE UNA OPCION: ");
			scanf("%d", &opcion);
			
			switch(opcion)
			{
				case 1:
						{
							system("cls");
							printf("INGRESAR CODIGO: ");
							_flushall();
							gets(Reg_Objetos.codigo);
							
							break;
						}				
				case 2:
						{
							system("cls");
							printf("INGRESAR NOMBRE DE OBJETO: ");
							_flushall();
							gets(Reg_Objetos.nombre);							
							
							break;
						}
				case 3:
						{
							system("cls");
							printf("INGRESAR EXISTENCIAS: ");
							scanf("%d", &Reg_Objetos.existencias);
							
							break;	
						}
				case 4:
						{
							// Con el if se comprueba que esten todos los campos del registro completos para guardar el objeto.
							
							if( strlen(Reg_Objetos.codigo) != 0 && strlen(Reg_Objetos.nombre) != 0 && Reg_Objetos.existencias != 0 )
							{	
								// -------------- CARGA DEL REGISTRO EN ARCHIVO --------------
								
									fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
									
									system("cls");
									printf("El objeto fue guardado exitosamente...");
									printf("\n\n");
									system("pause");
								
								// -----------------------------------------------------------
								
								// -------- INICIALIZACIÓN DE VARIABLES A UN VALOR NULO -------- // Para vaciar los campos y poder agregar un nuevo libro.
														
									for(int i=0; i<strlen(Reg_Objetos.codigo); i++) 
										Reg_Objetos.codigo[i] = NULL;
										
									for(int i=0; i<strlen(Reg_Objetos.nombre); i++)
										Reg_Objetos.nombre[i] = NULL;
										
									Reg_Objetos.existencias = 0;
								
								// -------------------------------------------------------------
								
							}
							else
							{
								system("cls");
								printf("No se pudo guardar el objeto. Faltan campos por completar.");
								printf("\n\n");
								system("pause");
							}
																								
							break;		
						}
				case 5:
						{
							fclose(arch_objetos);
							Modulo_Biblioteca_Objetos();	
						}
				case 6:
						{
							fclose(arch_objetos);							
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

			
}

void Modulo_Biblioteca_Objetos_EditarObjeto()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_objetos;
		arch_objetos = fopen("Objetos.dat", "r+b");
		
		if(arch_objetos == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Objetos.dat");
			printf("\n\n(No hay ningun objeto en la base de datos)");
			printf("\n\n");
			system("pause");
		}
	
	// ----------------------------------------------------------	
	
	else
	{
		Objetos Reg_Objetos;
		
		int opcion = 0;
		int existencias = 0;
		int posicion = 0;
		
		string target = {NULL};
		string codigo = {NULL};
		string nombre = {NULL};
		string auxiliar = {NULL};							
		
		bool bandera = false;
		bool band_codigo = false;
		bool band_nombre = false;
		bool band_existencias = false;
		
		// ------------ BUSQUEDA DEL CODIGO DEL OBJETO EN EL ARCHIVO ------------
		
			system("cls");
			printf("INGRESE EL CODIGO DEL OBJETO A EDITAR: ");
			_flushall();
			gets(target);
			
			rewind(arch_objetos);
			fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
			
			while(!feof(arch_objetos) && bandera == false)
			{
				if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.borrado == false)
				{
					bandera = true;
					fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
				}
				
				if(bandera == false)
				{
					fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);					
				}
	
			}
				
			if(bandera == true)
			{
				system("cls");
				printf("Se encontro el objeto exitosamente...");
				printf("\n\n");
				system("pause");
				system("cls");
			
		// ---------------------------------------------------------------------		
		
				do
				{
					system("cls");
					printf("--MODULO DE BIBLIOTECA/OBJETOS/EDITAR OBJETO--");
					
					// ------------------ MOSTRAR OBJETO INGRESADO ------------------
						
							/*posicion = ftell(arch_objetos);
							printf("\n\nPosicion: %d\n\n", posicion);
							system("pause");*/
							
							
							// Luego de ingresar el codigo en el case 4, si el codigo es incorrecto, 
							//se tiene que volver a recorrer el archivo para volver a coincidir con el target anterior.
							
							rewind(arch_objetos);
							fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
							
							bandera = false;
							
							while(!feof(arch_objetos) && bandera == false)
							{
								if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.borrado == false)
								{
									bandera = true;
									fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
								}
								
								if(bandera == false)
								{
									fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);					
								}
					
							}
						
							printf("\n\n\tCodigo: %s", Reg_Objetos.codigo);
							printf("\n\tNombre: %s", Reg_Objetos.nombre);
							printf("\n\tExistencias: %d", Reg_Objetos.existencias);
							
							/*posicion = ftell(arch_objetos);
							printf("\n\nPosicion: %d\n\n", posicion);
							system("pause");*/
							
						// -------------------------------------------------------------
							
						printf("\n\n   1- EDITAR CODIGO");
								if( strlen(codigo) != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
									printf(" (Actual: %s)", codigo); 			
						
						printf("\n   2- EDITAR NOMBRE");
								if( strlen(nombre) != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
									printf(" (Actual: %s)", nombre); 
									
						printf("\n   3- EDITAR EXISTENCIAS");
								if( existencias != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
									printf(" (Actual: %d)", existencias); 			
						
						printf("\n\n   4- GUARDAR OBJETO");
						printf("\n   5- INGRESAR OTRO CODIGO");
						
						printf("\n\n   6- VOLVER(MODULO DE BIBLIOTECA/OBJETOS)");
						printf("\n   7- CERRAR APLICACION");
						
						printf("\n\nSELECCIONE UNA OPCION: ");
						scanf("%d", &opcion);
						
						switch(opcion)
						{
							case 1:
									{
										system("cls");
										printf("INGRESE CODIGO: ");
										_flushall();
										gets(codigo);
																
										break;
									}				
							case 2:
									{
										system("cls");
										printf("INGRESE NOMBRE DE OBJETO: ");
										_flushall();
										gets(nombre);
																	
										break;
									}
							case 3:
									{
										system("cls");
										printf("INGRESE EXISTENCIAS: ");
										scanf("%d", &existencias);
																	
										break;	
									}
							case 4:
									{
										// ------ CARGA DE DATOS EN EL REGISTRO ------
										
											band_codigo = false;
											band_nombre = false;
											band_existencias = false;
											
											if( strlen(codigo) != 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
											{
												strcpy(Reg_Objetos.codigo, codigo);
												band_codigo = true;										
											}	
											if( strlen(nombre) != 0 )
											{
												strcpy(Reg_Objetos.nombre, nombre);
												band_nombre = true;										
											}		
											if( existencias != 0 )
											{
												Reg_Objetos.existencias = existencias;
												band_existencias = true;
											}
												
										// -------------------------------------------	
										
										// ----------------------------------------------- CARGA DEL REGISTRO EN EL ARCHIVO -----------------------------------------------
										
											if( band_codigo == true || band_nombre == true || band_existencias == true )
											{
												fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
												
												system("cls");
												printf("Se edito el objeto exitosamente...");
												printf("\n\n");
												system("pause");
												system("cls");
												
												for(int i=0; i<strlen(codigo); i++) // Revalorizacion de cadenas a un valor nulo.
													codigo[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
												
												for(int i=0; i<strlen(nombre); i++)
													nombre[i] = NULL;
												
												existencias = 0;
											}
											else
											{
												system("cls");
												printf("No se edito ningun campo del objeto ingresado...");	
												printf("\n\n");
												system("pause");
												system("cls");
											}
								
										// --------------------------------------------------------------------------------------------------------------------------------
											
										break;
									}							
							case 5:
									{
										strcpy(auxiliar, target); // Se declara una variable auxiliar para tomar el valor del target anterior. 
										 						  // Esto se hace porque cuando el target ingresado es incorrecto, el puntero
																  // se tiene que volver a posicionar en el target anterior. 
																  
										system("cls");
										printf("INGRESE EL CODIGO DEL OBJETO A EDITAR: ");
										_flushall();
										gets(target);
										
										// --- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO ---
											
											Reg_Objetos.existencias = 0; 
											Reg_Objetos.borrado == false;
											
											for(int i=0; i<strlen(codigo); i++) 
													codigo[i] = NULL;			
												
											for(int i=0; i<strlen(nombre); i++)
													nombre[i] = NULL;
												
											existencias = 0;
											
										// --------------------------------------------------
													
													
										// ------------ BUSQUEDA DEL CODIGO DEL OBJETO EN EL ARCHIVO ------------
														
											bandera = false;
											
											rewind(arch_objetos);
											fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
											
											while(!feof(arch_objetos) && bandera == false)
											{
												if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.borrado == false)
												{
													bandera = true;
													fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
												}
												
												if(bandera == false)
													fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);					
											}
											
											/*posicion = ftell(arch_objetos);
											printf("Posicion: %d\n\n", posicion);
											system("pause");*/
																								
										// ---------------------------------------------------------------------
		
										if(bandera == true)
										{
											system("cls");
											printf("Se encontro el objeto exitosamente...");
											printf("\n\n");
											system("pause");
											system("cls");
											
											// -- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO --
											
												existencias = 0; 
										
												for(int i=0; i<strlen(codigo); i++)
													codigo[i] = NULL;
																					
												for(int i=0; i<strlen(nombre); i++)
													nombre[i] = NULL;
		
											// -------------------------------------------------
										}
										else
										{
											system("cls");
											printf("No se encontro el codigo del objeto ingresado...");
											printf("\n\n");
											system("pause");
											system("cls");
												
											strcpy(target, auxiliar); // La variable "target" toma el valor del auxiliar, que es del target anterior.	
											//Modulo_Biblioteca_Objetos()
										}
																	
										break;	
									}						
							case 6:
									{
										Modulo_Biblioteca_Objetos();	
										break;
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
			
		else
		{
			system("cls");
			printf("No se encontro el codigo del objeto ingresado...");
			printf("\n\n");
			system("pause");
			system("cls");	
		}
	}

}

void Modulo_Biblioteca_Objetos_EliminarObjeto()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_objetos;
		arch_objetos = fopen("Objetos.dat", "r+b");
			
		if(arch_objetos == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Libros.dat");
			printf("\n\n(No hay ningun libro en la base de datos)");
			printf("\n\n");
			system("pause");
		}
	// ----------------------------------------------------------
	else
	{
		Objetos Reg_Objetos;
		
		string target = {NULL};
		string centinela = {NULL};	
		
		bool bandera = false;
		
		// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
		
		
			system("cls");	
			printf("INGRESE EL CODIGO DEL OBJETO A ELIMINAR: ");
			_flushall();
			gets(target);	
			
			bandera = false;
			rewind(arch_objetos);
			fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
			
			while(!feof(arch_objetos) && bandera == false)
			{
				if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.borrado == false )
				{
					fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
					bandera = true;	
				}

	
				if (bandera == false)
					fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
			}
		
		// ---------------------------------------------------------------------	
			
			if(bandera == true)
			{
				do
				{
					system("cls");
					printf("DESEA ELIMINAR EL OBJETO(SI|NO): ");
					_flushall();
					gets(centinela);
					
					if( strcmp((strupr(centinela)), "SI") == 0) // Cadena ingresada se convierte a mayusculas, y se compara con la cadena "SI"
					{
						Reg_Objetos.borrado = true;
						fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
						
						// ---------------------------- BAJA FISICA DEL ARCHIVO ------------------------------
							FILE *aux;
							aux = fopen("auxiliar.dat", "w+b");
							
							rewind(arch_objetos);
							fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
							
							while (!feof(arch_objetos))
							{
								if (Reg_Objetos.borrado == false)
								{
									fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, aux);
									
									bandera = true;
								}
								
								fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
							}
							
							if (bandera = true)
							{
								system("cls");
								printf("Se ha borrado el objeto exitosamente...");
								printf("\n\nVolviendo a Biblioteca/Libros...");
								printf("\n\n");
								system("pause");
								system("cls");
							}
							else
							{
								system("cls");
								printf("No se pudo borrar el objeto.");
								printf("\n\n");
								system("pause");
							}
							
							fclose(arch_objetos);
							fclose(aux);
							
							remove("Objetos.dat");
							rename("auxiliar.dat", "Objetos.dat");
							remove("auxiliar.dat");
							
						// -----------------------------------------------------------------------------------
											
					}
					else if( strcmp((strupr(centinela)), "NO") == 0) // Cadena ingresada se convierte a mayusculas, y se compara con la cadena "NO"
					{
						system("cls");
						printf("No se ha borrado el objeto ingresado.");
						printf("\n\nVolviendo a Biblioteca/Libros...");
						printf("\n\n");
						system("pause");
						system("cls");
					}
					else if( (strcmp((strupr(centinela)), "SI") != 0) && (strcmp((strupr(centinela)), "NO") != 0) ) // Cadena ingresada es distinta de SI y NO
					{
						system("cls");
						printf("Valor incorrecto. Ingrese nuevamente...");
						printf("\n\n");
						system("pause");
						system("cls");	
					}

				}
				while( (strcmp((strupr(centinela)), "SI") != 0) && (strcmp((strupr(centinela)), "NO") != 0) );
				
			} // Cierre if de bandera	
			else
			{
				system("cls");
				printf("No se encontro el codigo del objeto ingresado...");
				printf("\n\nVolviendo a Biblioteca/Libros...");
				printf("\n\n");
				system("pause");
				system("cls");
				
				Modulo_Biblioteca_Objetos(); // Retornar a la funcion
			}
	
	} // Cierre if de archivo	
}

void Modulo_Biblioteca_Objetos_BuscarObjeto()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_objetos;
		arch_objetos = fopen("Objetos.dat", "r+b");
			
		if(arch_objetos == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Objetos.dat");
			printf("\n\n(No hay ningun libro en la base de datos)");
			printf("\n\n");
			system("pause");
		}
	// ----------------------------------------------------------
	else
	{
		Objetos Reg_Objetos;
		
		string target = {NULL};		
		
		bool bandera = false;
		
		// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
		
			system("cls");	
			printf("INGRESE EL CODIGO DEL LIBRO A BUSCAR: ");
			_flushall();
			gets(target);	
			
			bandera = false;
			rewind(arch_objetos);
			fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
			
			while(!feof(arch_objetos) && bandera == false )
			{
				if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.borrado == false )
					bandera = true;
		
				if (bandera == false)
					fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
			}
						
		// ---------------------------------------------------------------------
		
		if(bandera == true)
		{
			system("cls");
			printf("Se ha encontrado el objeto exitosamente...");
			
			printf("\n\n\tCodigo: %s", Reg_Objetos.codigo);
			printf("\n\tNombre: %s", Reg_Objetos.nombre);
			printf("\n\tExistencias: %d", Reg_Objetos.existencias);	
			
			printf("\n\n");
			system("pause");
			system("cls");		
		}
		else
		{
			system("cls");
			printf("No se encontro el codigo del objeto ingresado...");
			printf("\n\nVolviendo a pantalla anterior...");
			printf("\n\n");
			system("pause");
			system("cls");
				
			Modulo_Biblioteca_Objetos(); // Retornar a la funcion
		}
	}
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

void Abrir_Archivo_Libros(FILE *arch)
{
	arch = fopen("Libros.dat", "r+b");
	
	if(arch == NULL)
	{
		system("cls");
		printf("ERROR. El archivo Libros.dat no existe...");
		printf("\n\nTiene que registrar al menos un libro.");
		printf("\n\n");
		system("pause");
	}
}

// ***********************************************************




















