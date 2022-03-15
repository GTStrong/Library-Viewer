#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>

typedef char string[81];

// ---------REGISTROS----------	

	struct Fecha
	{
		int dd;
		int mm;
		int aaaa;	
	};

	struct Estudiantes
	{
		int prestamo;	
				
		string id;
		string apeYNom;
		string turno;
		string curso;
		string dni;		
	
		bool borrado;
	};
	
	struct Profesionales
	{
		int prestamo;
		
		string id;
		string apeYNom;
		string telefono;
		string dni;	
		
		bool borrado;

	};
		
	struct Libros
	{
		int existencias;
		int prestado;
		
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
		int prestado;
		
		string codigo;
		string nombre;
		
		bool borrado;
	};	
	
	struct Prestamos_Libros
	{
		int cantidad;
		
		string codigo;
		string cod_libro;
		string idprestatario;
		string apeYNom;
		string dni;
		string telefono;
		
		Fecha fecha;
		
		bool borrado;	
	};	
	
	struct Prestamos_Objetos
	{
		int cantidad;
		
		string codigo;
		string objeto;
		string idprestatario;
		string apeYNom;
		string dni;
		string telefono;
		Fecha fecha;
	
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
			
			void Modulo_Biblioteca_Objetos_ListarObjetos();
			void Modulo_Biblioteca_Objetos_NuevoObjeto();
			void Modulo_Biblioteca_Objetos_EditarObjeto();
			void Modulo_Biblioteca_Objetos_EliminarObjeto();
			void Modulo_Biblioteca_Objetos_BuscarObjeto();
		
			
		// - Modulo de socios
			void Modulo_Socios();
			void Modulo_Socios_Estudiantes();
			void Modulo_Socios_Profesionales();
			
			void Modulo_Socios_Estudiantes_ListarEstudiantes();
			void Modulo_Socios_Estudiantes_NuevoEstudiante();
			void Modulo_Socios_Estudiantes_EditarEstudiante();
			void Modulo_Socios_Estudiantes_EliminarEstudiante();
			void Modulo_Socios_Estudiantes_BuscarEstudiante();
			
			void Modulo_Socios_Profesionales_ListarProfesionales();
			void Modulo_Socios_Profesionales_NuevoProfesional();
			void Modulo_Socios_Profesionales_EditarProfesional();
			void Modulo_Socios_Profesionales_EliminarProfesional();
			void Modulo_Socios_Profesionales_BuscarProfesional();
						
		// - Modulo de prestamos
			void Modulo_Prestamos();
			void Modulo_Prestamos_Libros();
			void Modulo_Prestamos_Objetos();
			
			void Modulo_Prestamos_Libros_Listar();
			void Modulo_Prestamos_Libros_Nuevo();
			void Modulo_Prestamos_Libros_Editar();
			void Modulo_Prestamos_Libros_Completar();
			void Modulo_Prestamos_Libros_Buscar();
			
			void Modulo_Prestamos_Objetos_Listar();
			void Modulo_Prestamos_Objetos_Nuevo();
			void Modulo_Prestamos_Objetos_Editar();
			void Modulo_Prestamos_Objetos_Completar();
			void Modulo_Prestamos_Objetos_Buscar();
		
	// ----------------------------------------
		
	// ------- FUNCIONES COMPLEMENTARIAS ----------
	
		void Salir();
		char Comprobacion_Tecla_Escape();
		int Fecha_Dia();
		int Fecha_Mes();
		int Fecha_Anio();
		
	// --------------------------------------------
		
// *********************************************	
	


main()
{
	system("color 0F");
	
	char opcion = NULL;
	

	do
	{
		system("cls");
		
		printf("-- LIBRARY VIEWER --");
		printf("\n\n\t1- MODULO DE SOCIOS");
		printf("\n\t2- MODULO DE BIBLIOTECA");
		printf("\n\t3- MODULO DE PRESTAMOS");
		
		printf("\n\n\t4- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();
		
		switch(opcion)
		{
			case '1': 	
					{
						Modulo_Socios();
						break;
					}
			case '2': 	
					{
						Modulo_Biblioteca();	
						break;
					}
			case '3': 	
					{
						Modulo_Prestamos();
						break;
					}
			case '4': 	
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
	while(true);	
	
}



// *************** MODULO DE BIBLIOTECA *****************

void Modulo_Biblioteca()
{
	char opcion = NULL;
	
	do
	{
		opcion = NULL;
		
		system("cls");
		printf("-- MODULO DE BIBLIOTECA --");
		
		printf("\n\n\t1- VER LIBROS");
		printf("\n\t2- VER OBJETOS");
		
		printf("\n\n\t3- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();
				
		switch(opcion)
		{
			case '1':
					{
						Modulo_Biblioteca_Libros();	
					}
			case '2':
					{
						Modulo_Biblioteca_Objetos();
					}
			case '0':
					{
						main();	
					}
			case '3':
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
	while(true);	
}

void Modulo_Biblioteca_Libros()
{
	char opcion = NULL;
	
	do
	{
		opcion = NULL;		
		system("cls");
		printf("-- MODULO DE BIBLIOTECA/LIBROS --");
		
		printf("\n\n\t1- LISTAR LIBROS");
		printf("\n\n\t2- NUEVO LIBRO");
		printf("\n\t3- EDITAR LIBRO");
		printf("\n\t4- ELIMINAR LIBRO");
		printf("\n\t5- BUSCAR LIBRO");
		
		printf("\n\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();
		
		switch(opcion)
		{
			case '1':
					{
						Modulo_Biblioteca_Libros_ListarLibros();	
						break;
					}
			case '2':
					{
						Modulo_Biblioteca_Libros_NuevoLibro();	
						break;
					}
			case '3':
					{
						Modulo_Biblioteca_Libros_EditarLibro();
						break;
					}
			case '4':
					{
						Modulo_Biblioteca_Libros_EliminarLibro();
						break;
					}
			case '5':
					{
						Modulo_Biblioteca_Libros_BuscarLibro();
						break;
					}
			case '0':
					{
						Modulo_Biblioteca();
						break;
					}
			case '6':
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
	while(true);		
}

void Modulo_Biblioteca_Objetos()
{
	char opcion = NULL;
	
	do
	{
		opcion = NULL;
		
		system("cls");
		printf("-- MODULO DE BIBLIOTECA/OBJETOS --");
		
		printf("\n\n\t1- LISTAR OBJETOS");
		printf("\n\n\t2- NUEVO OBJETO");
		printf("\n\t3- EDITAR OBJETO");
		printf("\n\t4- ELIMINAR OBJETO");
		printf("\n\t5- BUSCAR OBJETO");
		
		printf("\n\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();
		
		switch( opcion )
		{
			case '1':
					{
						Modulo_Biblioteca_Objetos_ListarObjetos();
						break;
					}			
			case '2':
					{
						Modulo_Biblioteca_Objetos_NuevoObjeto();
						break;
					}
			case '3':
					{
						Modulo_Biblioteca_Objetos_EditarObjeto();	
						break;
					}
			case '4':
					{
						Modulo_Biblioteca_Objetos_EliminarObjeto();
						break;
					}
			case '5':
					{
						Modulo_Biblioteca_Objetos_BuscarObjeto();
						break;
					}
			case '0':
					{
						Modulo_Biblioteca();
						break;
					}
			case '6':
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
	while(true);		
}

void Modulo_Biblioteca_Libros_ListarLibros()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_libros;
		arch_libros = fopen("Libros.dat", "rb");
			
		if(arch_libros == NULL)
		{
			system("cls");
			printf("ERROR: No se pudo abrir el archivo Libros.dat");
			printf("\n\n(No hay ningun libro en la base de datos)");
			printf("\n\n");
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
				
				printf("LIBRO [%d]\n", i+1);
			
				printf("\n\tCodigo: %s", Reg_Libros.codigo);
				printf("\n\tTitulo: %s",Reg_Libros.titulo);
				printf("\n\tEditorial: %s",Reg_Libros.editorial);
				printf("\n\tSeccion: %s", Reg_Libros.seccion);
				printf("\n\tAutor: %s", Reg_Libros.autor);
				printf("\n\tExistencias: %d", Reg_Libros.existencias);
				
				printf("\n\n------------------------------------------------------------------");				
				printf("\n\n");
				
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
	FILE *arch_objetos;
	
	arch_libros = fopen("Libros.dat", "a+b");
	
	if(arch_libros == NULL)
	{
		system("cls");
		printf("ERROR: No se pudo crear el archivo Libros.dat");
		printf("\n\n");
		system("pause");	
	}	
	
	// ----------------------------------------------------------
	
	else
	{	
		Libros Reg_Libros;
		Objetos Reg_Objetos;
		
		int existencias = NULL;
		
		char opcion = NULL; // variable centinela para switch principal.
		
		string centinela = {NULL}; // variable centinela para SI|NO en la carga del archivo.
		string codigo = {NULL}; 
		string titulo = {NULL};
		string editorial = {NULL};
		string autor = {NULL};
		string seccion = {NULL};
		
		bool band_codigo = NULL;
		bool band_titulo = NULL;
		bool band_editorial = NULL;		
		bool band_seccion = NULL;
		bool band_autor = NULL;
		bool band_existencias = NULL;
		bool codigo_existente_l = NULL;
		bool codigo_existente_o = NULL;

		do
		{
			opcion = NULL;
			
			system("cls");
			
			printf("-- MODULO DE BIBLIOTECA/LIBROS/NUEVO LIBRO --");
			
			printf("\n\n\t1- INGRESAR LIBRO");
			printf("\n\t2- GUARDAR LIBRO");
			
			printf("\n\n\t3- CERRAR APLICACION");
	
			printf("\n\nSELECCIONE UNA OPCION: ");
			opcion = Comprobacion_Tecla_Escape();
		
			switch( opcion )
			{
				case '1':
						{
							system("cls");
							
							// ------------------------------ CARGA DE LOS DATOS ------------------------------
								do
							 	{	
							 		codigo_existente_l = NULL;
							 		codigo_existente_o = NULL;
							 		
							 		system("cls");
									printf("-- CARGA DE DATOS DEL NUEVO LIBRO --");
								 	printf("\n\n(Si desea cancelar, escriba 'salir')");
								 	
								 	// ------ COMPROBACION DE EXISTENCIA DEL CODIGO ------
		
									 	printf("\n\n\tINGRESE CODIGO DEL LIBRO: ");
										_flushall();
										gets(codigo);
											if(strcmp(codigo, "salir") == 0)
											{
												for(int i=0; i<strlen(codigo); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
													codigo[i] = NULL;
												
												fclose(arch_libros);
												Modulo_Biblioteca_Libros_NuevoLibro(); // Salida de la carga de datos.								
											}
											
										rewind(arch_libros);
										fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
										
										while(!feof(arch_libros) && codigo_existente_l == false)
										{
											if(strcmp(codigo, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
											{
												codigo_existente_l = true;
												/*printf("OCURRENCIA EN LIBRO ");
												system("pause");*/		
												break;
											}
												
											if(codigo_existente_l == false)
												fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
										}									
																
										arch_objetos = fopen("Objetos.dat", "rb");
										if(arch_objetos != NULL)
										{
											rewind(arch_objetos);
											fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);			
											
											while(!feof(arch_objetos) && codigo_existente_o == false)
											{									
												if(strcmp(codigo, Reg_Objetos.codigo) == 0 && Reg_Objetos.borrado == false)
												{
													codigo_existente_o = true;
													break;
												}
												
												if(codigo_existente_o == false)
													fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);			
											}	
										}
										
										if(codigo_existente_l == true || codigo_existente_o == true)
										{
											system("cls");
											printf("El codigo ingresado ya existe. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}	
									}	
									while(codigo_existente_l == true || codigo_existente_o == true);
									
								// ---------------------------------------------------								 					

					 			system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO LIBRO --");
								printf("\n\n(Si desea cancelar, escriba 'salir')");								
								printf("\n\n\tTITULO: ");
								_flushall();
								gets(titulo);
									if(strcmp(titulo, "salir") == 0)
									{
										for(int i=0; i<strlen(titulo); i++)
											titulo[i] = NULL;
											
										break;									
									}
	
				 				system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO LIBRO --");
								printf("\n\n(Si desea cancelar, escriba 'salir')");									
								printf("\n\n\tEDITORIAL: ");
								_flushall();
								gets(editorial);
									if(strcmp(editorial, "salir") == 0)
									{
										for(int i=0; i<strlen(editorial); i++)
											editorial[i] = NULL;
																			
										break;										
									}
						
				 				system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO LIBRO --");
								printf("\n\n(Si desea cancelar, escriba 'salir')");															
								printf("\n\n\tSECCION: ");
								_flushall();
								gets(seccion);
									if(strcmp(seccion, "salir") == 0)
									{
										for(int i=0; i<strlen(seccion); i++)
											seccion[i] = NULL;	
																		
										break;									
									}
	
				 				system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO LIBRO --");
								printf("\n\n(Si desea cancelar, escriba 'salir')");									
								printf("\n\n\tAUTOR: ");
								_flushall();
								gets(autor);
									if(strcmp(autor, "salir") == 0)
									{
										for(int i=0; i<strlen(autor); i++)
											autor[i] = NULL;
																			
										break;										
									}
								
								do
								{	
									system("cls");
									printf("-- CARGA DE DATOS DEL NUEVO LIBRO --");
									printf("\n\n(Si desea cancelar, escriba '0')");
									printf("\n\n\tEXISTENCIAS: ");
									scanf("%d", &existencias);
									
									if(existencias == 0)
									{
										fclose(arch_libros);
										Modulo_Biblioteca_Libros_NuevoLibro();
									}
									
									if(existencias <= 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");								
									}								
								}
								while(existencias <= 0);
								
							// --------------------------------------------------------------------------------
							
							break;
						 }
				case '2':
						{	
							// ------------------------------ COMPROBACIÓN DE CAMPOS VACIOS ------------------------------	
										 				 	
								if(strlen(codigo) != 0)
						 		{
						 			strcpy(Reg_Libros.codigo, codigo);
									band_codigo = true;						 			
								}
		
						 		if(strlen(titulo) != 0)
						 		{
						 			strcpy(Reg_Libros.titulo, titulo);		
									band_titulo = true;				 			
								}
	
						 		if(strlen(editorial) != 0)
						 		{
						 			strcpy(Reg_Libros.editorial, editorial);	
									band_editorial = true;						 			
								}
	 			
						 		if(strlen(seccion) != 0)
						 		{
						 			strcpy(Reg_Libros.seccion, seccion);						 			
						 			band_seccion = true;
								}
						 			
						 		if(strlen(autor) != 0)
						 		{
						 			strcpy(Reg_Libros.autor, autor);
									band_autor = true;						 				
								}
				
						 		if(existencias != 0)
						 		{
						 			Reg_Libros.existencias = existencias;	
									band_existencias = true;										 			
								}
										
							// -------------------------------------------------------------------------------------------
							
							if(band_codigo == true && band_titulo == true && band_editorial == true && band_seccion == true && band_autor == true && band_existencias == true)
							{						 	
							 	do
							 	{
									system("cls");
								 	printf("DATOS INGRESADOS: ");
								 	
								 	printf("\n\n\tCODIGO: %s", codigo);
								 	printf("\n\tTITULO: %s", titulo);
								 	printf("\n\tEDITORIAL: %s", editorial);
								 	printf("\n\tSECCION: %s", seccion);
								 	printf("\n\tAUTOR: %s", autor);
								 	printf("\n\tEXISTENCIAS: %d", existencias);

									printf("\n\nDESEA CARGAR EL LIBRO EN LA BASE DE DATOS(SI|NO): ");
					 				_flushall();
					 				gets(centinela);
					 				strupr(centinela);
					 			
					 				if(strcmp(centinela, "SI") == 0)
					 				{
										fseek(arch_libros, 2, SEEK_END);
										Reg_Libros.prestado = NULL;
										Reg_Libros.borrado = NULL;
										fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
										
										system("cls");
										printf("Se ha cargado el libro existosamente...");
										printf("\n\n");
										system("pause");
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
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
												
											existencias = NULL;	
											
											band_codigo = NULL;
											band_titulo = NULL;
											band_editorial = NULL;		
											band_seccion = NULL;
											band_autor = NULL;
											band_existencias = NULL;
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------					 				
									}
									else if(strcmp(centinela, "NO") == 0)
									{
										system("cls");
										printf("No se ha cargado el libro.");
										printf("\n\n");
										system("pause");
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											/*for(int i=0; i<strlen(codigo); i++)
												codigo[i] = NULL;
						
											for(int i=0; i<strlen(titulo); i++)
												titulo[i] = NULL;
		
											for(int i=0; i<strlen(editorial); i++)
												editorial[i] = NULL;
		
											for(int i=0; i<strlen(seccion); i++)
												seccion[i] = NULL;														
									
											for(int i=0; i<strlen(autor); i++)
												autor[i] = NULL;
												
											existencias = NULL;	
											
											band_codigo = NULL;
											band_titulo = NULL;
											band_editorial = NULL;		
											band_seccion = NULL;
											band_autor = NULL;
											band_existencias = NULL;*/
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------					 														
									}
									else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");
									}		
								}
								while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);
							}
							else
							{
								system("cls");
								printf("No es posible cargar el libro. Hay campos incompletos.");
								printf("\n\n");
								system("pause");
							}
							
							break;
						 }
				case '3':
						 {
						 	fclose(arch_libros);
							Salir();
						 }
				case '0':
						 {
						 	fclose(arch_libros);
						 	Modulo_Biblioteca_Libros();
							break;
						 }
				default:
						 {
						 	system("cls");
						 	printf("Opcion incorrecta. Ingrese nuevamente...");
						 	printf("\n\n");
						 	system("pause");
							break;
						 }	
						 				 					 					 				 	
			} // cierre switch
		} 
		while(true);			
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
			printf("ERROR: El archivo 'Libros.dat' no existe.");
			printf("\n\n(Se tiene que cargar al menos un libro)");
			printf("\n\n");
			system("pause");
		}
	
	// ----------------------------------------------------------
	
	else
	{
		Libros Reg_Libros;
		
		char opcion = NULL;
		
		int existencias = NULL;
		int posicion = NULL;
		
		string target = {NULL};
		string codigo = {NULL};
		string titulo = {NULL};
		string editorial = {NULL};
		string seccion = {NULL};
		string autor = {NULL};
		string auxiliar = {NULL};							
		
		bool bandera = NULL;
		bool band_codigo = NULL;
		bool band_titulo = NULL;
		bool band_editorial = NULL;
		bool band_seccion = NULL;
		bool band_autor = NULL;
		bool band_existencias = NULL;
		bool band_prestado = NULL;
			
		// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
		
		do
		{
			bandera = NULL;
			band_prestado = NULL;
			
			system("cls");
			printf("-- EDICION DE UN LIBRO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE EL CODIGO DEL LIBRO A EDITAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_libros);
				Modulo_Biblioteca_Libros();
			}	
			
			rewind(arch_libros);
			fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
			
			while(!feof(arch_libros) && bandera == false)
			{
				if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.prestado > 0 && Reg_Libros.borrado == false)
				{
					band_prestado = true;
					break;
				}
				
				if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.prestado == 0 && Reg_Libros.borrado == false)
				{
					fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
					bandera = true;	
					break;
				}					

				if (bandera == false)
					fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
			}
			
			if(band_prestado == true)
			{
				system("cls");
				printf("No es posible editar. El libro ingresado se encuentra en prestamo.");
				printf("\n\n");
				system("pause");
			}
			
			if(bandera == false && band_prestado == false)
			{
				system("cls");
				printf("No se encontro el codigo del libro ingresado...");
				printf("\n\n");
				system("pause");
			}
			
			if(bandera == true && band_prestado == false)
			{
				system("cls");
				printf("Se encontro el libro exitosamente...");
				printf("\n\n");
				system("pause");	
			}			
		}
		while(band_prestado == true || bandera == false);
			
		// ---------------------------------------------------------------------
		
			do
			{
				opcion = NULL;
				
				system("cls");
				printf("--MODULO DE BIBLIOTECA/LIBROS/EDITAR LIBRO--");
		
				// ------------------ MOSTRAR LIBRO INGRESADO ------------------
				
					/*posicion = ftell(arch_libros);
					printf("\n\nPosicion: %d\n\n", posicion);
					system("pause");*/
					
					
					// Luego de ingresar el codigo en el case 7, si el codigo es incorrecto, 
					//se tiene que volver a recorrer el archivo para volver a coincidir con el target anterior.
					
					arch_libros = fopen("Libros.dat", "r+b");
					rewind(arch_libros);
					fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
							
					bandera = NULL;
					while(!feof(arch_libros) && bandera == false)
					{
						if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.prestado > 0 && Reg_Libros.borrado == false)
						{
							band_prestado = true;
							break;
						}
						
						if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.prestado == 0 && Reg_Libros.borrado == 0)
						{
							fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
							bandera = true;	
							break;
						}					
		
						if (bandera == false)
							fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
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
				
				printf("\n\n   9- CERRAR APLICACION");
				
				printf("\n\nSELECCIONE UNA OPCION: ");
				opcion = Comprobacion_Tecla_Escape();
				
				switch( opcion )
				{
					case '1':
							{
								system("cls");
								printf("INGRESE CODIGO: ");
								_flushall();
								gets(codigo);
								
								break;
							}					
					case '2':
							{
								system("cls");
								printf("INGRESE TITULO: ");
								_flushall();
								gets(titulo);
								
								break;
							}
					case '3':
							{
								system("cls");
								printf("INGRESE EDITORIAL: ");
								_flushall();
								gets(editorial);
								
								break;	
							}
					case '4':
							{
								system("cls");
								printf("INGRESE SECCION: ");
								_flushall();
								gets(seccion);
								
								break;	
							}
					case '5':
							{
								system("cls");
								printf("INGRESE AUTOR: ");
								_flushall();
								gets(autor);
								
								break;	
							}
					case '6':
							{
								system("cls");
								printf("INGRESE EXISTENCIAS: ");
								scanf("%d", &existencias);
																
								break;	
							}
					case '7':
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
					case '8':
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
									Reg_Libros.borrado = NULL;						
									
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
												
									/*bandera = false;
									
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
									}*/
									
									/*posicion = ftell(arch_libros);
									printf("Posicion: %d\n\n", posicion);
									system("pause");*/
									
									
									bandera = NULL;
									band_prestado = NULL;
									rewind(arch_libros);
									fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
									
									while(!feof(arch_libros) && bandera == false)
									{
										if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.prestado > 0 && Reg_Libros.borrado == false)
										{
											band_prestado = true;
											break;
										}
										
										if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.prestado == 0 && Reg_Libros.borrado == false)
										{
											fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
											bandera = true;	
											break;
										}					
						
										if (bandera == false)
											fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
									}
									
								if(band_prestado == true)
								{
									system("cls");
									printf("No es posible editar. El libro ingresado se encuentra en prestamo.");
									printf("\n\n");
									system("pause");
									strcpy(target, auxiliar);
								}
								
								if(bandera == false && band_prestado == false)
								{
									system("cls");
									printf("No se encontro el codigo del libro ingresado...");
									printf("\n\n");
									system("pause");
									strcpy(target, auxiliar);
								}												
																						
								// ---------------------------------------------------------------------

								if(bandera == true && band_prestado == false)
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
									
								break;
							}							
					case '0':
							{
								Modulo_Biblioteca_Libros();
							}										
					case '9':
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
			while(true);					
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
			printf("ERROR: El archivo 'Libros.dat' no existe.");
			printf("\n\n(Se tiene que cargar al menos un libro)");
			printf("\n\n");
			system("pause");
		}
	// ----------------------------------------------------------
	else
	{
		Libros Reg_Libros;
		
		string target = {NULL};
		string centinela = {NULL};	
		
		bool bandera = NULL;
		bool band_prestado = NULL;
		
		// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
	
		do
		{
			bandera = NULL;
			band_prestado = NULL;
			
			system("cls");
			printf("-- BORRADO DE UN LIBRO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE EL CODIGO DEL LIBRO A ELIMINAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_libros);
				Modulo_Biblioteca_Libros();
			}	
			
			rewind(arch_libros);
			fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
			
			while(!feof(arch_libros) && bandera == false)
			{
				if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.prestado > 0 && Reg_Libros.borrado == false) 
				{
					band_prestado = true;
					break;
				}
				
				if( strcmp(target, Reg_Libros.codigo) == 0 && Reg_Libros.prestado == 0 && Reg_Libros.borrado == false)
				{
					fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
					bandera = true;	
					break;
				}					

				if (bandera == false)
					fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
			}
			
			if(band_prestado == true)
			{
				system("cls");
				printf("No es posible eliminar. El libro ingresado se encuentra en prestamo.");
				printf("\n\n");
				system("pause");
			}
			
			if(bandera == false && band_prestado == false)
			{
				system("cls");
				printf("No se encontro el codigo del libro ingresado...");
				printf("\n\n");
				system("pause");
			}			
		}
		while(band_prestado == true || bandera == false);		
		
		
		// ---------------------------------------------------------------------	
			
		do
		{
			system("cls");
			printf("-- BORRADO DE UN LIBRO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tDESEA ELIMINAR EL LIBRO(SI|NO): ");
			_flushall();
			gets(centinela);
			
			if(strcmp(centinela, "salir") == 0)
			{
				fclose(arch_libros);
				Modulo_Biblioteca_Libros();
			}
			
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

	} // Cierre if de archivo	
}

void Modulo_Biblioteca_Libros_BuscarLibro()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_libros;
		arch_libros = fopen("Libros.dat", "rb");
			
		if(arch_libros == NULL)
		{
			system("cls");
			printf("ERROR: El archivo 'Libros.dat' no existe.");
			printf("\n\n(Se tiene que cargar al menos un libro)");
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
			printf("-- BUSQUEDA DE UN LIBRO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE EL CODIGO DEL LIBRO A BUSCAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_libros);
				Modulo_Biblioteca_Libros();
			}	
			
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
			
			fclose(arch_libros);	
		}
		else
		{
			system("cls");
			printf("No se encontro el codigo del libro ingresado...");
			printf("\n\nVolviendo a pantalla anterior...");
			printf("\n\n");
			system("pause");
			system("cls");
			
			fclose(arch_libros);	
			Modulo_Biblioteca_Libros(); // Retornar a la funcion
		}
	}
}

//

void Modulo_Biblioteca_Objetos_ListarObjetos()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_objetos;
		arch_objetos = fopen("Objetos.dat", "rb");
			
		if(arch_objetos == NULL)
		{
			system("cls");
			printf("ERROR: El archivo 'Objetos.dat' no existe.");
			printf("\n\n(Se tiene que cargar al menos un objeto)");
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
			
					printf("\n\n\tCodigo: %s", Reg_Objetos.codigo);
					printf("\n\tNombre del objeto: %s", Reg_Objetos.nombre);
					printf("\n\tExistencias: %d", Reg_Objetos.existencias);
					
					printf("\n\n------------------------------------------------------------------");
					
					printf("\n\n");
				
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
	FILE *arch_libros;
	
	arch_objetos = fopen("Objetos.dat", "a+b");
	
	if(arch_objetos == NULL)
	{
		system("cls");
		printf("ERROR: No se pudo crear el archivo Objetos.dat");
		printf("\n\n");
		system("pause");	
	}	
	
	// ----------------------------------------------------------
	
	else
	{	
		Objetos Reg_Objetos;
		Libros Reg_Libros;
		
		int existencias = NULL;
		
		char opcion = NULL; // variable centinela para switch principal.
		
		string centinela = {NULL}; // variable centinela para SI|NO en la carga del archivo.
		string codigo = {NULL}; 
		string nombre = {NULL};
				
		bool band_codigo = NULL;
		bool band_nombre = NULL;
		bool band_existencias = NULL;
		bool codigo_existente = NULL;
 		bool codigo_existente_l = NULL;
 		bool codigo_existente_o = NULL;		
		do
		{
			opcion = NULL;
			
			system("cls");
			
			printf("-- MODULO DE BIBLIOTECA/OBJETOS/NUEVO OBJETO --");
			
			printf("\n\n\t1- INGRESAR OBJETO");
			printf("\n\t2- GUARDAR OBJETO");
			
			printf("\n\n\t3- CERRAR APLICACION");
	
			printf("\n\nSELECCIONE UNA OPCION: ");
			opcion = Comprobacion_Tecla_Escape();
		
			switch( opcion )
			{
				case '1':
						{
							system("cls");
							
							// ------------------------------ CARGA DE LOS DATOS ------------------------------
									do
							 	{	
							 		codigo_existente_l = NULL;
							 		codigo_existente_o = NULL;
							 		
							 		system("cls");
									printf("-- CARGA DE DATOS DEL NUEVO OBJETO --");
								 	printf("\n\n(Si desea cancelar, escriba 'salir')");
								 	
								 	// ------ COMPROBACION DE EXISTENCIA DEL CODIGO ------
		
									 	printf("\n\n\tINGRESE CODIGO DEL OBJETO: ");
										_flushall();
										gets(codigo);
											if(strcmp(codigo, "salir") == 0)
											{
												for(int i=0; i<strlen(codigo); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
													codigo[i] = NULL;
												
												fclose(arch_objetos);
												Modulo_Biblioteca_Objetos_NuevoObjeto(); // Salida de la carga de datos.								
											}
						
						
										rewind(arch_objetos);
										fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);			
										
										while(!feof(arch_objetos) && codigo_existente_o == false)
										{
											if(strcmp(codigo, Reg_Objetos.codigo) == 0 && Reg_Objetos.borrado == false)
											{
												codigo_existente_o = true;
												break;
											}
											
											if(codigo_existente_o == false)
												fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);			
										}	
							
										arch_libros = fopen("Libros.dat", "rb");
										if(arch_libros != NULL)
										{
											rewind(arch_libros);
											fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
											
											while(!feof(arch_libros) && codigo_existente_l == false)
											{
												if(strcmp(codigo, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
												{
													codigo_existente_l = true;
													/*printf("OCURRENCIA EN LIBRO ");
													system("pause");*/		
													break;
												}
													
												if(codigo_existente_l == false)
													fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
											}											
										}
	
										if(codigo_existente_l == true || codigo_existente_o == true)
										{
											system("cls");
											printf("El codigo ingresado ya existe. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}	
									}	
									while(codigo_existente_l == true || codigo_existente_o == true);
									
									
								// ---------------------------------------------------
								
							 	system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO OBJETO --");
								printf("\n\n(Si desea cancelar, escriba 'salir')");													
								printf("\n\n\tNOMBRE: ");
								_flushall();
								gets(nombre);
									if(strcmp(nombre, "salir") == 0)
									{
										for(int i=0; i<strlen(nombre); i++)
											nombre[i] = NULL;
											
										break;									
									}
										
									do
									{
								
									 	system("cls");
										printf("-- CARGA DE DATOS DEL NUEVO OBJETO --");
										printf("\n\n(Si desea cancelar, escriba '0')");				
										printf("\n\n\tEXISTENCIAS: ");
										scanf("%d", &existencias);
										
										if(existencias == 0)
										{
											fclose(arch_objetos);
											Modulo_Biblioteca_Objetos_NuevoObjeto();
										}
										
										if(existencias <= 0)
										{
											system("cls");
											printf("Valor incorrecto. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}
										
									}
									while(existencias <= 0);
								
							// --------------------------------------------------------------------------------
							
							break;
						 }
				case '2':
						{	
							// ------------------------------ COMPROBACIÓN DE CAMPOS VACIOS ------------------------------	
										 				 	
								if(strlen(codigo) != 0)
						 		{
						 			strcpy(Reg_Objetos.codigo, codigo);
									band_codigo = true;						 			
								}
		
						 		if(strlen(nombre) != 0)
						 		{
						 			strcpy(Reg_Objetos.nombre, nombre);		
									band_nombre = true;				 			
								}
	
						 		if(existencias != 0)
						 		{
						 			Reg_Objetos.existencias = existencias;	
									band_existencias = true;										 			
								}
							
							// -------------------------------------------------------------------------------------------
							
							if(band_codigo == true && band_nombre == true && band_existencias == true)
							{	
														 	
							 	do
							 	{
									system("cls");
								 	printf("DATOS INGRESADOS: ");
								 	
								 	printf("\n\n\tCODIGO: %s", codigo);
								 	printf("\n\tNOMBRE: %s", nombre);
								 	printf("\n\tEXISTENCIAS: %d", existencias);

									printf("\n\nDESEA CARGAR EL OBJETO EN LA BASE DE DATOS(SI|NO): ");
					 				_flushall();
					 				gets(centinela);
					 				strupr(centinela);
					 			
					 				if(strcmp(centinela, "SI") == 0)
					 				{
										fseek(arch_objetos, 2, SEEK_END);
										Reg_Objetos.prestado = NULL;
										Reg_Objetos.borrado = NULL;
										fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
										
										system("cls");
										printf("Se ha cargado el objeto existosamente...");
										printf("\n\n");
										system("pause");
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(codigo); i++)
												codigo[i] = NULL;
						
											for(int i=0; i<strlen(nombre); i++)
												nombre[i] = NULL;

											existencias = NULL;	
											
											band_codigo = NULL;
											band_nombre = NULL;
											band_existencias = NULL;
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------					 				
									}
									else if(strcmp(centinela, "NO") == 0)
									{
										system("cls");
										printf("No se ha cargado el libro.");
										printf("\n\n");
										system("pause");
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(codigo); i++)
												codigo[i] = NULL;
						
											for(int i=0; i<strlen(nombre); i++)
												nombre[i] = NULL;

											existencias = NULL;	
											
											band_codigo = NULL;
											band_nombre = NULL;
											band_existencias = NULL;
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------				 														
									}
									else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");
									}		
								}
								while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);
								
							}
							else
							{
								system("cls");
								printf("No es posible cargar el objeto. Hay campos incompletos.");
								printf("\n\n");
								system("pause");
							}
							
							break;
						 }
				case '3':
						 {
						 	fclose(arch_objetos);
							Salir();
						 }
				case '0':
						 {
						 	fclose(arch_objetos);
						 	Modulo_Biblioteca_Objetos();
							break;
						 }
				default:
						 {
						 	system("cls");
						 	printf("Opcion incorrecta. Ingrese nuevamente...");
						 	printf("\n\n");
						 	system("pause");
							break;
						 }	
						 				 					 					 				 	
			} // cierre switch
		} 
		while(true);			
	}
		
}

void Modulo_Biblioteca_Objetos_EditarObjeto()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_objetos;
		FILE *arch_prestamos_o;
		arch_objetos = fopen("Objetos.dat", "r+b");
		
		if(arch_objetos == NULL)
		{
			system("cls");
			printf("ERROR: El archivo 'Objetos.dat' no existe.");
			printf("\n\n(Se tiene que cargar al menos un objeto)");
			printf("\n\n");
			system("pause");
		}
	
	// ----------------------------------------------------------	
	
	else
	{
		Objetos Reg_Objetos;
		Prestamos_Objetos Reg_Prestamos_O;
		
		char opcion = NULL;
		int existencias = NULL;
		int posicion = NULL;
		
		string target = {NULL};
		string codigo = {NULL};
		string nombre = {NULL};
		string auxiliar = {NULL};							
		
		bool bandera = NULL;
		bool band_codigo = NULL;
		bool band_nombre = NULL;
		bool band_existencias = NULL;
		bool objeto_encontrado = NULL;
		bool band_prestado = NULL;
		
		// ------------ BUSQUEDA DEL CODIGO DEL OBJETO EN EL ARCHIVO ------------
		
		do
		{
			bandera = NULL;
			band_prestado = NULL;
			
			system("cls");
			printf("-- EDICION DE UN OBJETO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE EL CODIGO DEL OBJETO A EDITAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_objetos);
				Modulo_Biblioteca_Objetos();
			}	
			
			rewind(arch_objetos);
			fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
			
			while(!feof(arch_objetos) && bandera == false)
			{
				if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.prestado > 0 && Reg_Objetos.borrado == false)
				{
					band_prestado = true;
					break;
				}
				
				if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.prestado == 0 && Reg_Objetos.borrado == false)
				{
					fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
					bandera = true;	
					break;
				}					

				if (bandera == false)
					fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
			}
			
			if(band_prestado == true)
			{
				system("cls");
				printf("No es posible editar. El objeto ingresado se encuentra en prestamo.");
				printf("\n\n");
				system("pause");
			}
			
			if(bandera == false && band_prestado == false)
			{
				system("cls");
				printf("No se encontro el codigo del objeto ingresado...");
				printf("\n\n");
				system("pause");
			}	
			
			if(bandera == true && band_prestado == false)
			{
				system("cls");
				printf("Se encontro el objeto exitosamente...");
				printf("\n\n");
				system("pause");	
			}		
		}
		while(band_prestado == true || bandera == false);
			

			
		// ---------------------------------------------------------------------		
		
				do
				{
					opcion = NULL;
					
					system("cls");
					printf("--MODULO DE BIBLIOTECA/OBJETOS/EDITAR OBJETO--");
					
					// ------------------ MOSTRAR OBJETO INGRESADO ------------------
						
							/*posicion = ftell(arch_objetos);
							printf("\n\nPosicion: %d\n\n", posicion);
							system("pause");*/
							
							
							// Luego de ingresar el codigo en el case 4, si el codigo es incorrecto, 
							//se tiene que volver a recorrer el archivo para volver a coincidir con el target anterior.
							
							arch_objetos = fopen("Objetos.dat", "r+b");
							rewind(arch_objetos);
							fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
							
							bandera = NULL;
							while(!feof(arch_objetos) && bandera == false)
							{
								if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.prestado > 0 && Reg_Objetos.borrado == false)
								{
									band_prestado = true;
									break;
								}
								
								if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.prestado == 0 && Reg_Objetos.borrado == false)
								{
									fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
									bandera = true;	
									break;
								}					
				
								if (bandera == false)
									fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
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
						
						printf("\n   6- CERRAR APLICACION");
						
						printf("\n\nSELECCIONE UNA OPCION: ");
						opcion = Comprobacion_Tecla_Escape();
						
						switch(opcion)
						{
							case '1':
									{
										system("cls");
										printf("INGRESE CODIGO: ");
										_flushall();
										gets(codigo);
																
										break;
									}				
							case '2':
									{
										system("cls");
										printf("INGRESE NOMBRE DE OBJETO: ");
										_flushall();
										gets(nombre);
																	
										break;
									}
							case '3':
									{
										system("cls");
										printf("INGRESE EXISTENCIAS: ");
										scanf("%d", &existencias);
																	
										break;	
									}
							case '4':
									{
										// ------ CARGA DE DATOS EN EL REGISTRO ------
										
											band_codigo = NULL;
											band_nombre = NULL;
											band_existencias = NULL;
											objeto_encontrado = NULL;
											
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
												
												// -------------- EDICION DEL NOMBRE DE OBJETO EN ARCHIVO DE PRESTAMOS --------------
												
													arch_prestamos_o = fopen("Prestamos_O", "r+b");
													
													if(arch_prestamos_o != NULL)
													{
														rewind(arch_prestamos_o);
														fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
														
														while(!feof(arch_prestamos_o) && objeto_encontrado == false)
														{
															if(strcmp(nombre, Reg_Prestamos_O.objeto) == 0)
															{
																objeto_encontrado = true;
																break;	
															}
															
															if(objeto_encontrado == false)
																fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
			
														}	
													}
													
												// ----------------------------------------------------------------------------------
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
							case '5':
									{
										strcpy(auxiliar, target); // Se declara una variable auxiliar para tomar el valor del target anterior. 
										 						  // Esto se hace porque cuando el target ingresado es incorrecto, el puntero
																  // se tiene que volver a posicionar en el target anterior. 
																  
										system("cls");
										printf("INGRESE EL CODIGO DEL OBJETO A EDITAR: ");
										_flushall();
										gets(target);
										
										// --- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO ---
											
											Reg_Objetos.existencias = NULL; 
											Reg_Objetos.borrado = NULL;
											
											for(int i=0; i<strlen(codigo); i++) 
													codigo[i] = NULL;			
												
											for(int i=0; i<strlen(nombre); i++)
													nombre[i] = NULL;
												
											existencias = NULL;
											
										// --------------------------------------------------
													
													
										// ------------ BUSQUEDA DEL CODIGO DEL OBJETO EN EL ARCHIVO ------------
																																
											bandera = NULL;
											band_prestado = NULL;
																			
											rewind(arch_objetos);
											fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
											
											while(!feof(arch_objetos) && bandera == false)
											{
												if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.prestado > 0 && Reg_Objetos.borrado == false) 
												{
													band_prestado = true;
													break;
												}
												
												if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.prestado == 0 && Reg_Objetos.borrado == false)
												{
													fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
													bandera = true;	
													break;
												}					
								
												if (bandera == false)
													fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
											}
											
											if(band_prestado == true)
											{
												system("cls");
												printf("No es posible editar. El objeto ingresado se encuentra en prestamo.");
												printf("\n\n");
												system("pause");
												strcpy(target, auxiliar);
											}
											
											if(bandera == false && band_prestado == false)
											{
												system("cls");
												printf("No se encontro el codigo del objeto ingresado...");
												printf("\n\n");
												system("pause");
												strcpy(target, auxiliar);
											}	
																				
										// ---------------------------------------------------------------------
		
											if(bandera == true && band_prestado == false)
											{
												system("cls");
												printf("Se encontro el objeto exitosamente...");
												printf("\n\n");
												system("pause");
												system("cls");
												
												// -- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO --
												
													existencias = NULL; 
											
													for(int i=0; i<strlen(codigo); i++)
														codigo[i] = NULL;
																						
													for(int i=0; i<strlen(nombre); i++)
														nombre[i] = NULL;
			
												// -------------------------------------------------
											}
																	
										break;	
									}						
							case '0':
									{
										Modulo_Biblioteca_Objetos();	
										break;
									}
							case '6':
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
					while(true);					
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
			printf("ERROR: El archivo 'Objetos.dat' no existe.");
			printf("\n\n(Se tiene que cargar al menos un objeto)");
			printf("\n\n");
			system("pause");
		}
	// ----------------------------------------------------------
	else
	{
		Objetos Reg_Objetos;
		
		string target = {NULL};
		string centinela = {NULL};	
		
		bool bandera = NULL;
		bool band_prestado = NULL;
		
		// ------------ BUSQUEDA DEL CODIGO DEL LIBRO EN EL ARCHIVO ------------
		do
		{
			bandera = NULL;
			band_prestado = NULL;
			
			system("cls");
			printf("-- BORRADO DE UN OBJETO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE EL CODIGO DEL OBJETO A ELIMINAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_objetos);
				Modulo_Biblioteca_Objetos();
			}	
			
			rewind(arch_objetos);
			fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
			
			while(!feof(arch_objetos) && bandera == false)
			{
				if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.prestado > 0 && Reg_Objetos.borrado == false)
				{
					band_prestado = true;
					break;
				}
				
				if( strcmp(target, Reg_Objetos.codigo) == 0 && Reg_Objetos.prestado == 0 && Reg_Objetos.borrado == false)
				{
					fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
					bandera = true;	
					break;
				}					

				if (bandera == false)
					fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
			}
			
			if(band_prestado == true)
			{
				system("cls");
				printf("El objeto ingresado se encuentra en prestamo.");
				printf("\n\n");
				system("pause");
			}
			
			if(bandera == false && band_prestado == false)
			{
				system("cls");
				printf("No se encontro el codigo del objeto ingresado...");
				printf("\n\n");
				system("pause");
			}			
		}
		while(band_prestado == true || bandera == false);

		// ---------------------------------------------------------------------	
			do
			{
				system("cls");
				printf("-- BORRADO DE UN OBJETO --");
				printf("\n\n(Si desea cancelar, escriba 'salir')");	
				printf("\n\n\tDESEA ELIMINAR EL OBJETO(SI|NO): ");
				_flushall();
				gets(centinela);
				
				if(strcmp(centinela, "salir") == 0)
				{
					fclose(arch_objetos);
					Modulo_Biblioteca_Objetos();					
				}
				
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
					else if( strcmp((strupr(centinela)), "SALIR") == 0)
					{
						fclose(arch_objetos);
						Modulo_Biblioteca_Objetos();
					}
			}
			while( ((strcmp((strupr(centinela)), "SI") != 0) && (strcmp((strupr(centinela)), "NO") != 0)) );
					
	} // Cierre if de archivo	
}

void Modulo_Biblioteca_Objetos_BuscarObjeto()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_objetos;
		arch_objetos = fopen("Objetos.dat", "rb");
			
		if(arch_objetos == NULL)
		{
			system("cls");
			printf("ERROR: El archivo 'Objetos.dat' no existe.");
			printf("\n\n(Se tiene que cargar al menos un objeto)");
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
			printf("-- BUSQUEDA DE UN OBJETO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE EL CODIGO DEL OBJETO A BUSCAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_objetos);
				Modulo_Biblioteca_Objetos();
			}
			
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
			
			fclose(arch_objetos);		
		}
		else
		{
			system("cls");
			printf("No se encontro el codigo del objeto ingresado...");
			printf("\n\nVolviendo a pantalla anterior...");
			printf("\n\n");
			system("pause");
			system("cls");
			
			fclose(arch_objetos);	
				
			Modulo_Biblioteca_Objetos(); // Retornar a la funcion
		}
	} // Cierre de if de archivo.
}


// ******************************************************



// *************** MODULO DE SOCIOS *****************

void Modulo_Socios()
{
	char opcion = NULL;
	
	do
	{
		opcion = NULL;
		
		system("cls");
		printf("-- MODULO DE SOCIOS --");
		
		printf("\n\n\t1- ESTUDIANTES");
		printf("\n\t2- PROFESIONALES");
		
		printf("\n\n\t3- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();

		
		switch(opcion)
		{
			case '1':
					{
						Modulo_Socios_Estudiantes();
						break;
					}
			case '2':
					{
						Modulo_Socios_Profesionales();
						break;
					}
			case '0':
					{
						main();	
					}
			case '3':
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
	while(true);
	
}

void Modulo_Socios_Estudiantes()
{
	char opcion = NULL;
	
	do
	{
		opcion = NULL;
		
		system("cls");
		printf("--MODULO DE SOCIOS/ESTUDIANTES--");
		printf("\n\n\t1- LISTAR SOCIOS ESTUDIANTES");
		
		printf("\n\n\t2- NUEVO ESTUDIANTE");
		printf("\n\t3- EDITAR ESTUDIANTE");
		printf("\n\t4- ELIMINAR ESTUDIANTE");
		printf("\n\t5- BUSCAR ESTUDIANTE");
		
		printf("\n\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();

		
		switch(opcion)
		{
			case '1':
					{
						Modulo_Socios_Estudiantes_ListarEstudiantes();
						break;
					}				
			case '2':
					{
						Modulo_Socios_Estudiantes_NuevoEstudiante();
						break;
					}
			case '3':
					{
						Modulo_Socios_Estudiantes_EditarEstudiante();
						break;
					}
			case '4':
					{
						Modulo_Socios_Estudiantes_EliminarEstudiante();
						break;
					}
			case '5':
					{
						Modulo_Socios_Estudiantes_BuscarEstudiante();
						break;
					}
			case '0':
					{
						Modulo_Socios();
					}
			case '6':
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
	while(true);				
	
}

void Modulo_Socios_Profesionales()
{
	char opcion = NULL;
	
	do
	{
		opcion = NULL;
		
		system("cls");
		printf("--MODULO DE SOCIOS/PROFESIONALES--");
		
		printf("\n\n\t1- LISTAR PROFESIONALES");
		
		printf("\n\n\t2- NUEVO PROFESIONAL");
		printf("\n\t3- EDITAR PROFESIONAL");
		printf("\n\t4- ELIMINAR PROFESIONAL");
		printf("\n\t5- BUSCAR PROFESIONAL");
		
		printf("\n\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();
		
		switch(opcion)
		{
			case '1':
					{
						Modulo_Socios_Profesionales_ListarProfesionales();
						break;
					}
			case '2':
					{
						Modulo_Socios_Profesionales_NuevoProfesional();
						break;
					}
			case '3':
					{
						Modulo_Socios_Profesionales_EditarProfesional();
						break;
					}
			case '4':
					{
						Modulo_Socios_Profesionales_EliminarProfesional();
						break;
					}
			case '5':
					{
						Modulo_Socios_Profesionales_BuscarProfesional();
						break;
					}					
			case '0':
					{
						Modulo_Socios();
					}
			case '6':
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
	while(true);	
}


void Modulo_Socios_Estudiantes_ListarEstudiantes()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_estudiantes;
		arch_estudiantes = fopen("Estudiantes.dat", "rb");
			
		if(arch_estudiantes == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Estudiantes.dat");
			printf("\n\n(No hay ningun estudiante en la base de datos)");
			printf("\n\n");
		}
		
	// ----------------------------------------------------------
	
	else
	{
		system("cls");
		
		Estudiantes Reg_Estudiantes;
		
		int i = 0;
		
		bool bandera = false;
		
		rewind(arch_estudiantes);
		fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
		
		while(!feof(arch_estudiantes))
		{
			if(Reg_Estudiantes.borrado == false)
			{
				bandera = true;
				
				printf("ESTUDIANTE [%d]", i+1);
			
					printf("\n\n\tID: %s", Reg_Estudiantes.id);
					printf("\n\tApellido y nombre: %s", Reg_Estudiantes.apeYNom);
					printf("\n\tTurno: %s", Reg_Estudiantes.turno);
					printf("\n\tCurso: %s", Reg_Estudiantes.curso);
					printf("\n\tDNI: %s", Reg_Estudiantes.dni);	
					printf("\n\n------------------------------------------------------------------");				
					printf("\n\n");
				
				i++;
			}
				
			fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
		}
		
		if(bandera == false)
		{
			printf("No se registro ningun estudiante..");
			printf("\n\n");
		}
		
		fclose(arch_estudiantes);
	}
	
	system("pause");	
}

void Modulo_Socios_Estudiantes_NuevoEstudiante()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
	FILE *arch_estudiantes;
	FILE *arch_profesionales;
	
	arch_estudiantes = fopen("Estudiantes.dat", "a+b");
	
	if(arch_estudiantes == NULL)
	{
		system("cls");
		printf("ERROR. No se pudo crear el archivo Estudiantes.dat");
		printf("\n\n");
		system("pause");	
	}	
	
	// ----------------------------------------------------------
	
	else
	{	
		Estudiantes Reg_Estudiantes;
		Profesionales Reg_Profesionales;
		
		char opcion = NULL; // variable centinela para switch principal.
	
		string centinela = {NULL}; // variable centinela para SI|NO en la carga del archivo.
		string id = {NULL};
		string apeYNom = {NULL}; 
		string dni = {NULL};
		string curso = {NULL};
		string turno = {NULL};	
			
		bool band_id = NULL;
		bool band_apeYNom = NULL;
		bool band_dni = NULL;
		bool band_curso = NULL;
		bool band_turno = NULL;	
		bool socio_existente = NULL;
		bool dni_existente = NULL;	
		bool band_prestamo = NULL;
				
		do
		{
			opcion = NULL;
			
			system("cls");
			
			printf("-- MODULO DE SOCIOS/ESTUDIANTES/NUEVO ESTUDIANTE --");
			
			printf("\n\n\t1- INGRESAR SOCIO ESTUDIANTE");
			printf("\n\t2- GUARDAR SOCIO ESTUDIANTE");
			
			printf("\n\n\t3- CERRAR APLICACION");
	
			printf("\n\nSELECCIONE UNA OPCION: ");
			
			opcion = Comprobacion_Tecla_Escape();
		
			switch( opcion )
			{
				case '1':
						{
							// ------------------------------ CARGA DE LOS DATOS ------------------------------
							do	
							{
								socio_existente = NULL;
								
								system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
							 	printf("\n\n(Si desea cancelar, escriba 'salir')");
							 	
										 	// ------ COMPROBACION DE EXISTENCIA DEL CODIGO ------
		
									 	printf("\n\n\tINGRESE ID DEL SOCIO: ");
										_flushall();
										gets(id);
											if(strcmp(id, "salir") == 0)
											{
												for(int i=0; i<strlen(id); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
													id[i] = NULL;
												
												fclose(arch_estudiantes);
												Modulo_Socios_Estudiantes_NuevoEstudiante(); // Salida de la carga de datos.								
											}
											
										rewind(arch_estudiantes);
										fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
										
										while(!feof(arch_estudiantes) && socio_existente == false)
										{
											if(strcmp(id, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.borrado == false)
											{
												socio_existente = true;		
												break;
											}
												
											if(socio_existente == false)
												fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
										}
									
										
										arch_profesionales = fopen("Profesionales.dat", "rb");
										
										if(arch_profesionales != NULL)
										{
											rewind(arch_profesionales);
											fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
										
											while(!feof(arch_profesionales) && socio_existente == false)
											{
												if(strcmp(id, Reg_Profesionales.id) == 0 && Reg_Profesionales.borrado == false)
												{
													socio_existente = true;		
													break;
												}
													
												if(socio_existente == false)
													fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											}										
										}
									
										if(socio_existente == true)
										{
											system("cls");
											printf("El ID de socio ingresado ya existe. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}	
									}	
									while(socio_existente == true);
									
								// ---------------------------------------------------
					
								system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
							 	printf("\n\n(Si desea cancelar, escriba 'salir')");
								printf("\n\n\tAPELLIDO Y NOMBRE: ");
								_flushall();
								gets(apeYNom);
									if(strcmp(apeYNom, "salir") == 0)
									{
										for(int i=0; i<strlen(apeYNom); i++)
											apeYNom[i] = NULL;
											
										break;									
									}
								
								do
								{
									dni_existente = NULL;
									
									system("cls");
									printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
							 		printf("\n\n(Si desea cancelar, escriba 'salir')");
									printf("\n\n\tDNI: ");
									_flushall();
									gets(dni);
										if(strcmp(dni, "salir") == 0)
										{
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
																					
											break;										
										}
										
										rewind(arch_estudiantes);
										fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
										
										while(!feof(arch_estudiantes) && dni_existente == false)
										{
											if(strcmp(dni, Reg_Estudiantes.dni) == 0 && Reg_Estudiantes.borrado == false)
											{											
												dni_existente = true;		
												break;
											}
												
											if(dni_existente == false)
												fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
										}
									
										
										arch_profesionales = fopen("Profesionales.dat", "rb");
										
										if(arch_profesionales != NULL)
										{
											rewind(arch_profesionales);
											fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
										
											while(!feof(arch_profesionales) && dni_existente == false)
											{
												if(strcmp(dni, Reg_Profesionales.dni) == 0 && Reg_Profesionales.borrado == false)
												{
													dni_existente = true;		
													break;
												}
													
												if(dni_existente == false)
													fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											}										
										}										
										
										if(dni_existente == true)
										{
											system("cls");
											printf("El dni ingresado corresponde a un socio. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}											
								}
								while(dni_existente == true);	
														
								system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
							 	printf("\n\n(Si desea cancelar, escriba 'salir')");							
								printf("\n\n\tCURSO: ");
								_flushall();
								gets(curso);
									if(strcmp(curso, "salir") == 0)
									{
										for(int i=0; i<strlen(curso); i++)
											curso[i] = NULL;	
																		
										break;									
									}
									
								system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
							 	printf("\n\n(Si desea cancelar, escriba 'salir')");
								printf("\n\n\tTURNO: ");
								_flushall();
								gets(turno);
									if(strcmp(turno, "salir") == 0)
									{
										for(int i=0; i<strlen(turno); i++)
											turno[i] = NULL;
																			
										break;										
									}
																					
								
							// --------------------------------------------------------------------------------
							
							break;
						 }
				case '2':
						{	
							// ------------------------------ COMPROBACIÓN DE CAMPOS VACIOS ------------------------------	
										 				 	
								if(strlen(id) != 0)
						 		{
						 			strcpy(Reg_Estudiantes.id, id);
									band_id = true;						 			
								}
						 		if(strlen(apeYNom) != 0)
						 		{
						 			strcpy(Reg_Estudiantes.apeYNom, apeYNom);		
									band_apeYNom = true;				 			
								}
						 		if(strlen(dni) != 0)
						 		{
						 			strcpy(Reg_Estudiantes.dni, dni);
									band_dni = true;						 				
								}	
						 		if(strlen(curso) != 0)
						 		{
						 			strcpy(Reg_Estudiantes.curso, curso);	
									band_curso = true;						 			
								}	 			
						 		if(strlen(turno) != 0)
						 		{
						 			strcpy(Reg_Estudiantes.turno, turno);						 			
						 			band_turno = true;
								}
						 			
							// -------------------------------------------------------------------------------------------
							
							if(band_id == true && band_apeYNom == true && band_dni == true && band_curso == true && band_turno == true )
							{	
														 	
							 	do
							 	{
									system("cls");
								 	printf("DATOS INGRESADOS: ");
								 	
								 	printf("\n\n\tID: %s", id);
								 	printf("\n\tApellido y Nombre: %s", apeYNom);
								 	printf("\n\tDNI: %s", dni);
								 	printf("\n\tCurso: %s", curso);
								 	printf("\n\tTurno: %s", turno);

									printf("\n\nDESEA CARGAR EL SOCIO EN LA BASE DE DATOS(SI|NO): ");
					 				_flushall();
					 				gets(centinela);
					 				strupr(centinela);
					 			
					 				if(strcmp(centinela, "SI") == 0)
					 				{
										fseek(arch_estudiantes, 2, SEEK_END);
										Reg_Estudiantes.prestamo = NULL;
										fwrite(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
										
										system("cls");
										printf("Se ha cargado el socio existosamente...");
										printf("\n\n");
										system("pause");
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(id); i++)
												id[i] = NULL;
						
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;												
		
											for(int i=0; i<strlen(curso); i++)
												curso[i] = NULL;
		
											for(int i=0; i<strlen(turno); i++)
												turno[i] = NULL;														
																																
											band_id = NULL;																					 
											band_apeYNom = NULL;
											band_dni = NULL;
											band_curso = NULL;
											band_turno = NULL;		
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------					 				
									}
									else if(strcmp(centinela, "NO") == 0)
									{
										system("cls");
										printf("No se ha cargado el socio.");
										printf("\n\n");
										system("pause");
										
									// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(id); i++)
												id[i] = NULL;
						
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;												
		
											for(int i=0; i<strlen(curso); i++)
												curso[i] = NULL;
		
											for(int i=0; i<strlen(turno); i++)
												turno[i] = NULL;														
																																
											band_id = NULL;																					 
											band_apeYNom = NULL;
											band_dni = NULL;
											band_curso = NULL;
											band_turno = NULL;		
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------			 														
									}
									else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");
									}		
								}
								while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);
								
							}
							else
							{
								system("cls");
								printf("No es posible cargar el socio. Hay campos incompletos.");
								printf("\n\n");
								system("pause");
							}
							
							break;
						 }
				case '3':
						 {
						 	fclose(arch_estudiantes);
							Salir();
						 }
				case '0':
						 {
						 	fclose(arch_estudiantes);
						 	Modulo_Socios_Estudiantes();
							break;
						 }
				default:
						 {
						 	system("cls");
						 	printf("Opcion incorrecta. Ingrese nuevamente...");
						 	printf("\n\n");
						 	system("pause");
							break;
						 }	
						 				 					 					 				 	
			} // cierre switch
		} 
		while(true);			
	}
		
}

void Modulo_Socios_Estudiantes_EditarEstudiante()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_estudiantes;
		arch_estudiantes = fopen("Estudiantes.dat", "r+b");
			
		if(arch_estudiantes == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Estudiantes.dat");
			printf("\n\n(No hay ningun estudiante en la base de datos)");
			printf("\n\n");
			system("pause");
		}
	
	// ----------------------------------------------------------	
	
	else
	{
		Estudiantes Reg_Estudiantes;
		
		char opcion = NULL;
		int posicion = NULL;
		
		string target = {NULL};
		string auxiliar = {NULL};
		string id = {NULL};
		string apeYNom = {NULL};
		string turno = {NULL};
		string curso = {NULL};	
		string dni = {NULL};					
		
		bool bandera = NULL;
		bool band_id = NULL;	
		bool band_apeYNom = NULL;
		bool band_turno = NULL;
		bool band_curso = NULL;
		bool band_dni = NULL;
		bool band_prestado = NULL;
	
		// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
		
			do
			{
				bandera = NULL;
				band_prestado = NULL;
				
				system("cls");
				printf("-- EDITAR SOCIO ESTUDIANTE --");
				printf("\n\n(Si desea cancelar, escriba 'salir')");
				printf("\n\n\tINGRESE ID DEL ESTUDIANTE A EDITAR: ");
				_flushall();
				gets(target);
				
				if(strcmp(target, "salir") == 0)
				{
					fclose(arch_estudiantes);
					Modulo_Socios_Estudiantes();
				}
				
				rewind(arch_estudiantes);
				fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
				
				while(!feof(arch_estudiantes) && bandera == false)
				{
					if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.prestamo > 0 && Reg_Estudiantes.borrado == false)
					{
						band_prestado = true;
						break;
					}
					
					if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.prestamo == 0 && Reg_Estudiantes.borrado == false)
					{
						bandera = true;
						fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);
					}
					
					if(bandera == false)
					{
						fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);					
					}	
				}
				
				if(bandera == false && band_prestado == false)
				{
					system("cls");
					printf("No se encontro el codigo del socio. Ingrese nuevamente...");
					printf("\n\n");
					system("pause");
				}
				
				if(band_prestado == true)
				{
					system("cls");
					printf("No es posible editar. El socio actualmente es un prestario...");
					printf("\n\n");
					system("pause");
				}
				
				if(bandera == true && band_prestado == false)
				{
					system("cls");
					printf("Se encontro el socio exitosamente...");
					printf("\n\n");
					system("pause");
				}
	
			}
			while(bandera == false || band_prestado == true);
			

		// ---------------------------------------------------------------------		
		
				do
				{
					opcion = NULL;
					
					system("cls");
					printf("--MODULO DE SOCIOS/ESTUDIANTES/EDITAR ESTUDIANTE--");
					
					// ------------------ MOSTRAR OBJETO INGRESADO ------------------
						
							/*posicion = ftell(arch_estudiantes);
							printf("\n\nPosicion: %d\n\n", posicion);
							system("pause");*/
							
							
							// Luego de ingresar el codigo en el case 4, si el codigo es incorrecto, 
							//se tiene que volver a recorrer el archivo para volver a coincidir con el target anterior.
							
							arch_estudiantes = fopen("Estudiantes.dat", "r+b");
							
							bandera = NULL;
							band_prestado = NULL;
							rewind(arch_estudiantes);
							fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
							
							printf("target es: %s\n\n", target);
							system("pause");
							
							while(!feof(arch_estudiantes) && bandera == false)
							{
								printf("Codigo actual: %s\n\n", Reg_Estudiantes.id);
								system("pause");
								
								if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.prestamo > 0 && Reg_Estudiantes.borrado == false)
								{
									band_prestado = true;
									break;
								}
								
								if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.prestamo == 0 && Reg_Estudiantes.borrado == false)
								{
									bandera = true;
									fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);
									break;
								}
								
								if(bandera == false)
									fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);					
							}
						
							printf("\n\n\tID: %s", Reg_Estudiantes.id);
							printf("\n\tApellido y nombre: %s", Reg_Estudiantes.apeYNom);
							printf("\n\tTurno: %s", Reg_Estudiantes.turno);
							printf("\n\tCurso: %s", Reg_Estudiantes.curso);
							printf("\n\tDNI: %s", Reg_Estudiantes.dni);
							
							/*posicion = ftell(arch_estudiantes);
							printf("\n\nPosicion: %d\n\n", posicion);
							system("pause");*/
							
						// -------------------------------------------------------------
							
						printf("\n\n   1- EDITAR ID");
								if( strlen(id) != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
									printf(" (Edicion: %s)", id); 			
						
						printf("\n   2- EDITAR APELLIDO Y NOMBRE");
								if( strlen(apeYNom) != 0 ) 
									printf(" (Edicion actual: %s)", apeYNom); 
									
						printf("\n   3- EDITAR TURNO");
								if( strlen(turno) != 0 ) 
									printf(" (Edicion actual: %s)", turno); 	
										
						printf("\n   4- EDITAR CURSO");
								if( strlen(curso) != 0 ) 
									printf(" (Edicion actual: %s)", curso); 
									
						printf("\n   5- EDITAR DNI");
								if( strlen(dni) != 0 ) 
									printf(" (Edicion actual: %s)", dni); 
															
															
						printf("\n\n   6- GUARDAR CAMBIOS");
						printf("\n   7- INGRESAR OTRO ID");
						
						printf("\n\n   8- CERRAR APLICACION");
						
						printf("\n\nSELECCIONE UNA OPCION: ");
						opcion = Comprobacion_Tecla_Escape();
						
						switch(opcion)
						{
							case '1':
									{
										system("cls");
										printf("INGRESE ID: ");
										_flushall();
										gets(id);
																
										break;
									}
							case '2':
									{
										system("cls");
										printf("INGRESE APELLIDO Y NOMBRE: ");
										_flushall();
										gets(apeYNom);
																
										break;
									}
							case '3':
									{
										system("cls");
										printf("INGRESE TURNO: ");
										_flushall();
										gets(turno);
																
										break;
									}																						
							case '4':
									{
										system("cls");
										printf("INGRESE CURSO: ");
										_flushall();
										gets(curso);
																	
										break;
									}
							case '5':
									{
										system("cls");
										printf("INGRESE DNI: ");
										_flushall();
										gets(dni);
																	
										break;	
									}
							case '6':
									{
										// ------ CARGA DE DATOS EN EL REGISTRO ------
										
											band_id = NULL;	
											band_apeYNom = NULL;
											band_turno = NULL;
											band_curso = NULL;
											band_dni = NULL;
											
											if( strlen(id) != 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
											{
												strcpy(Reg_Estudiantes.id, id);
												band_id = true;										
											}
											if( strlen(apeYNom) != 0 )
											{
												strcpy(Reg_Estudiantes.apeYNom, apeYNom);
												band_apeYNom = true;										
											}
											if( strlen(turno) != 0 ) 
											{
												strcpy(Reg_Estudiantes.turno, turno);
												band_turno = true;										
											}
											if( strlen(curso) != 0 ) 
											{
												strcpy(Reg_Estudiantes.curso, curso);
												band_curso = true;										
											}
											if( strlen(dni) != 0 ) 
											{
												strcpy(Reg_Estudiantes.dni, dni);
												band_dni = true;										
											}
																																												
												
										// -------------------------------------------	
										
										// ----------------------------------------------- CARGA DEL REGISTRO EN EL ARCHIVO -----------------------------------------------
											string auxiliar = {NULL};
											
											if( band_id == true || band_apeYNom == true || band_turno == true || band_curso == true || band_dni == true)
											{
												strcpy(auxiliar, target);
												
												fwrite(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);	
												
												system("cls");
												printf("Se edito el estudiante exitosamente...");
												printf("\n\n");
												system("pause");
												system("cls");
												
												for(int i=0; i<strlen(id); i++) // Revalorizacion de cadenas a un valor nulo.
													id[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
												
												for(int i=0; i<strlen(apeYNom); i++)
													apeYNom[i] = NULL;
													
												for(int i=0; i<strlen(turno); i++)
													turno[i] = NULL;
												
												for(int i=0; i<strlen(curso); i++)
													curso[i] = NULL;
												
												for(int i=0; i<strlen(dni); i++)
													dni[i] = NULL;
											
											fclose(arch_estudiantes);
													
											arch_estudiantes = fopen("Estudiantes.dat", "r+b");
											
											bandera = NULL;
											band_prestado = NULL;
											rewind(arch_estudiantes);
											fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
											
											while(!feof(arch_estudiantes) && bandera == false)
											{
												if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.prestamo > 0 && Reg_Estudiantes.borrado == false)
												{
													band_prestado = true;
													break;
												}
												
												if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.prestamo == 0 && Reg_Estudiantes.borrado == false)
												{
													bandera = true;
													fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);
												}
												
												if(bandera == false)
												{
													fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);					
												}	
												
												strcpy(target, auxiliar);
											}																								}
											else
											{
												system("cls");
												printf("No se edito ningun campo del estudiante ingresado...");	
												printf("\n\n");
												system("pause");
												system("cls");
											}
								
										// --------------------------------------------------------------------------------------------------------------------------------
											
										break;
									}							
							case '7':
									{
										strcpy(auxiliar, target); // Se declara una variable auxiliar para tomar el valor del target anterior. 
										 						  // Esto se hace porque cuando el target ingresado es incorrecto, el puntero
																  // se tiene que volver a posicionar en el target anterior. 
																  
										system("cls");
										printf("INGRESE ID DE ESTUDIANTE A EDITAR: ");
										_flushall();
										gets(target);
										
										// --- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO ---
											 
											Reg_Estudiantes.borrado = false;
											
											for(int i=0; i<strlen(id); i++) // Revalorizacion de cadenas a un valor nulo.
												id[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
											
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(turno); i++)
												turno[i] = NULL;
											
											for(int i=0; i<strlen(curso); i++)
												curso[i] = NULL;
											
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
										// --------------------------------------------------
													
													
										// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
														
											bandera = NULL;
											band_prestado = NULL;							
									
											rewind(arch_estudiantes);
											fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
											
											while(!feof(arch_estudiantes) && bandera == false)
											{
												if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.prestamo > 0 && Reg_Estudiantes.borrado == false)
												{
													band_prestado = true;
													break;
												}
												
												if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.prestamo == 0 && Reg_Estudiantes.borrado == false)
												{
													bandera = true;
													fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);
												}
												
												if(bandera == false)
												{
													fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);					
												}	
											}									
									
											
											/*posicion = ftell(arch_estudiantes);
											printf("Posicion: %d\n\n", posicion);
											system("pause");*/
																								
										// ---------------------------------------------------------------------
										
										if(bandera == true && band_prestado == false) 
										{
											system("cls");
											printf("Se encontro el estudiante exitosamente...");
											printf("\n\n");
											system("pause");
											system("cls");
											
											// -- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO --										
										
												for(int i=0; i<strlen(id); i++) 
													id[i] = NULL;			
												
												for(int i=0; i<strlen(apeYNom); i++)
													apeYNom[i] = NULL;
													
												for(int i=0; i<strlen(turno); i++)
													turno[i] = NULL;
												
												for(int i=0; i<strlen(curso); i++)
													curso[i] = NULL;
												
												for(int i=0; i<strlen(dni); i++)
													dni[i] = NULL;
		
											// -------------------------------------------------
										}
										else if(bandera == true && band_prestado == true)
										{
											system("cls");
											printf("No es posible editar. El socio actualmente es un prestario...");
											printf("\n\n");
											system("pause");
																			
											strcpy(target, auxiliar); // La variable "target" toma el valor del auxiliar, que es del target anterior.	
											//Modulo_Socios_Estudiantes()
										}
										else if(bandera == false && band_prestado == false)
										{
											system("cls");
											printf("No se encontro el codigo del socio ingresado...");
											printf("\n\n");
											system("pause");
											
											strcpy(target, auxiliar);	
										}
																	
										break;	
									}						
							case '0':
									{
										fclose(arch_estudiantes);
										Modulo_Socios_Estudiantes();	
										break;
									}
							case '8':
									{
										fclose(arch_estudiantes);
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
					while(true);					
			}

}

void Modulo_Socios_Estudiantes_EliminarEstudiante()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_estudiantes;
		arch_estudiantes = fopen("Estudiantes.dat", "r+b");
			
		if(arch_estudiantes == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Estudiantes.dat");
			printf("\n\n(No hay ningun estudiante en la base de datos)");
			printf("\n\n");
			system("pause");
		}
		
	// ----------------------------------------------------------
	else
	{
		Estudiantes Reg_Estudiantes;
		
		string target = {NULL};
		string centinela = {NULL};	
		
		bool bandera = NULL;
		bool band_prestamo = NULL;
		
		// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
		
		do
		{
			system("cls");
			printf("-- BORRADO DE UN SOCIO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE ID DEL ESTUDIANTE A ELIMINAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_estudiantes);
				Modulo_Socios_Estudiantes();
			}	
			
			bandera = NULL;
			band_prestamo = NULL;
			rewind(arch_estudiantes);
			fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
			
			while(!feof(arch_estudiantes) && bandera == false)
			{
				if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.borrado == false && Reg_Estudiantes.prestamo > 0)
				{
					band_prestamo = true;	
				}				
				
				if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.borrado == false && Reg_Estudiantes.prestamo == 0)
				{
					fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);
					bandera = true;	
				}

				if(bandera == false)
					fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);	
			}
			
			if(bandera == false && band_prestamo == false)
			{
				system("cls");
				printf("No se encontro el ID del estudiante ingresado. Ingrese nuevamente...");
				printf("\n\n");
				system("pause");
			}
			else if(band_prestamo == true)
			{
				system("cls");
				printf("No es posible eliminar. El socio actualmente es prestatario...");
				printf("\n\n");
				system("pause");	
			}			
			
		}
		while(band_prestamo == true || bandera == false);
		
		// ---------------------------------------------------------------------	
			
		do
		{
			system("cls");
			printf("-- BORRADO DE UN SOCIO --");
			printf("\n\n(Si desea cancelar, escriba 'salir').");
			printf("\n\n\tDESEA ELIMINAR EL ESTUDIANTE(SI|NO): ");
			_flushall();
			gets(centinela);
			
			if(strcmp(centinela, "salir") == 0)
			{
				fclose(arch_estudiantes);
				Modulo_Socios_Estudiantes();
			}
			
			if( strcmp((strupr(centinela)), "SI") == 0) // Cadena ingresada se convierte a mayusculas, y se compara con la cadena "SI"
			{
				Reg_Estudiantes.borrado = true;
				fwrite(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
				
				// ---------------------------- BAJA FISICA DEL ARCHIVO ------------------------------
					FILE *aux;
					aux = fopen("auxiliar.dat", "w+b");
					
					rewind(arch_estudiantes);
					fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
					
					while (!feof(arch_estudiantes))
					{
						if (Reg_Estudiantes.borrado == false)
						{
							fwrite(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, aux);
							
							bandera = true;
						}
						
						fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
					}
					
					if (bandera = true)
					{
						system("cls");
						printf("Se ha borrado el estudiante exitosamente...");
						printf("\n\n");
						system("pause");
						system("cls");
					}
					else
					{
						system("cls");
						printf("No se pudo borrar el estudiante.");
						printf("\n\n");
						system("pause");
					}
					
					fclose(arch_estudiantes);
					fclose(aux);
					
					remove("Estudiantes.dat");
					rename("auxiliar.dat", "Estudiantes.dat");
					remove("auxiliar.dat");
					
				// -----------------------------------------------------------------------------------
									
			}
			else if( strcmp((strupr(centinela)), "NO") == 0) // Cadena ingresada se convierte a mayusculas, y se compara con la cadena "NO"
			{
				system("cls");
				printf("No se ha borrado el estudiante ingresado.");
				printf("\n\n");
				system("pause");
				system("cls");
				
				fclose(arch_estudiantes);
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
				
	} // Cierre if de archivo		
}

void Modulo_Socios_Estudiantes_BuscarEstudiante()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_estudiantes;
		arch_estudiantes = fopen("Estudiantes.dat", "rb");
			
		if(arch_estudiantes == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Estudiantes.dat");
			printf("\n\n(No hay ningun estudiante en la base de datos)");
			printf("\n\n");
			system("pause");
		}
		
	// ----------------------------------------------------------
	else
	{
		Estudiantes Reg_Estudiantes;
		
		string target = {NULL};		
		
		bool bandera = false;
		
		// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
		
			system("cls");
			printf("-- BUSQUEDA DE UN SOCIO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE ID DEL ESTUDIANTE A BUSCAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_estudiantes);
				Modulo_Socios_Estudiantes();
			}	
			
			bandera = false;
			rewind(arch_estudiantes);
			fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
			
			while(!feof(arch_estudiantes) && bandera == false )
			{
				if( strcmp(target, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.borrado == false )
					bandera = true;
		
				if (bandera == false)
					fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);	
			}
						
		// ---------------------------------------------------------------------
		
		if(bandera == true)
		{
			system("cls");
			printf("Se ha encontrado el estudiante exitosamente...");
			
			printf("\n\n\tID: %s", Reg_Estudiantes.id);
			printf("\n\tApellido y nombre: %s", Reg_Estudiantes.apeYNom);
			printf("\n\tTurno: %s", Reg_Estudiantes.turno);
			printf("\n\tCurso: %s", Reg_Estudiantes.curso);
			printf("\n\tDNI: %s", Reg_Estudiantes.dni);
			
			printf("\n\n");
			system("pause");
			system("cls");	
			
			fclose(arch_estudiantes);	
		}
		else
		{
			system("cls");
			printf("No se encontro el ID del estudiante ingresado...");
			printf("\n\n");
			system("pause");
			system("cls");
			
			fclose(arch_estudiantes);		
			Modulo_Socios_Estudiantes(); // Retornar a la funcion
		}
	}	
}

//

void Modulo_Socios_Profesionales_ListarProfesionales()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_profesionales;
		arch_profesionales = fopen("Profesionales.dat", "rb");
			
		if(arch_profesionales == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Profesionales.dat");
			printf("\n\n(No hay ningun profesional en la base de datos)");
			printf("\n\n");
		}
		
	// ----------------------------------------------------------
	
	else
	{
		system("cls");
		
		Profesionales Reg_Profesionales;
		
		int i = 0;
		
		bool bandera = false;
		
		rewind(arch_profesionales);
		fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
		
		while(!feof(arch_profesionales))
		{
			if(Reg_Profesionales.borrado == false)
			{
				bandera = true;
				
				printf("PROFESIONAL [%d]", i+1);
			
					printf("\n\n\tID: %s", Reg_Profesionales.id);
					printf("\n\tApellido y nombre: %s", Reg_Profesionales.apeYNom);
					printf("\n\tDNI: %s", Reg_Profesionales.dni);	
					printf("\n\tTelefono: %s", Reg_Profesionales.telefono);
					printf("\n\n------------------------------------------------------------------");				
					printf("\n\n");
				
				i++;	
			}
				
			fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
		}
		
		if(bandera == false)
		{
			printf("No se registro ningun profesional..");
			printf("\n\n");
		}
		
		fclose(arch_profesionales);
	}
	
	system("pause");	
}

void Modulo_Socios_Profesionales_NuevoProfesional()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
	FILE *arch_profesionales;
	FILE *arch_estudiantes;
	
	arch_profesionales = fopen("Profesionales.dat", "a+b");
	
	if(arch_profesionales == NULL)
	{
		system("cls");
		printf("ERROR. No se pudo crear el archivo Profesionales.dat");
		printf("\n\n");
		system("pause");	
	}	
	
	// ----------------------------------------------------------
	
	else
	{	
		Profesionales Reg_Profesionales;
		Estudiantes Reg_Estudiantes;
		
		char opcion = NULL; // variable centinela para switch principal.
	
		string centinela = {NULL}; // variable centinela para SI|NO en la carga del archivo.
		string id = {NULL};
		string apeYNom = {NULL}; 
		string dni = {NULL};
		string telefono = {NULL};
			
		bool band_id = NULL;
		bool band_apeYNom = NULL;
		bool band_dni = NULL;	
		bool band_telefono = NULL;
		bool socio_existente = NULL;
		bool dni_existente = NULL;
		
		do
		{
			opcion = NULL;
			
			system("cls");
			
			printf("-- MODULO DE SOCIOS/ESTUDIANTES/NUEVO ESTUDIANTE --");
			
			printf("\n\n\t1- INGRESAR SOCIO PROFESIONAL");
			printf("\n\t2- GUARDAR SOCIO PROFESIONAL");
			
			printf("\n\n\t3- CERRAR APLICACION");
	
			printf("\n\nSELECCIONE UNA OPCION: ");
			opcion = Comprobacion_Tecla_Escape();
		
			switch( opcion )
			{
				case '1':
						{
							do	
							{
								// ------------------------------ CARGA DE LOS DATOS ------------------------------
								socio_existente = NULL;
								
								system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
							 	printf("\n\n(Si desea cancelar, escriba 'salir')");
							 	
										 	// ------ COMPROBACION DE EXISTENCIA DEL CODIGO ------
		
									 	printf("\n\n\tINGRESE ID DEL PROFESIONAL: ");
										_flushall();
										gets(id);
											if(strcmp(id, "salir") == 0)
											{
												for(int i=0; i<strlen(id); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
													id[i] = NULL;
												
												fclose(arch_profesionales);
												Modulo_Socios_Profesionales_NuevoProfesional(); // Salida de la carga de datos.								
											}
											
										rewind(arch_profesionales);
										fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
										
										while(!feof(arch_profesionales) && socio_existente == false)
										{
											if(strcmp(id, Reg_Profesionales.id) == 0)
											{
												socio_existente = true;		
												break;
											}
												
											if(socio_existente == false)
												fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
										}
										
										arch_estudiantes = fopen("Estudiantes.dat", "rb");
										
										if(arch_estudiantes != NULL)
										{
											rewind(arch_estudiantes);
											fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
										
											while(!feof(arch_estudiantes) && socio_existente == false)
											{
												if(strcmp(id, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.borrado == false)
												{
													socio_existente = true;		
													break;
												}
													
												if(socio_existente == false)
													fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
											}										
										}										
										
										if(socio_existente == true)
										{
											system("cls");
											printf("El ID de socio ingresado ya existe. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}	
									}	
									while(socio_existente == true);
									
								// ---------------------------------------------------
								
								
								system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
							 	printf("\n\n(Si desea cancelar, escriba 'salir')");								
								printf("\n\n\tAPELLIDO Y NOMBRE: ");
								_flushall();
								gets(apeYNom);
									if(strcmp(apeYNom, "salir") == 0)
									{
										for(int i=0; i<strlen(apeYNom); i++)
											apeYNom[i] = NULL;
											
										break;									
									}
								
								do
								{
									dni_existente = NULL;
									
									system("cls");
									printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
								 	printf("\n\n(Si desea cancelar, escriba 'salir')");																					
									printf("\n\n\tDNI: ");
									_flushall();
									gets(dni);
										if(strcmp(dni, "salir") == 0)
										{
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
																					
											break;										
										}	
										
											rewind(arch_profesionales);
											fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											
											while(!feof(arch_profesionales) && dni_existente == false)
											{
												if(strcmp(id, Reg_Profesionales.id) == 0 && Reg_Profesionales.borrado == false)
												{
													dni_existente = true;		
													break;
												}
													
												if(dni_existente == false)
													fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											}
											
											arch_estudiantes = fopen("Estudiantes.dat", "rb");
											
											if(arch_estudiantes != NULL)
											{
												rewind(arch_estudiantes);
												fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
											
												while(!feof(arch_estudiantes) && dni_existente == false)
												{
													if(strcmp(dni, Reg_Estudiantes.dni) == 0 && Reg_Estudiantes.borrado == false)
													{
														dni_existente = true;		
														break;
													}
														
													if(dni_existente == false)
														fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
												}										
											}										
											
											if(dni_existente == true)
											{
												system("cls");
												printf("El ID de socio ingresado ya existe. Ingrese nuevamente...");
												printf("\n\n");
												system("pause");
											}									
									}	
									while(dni_existente == true);
																						
								system("cls");
								printf("-- CARGA DE DATOS DEL NUEVO SOCIO --");
								printf("\n\n(Si desea cancelar, escriba 'salir')");										
								printf("\n\n\tTELEFONO: ");
								_flushall();
								gets(telefono);
									if(strcmp(telefono, "salir") == 0)
									{
										for(int i=0; i<strlen(telefono); i++)
											telefono[i] = NULL;
																			
										break;										
									}

							// --------------------------------------------------------------------------------
							
							break;
						 }
				case '2':
						{	
							// ------------------------------ COMPROBACIÓN DE CAMPOS VACIOS ------------------------------	
										 				 	
								if(strlen(id) != 0)
						 		{
						 			strcpy(Reg_Profesionales.id, id);
									band_id = true;						 			
								}
		
						 		if(strlen(apeYNom) != 0)
						 		{
						 			strcpy(Reg_Profesionales.apeYNom, apeYNom);		
									band_apeYNom = true;				 			
								}
	
							 	if(strlen(dni) != 0)
						 		{
						 			strcpy(Reg_Profesionales.dni, dni);
									band_dni = true;						 				
								}
								
						 		if(strlen(telefono) != 0)
						 		{
						 			strcpy(Reg_Profesionales.telefono, telefono);	
									band_telefono = true;						 			
								}
							
							// -------------------------------------------------------------------------------------------
							
							if(band_id == true && band_apeYNom == true && band_telefono == true && band_dni == true)
							{	
														 	
							 	do
							 	{
									system("cls");
								 	printf("DATOS INGRESADOS: ");
								 	
								 	printf("\n\n\tID: %s", id);
								 	printf("\n\tApellido y nombre: %s", apeYNom);
								 	printf("\n\tDNI: %s", dni);
								 	printf("\n\tTelefono: %s", telefono);
								 	
									printf("\n\nDESEA CARGAR EL SOCIO EN LA BASE DE DATOS(SI|NO): ");
					 				_flushall();
					 				gets(centinela);
					 				strupr(centinela);
					 			
					 				if(strcmp(centinela, "SI") == 0)
					 				{
										fseek(arch_profesionales, 2, SEEK_END);
										fwrite(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
										
										system("cls");
										printf("Se ha cargado el socio existosamente...");
										printf("\n\n");
										system("pause");
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(id); i++)
												id[i] = NULL;
						
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
		
											for(int i=0; i<strlen(telefono); i++)
												telefono[i] = NULL;													
																													
											band_id = NULL;																					 
											band_apeYNom = NULL;
											band_dni = NULL;
											band_telefono = NULL;
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------				 				
									}
									else if(strcmp(centinela, "NO") == 0)
									{
										system("cls");
										printf("No se ha cargado el socio.");
										printf("\n\n");
										system("pause");
										
										/*// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(id); i++)
												id[i] = NULL;
						
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
		
											for(int i=0; i<strlen(telefono); i++)
												telefono[i] = NULL;													
																													
											band_id = NULL;																					 
											band_apeYNom = NULL;
											band_dni = NULL;
											band_telefono = NULL;
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------*/			 														
									}
									else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");
									}		
								}
								while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);
								
							}
							else
							{
								system("cls");
								printf("No es posible cargar el socio. Hay campos incompletos.");
								printf("\n\n");
								system("pause");
							}
							
							break;
						 }
				case '3':
						 {
						 	fclose(arch_profesionales);
							Salir();
						 }
				case '0':
						 {
						 	fclose(arch_profesionales);
						 	Modulo_Socios_Profesionales();
							break;
						 }
				default:
						 {
						 	system("cls");
						 	printf("Opcion incorrecta. Ingrese nuevamente...");
						 	printf("\n\n");
						 	system("pause");
							break;
						 }	
						 				 					 					 				 	
			} // cierre switch
		} 
		while(true);			
	}
		
}

void Modulo_Socios_Profesionales_EditarProfesional()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_profesionales;
		arch_profesionales = fopen("Profesionales.dat", "r+b");
			
		if(arch_profesionales == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Profesionales.dat");
			printf("\n\n(No hay ningun profesional en la base de datos)");
			printf("\n\n");
			system("pause");
		}
	
	// ----------------------------------------------------------	
	
	else
	{
		Profesionales Reg_Profesionales;
		
		char opcion = NULL;
		int posicion = NULL;
		
		string target = {NULL};
		string auxiliar = {NULL};
		string id = {NULL};
		string apeYNom = {NULL};
		string dni = {NULL};
		string telefono = {NULL};
				
		bool bandera = NULL;
		bool band_id = NULL;	
		bool band_apeYNom = NULL;
		bool band_telefono = NULL;
		bool band_dni = NULL;
		bool band_prestado = NULL;
	
		// ------------ BUSQUEDA DEL ID DEL PROFESIONAL EN EL ARCHIVO ------------
			
			do
			{
				bandera = NULL;
				band_prestado = NULL;
						
				system("cls");
				printf("-- EDITAR SOCIO PROFESIONAL --");
				printf("\n\n(Si desea cancelar, escriba 'salir')");
				printf("\n\n\tINGRESE ID DEL PROFESIONAL A EDITAR: ");
				_flushall();
				gets(target);
				
				if(strcmp(target, "salir") == 0)
				{
					fclose(arch_profesionales);
					Modulo_Socios_Profesionales();
				}
				
				rewind(arch_profesionales);
				fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
				
				while(!feof(arch_profesionales) && bandera == false)
				{
					if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.prestamo > 0 && Reg_Profesionales.borrado == false)
					{
						band_prestado = true;
						break;
					}
					
					if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.prestamo == 0 && Reg_Profesionales.borrado == false)
					{
						bandera = true;
						fseek(arch_profesionales, (long)-sizeof(Reg_Profesionales), SEEK_CUR);
					}
					
					if(bandera == false)
					{
						fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);					
					}
		
				}			
					
				if(bandera == false && band_prestado == false)
				{
					system("cls");
					printf("No se encontro el codigo del socio. Ingrese nuevamente...");
					printf("\n\n");
					system("pause");
				}
				
				if(band_prestado == true)
				{
					system("cls");
					printf("No es posible editar. El socio actualmente es un prestario...");
					printf("\n\n");
					system("pause");
				}
				
				if(bandera == true && band_prestado == false)
				{
					system("cls");
					printf("Se encontro el socio exitosamente...");
					printf("\n\n");
					system("pause");
				}
			}
			while(bandera == false || band_prestado == true);
			
			
		// ---------------------------------------------------------------------		
		
				do
				{
					opcion = NULL;
					
					system("cls");
					printf("--MODULO DE SOCIOS/PROFESIONALES/EDITAR PROFESIONAL--");
					
					// ------------------ MOSTRAR PROFESIONAL INGRESADO ------------------
						
							/*posicion = ftell(arch_profesionales);
							printf("\n\nPosicion: %d\n\n", posicion);
							system("pause");*/
							
							
							// Luego de ingresar el codigo en el case 4, si el codigo es incorrecto, 
							//se tiene que volver a recorrer el archivo para volver a coincidir con el target anterior.
							
							arch_profesionales = fopen("Profesionales.dat", "r+b");
							
							rewind(arch_profesionales);
							fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
							
							bandera = NULL;
							band_prestado = NULL;
							rewind(arch_profesionales);
							fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
							
							while(!feof(arch_profesionales) && bandera == false)
							{
								if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.prestamo > 0 && Reg_Profesionales.borrado == false)
								{
									band_prestado = true;
									break;
								}
								
								if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.prestamo == 0 && Reg_Profesionales.borrado == false)
								{
									bandera = true;
									fseek(arch_profesionales, (long)-sizeof(Reg_Profesionales), SEEK_CUR);
								}
								
								if(bandera == false)
								{
									fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);					
								}
					
							}
						
							printf("\n\n\tID: %s", Reg_Profesionales.id);
							printf("\n\tApellido y nombre: %s", Reg_Profesionales.apeYNom);
							printf("\n\tDNI: %s", Reg_Profesionales.dni);
							printf("\n\tTelefono: %s", Reg_Profesionales.telefono);
							
							/*posicion = ftell(arch_profesionales);
							printf("\n\nPosicion: %d\n\n", posicion);
							system("pause");*/
							
						// -------------------------------------------------------------
							
						printf("\n\n   1- EDITAR ID");
								if( strlen(id) != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
									printf(" (Edicion: %s)", id); 			
						
						printf("\n   2- EDITAR APELLIDO Y NOMBRE");
								if( strlen(apeYNom) != 0 ) 
									printf(" (Edicion actual: %s)", apeYNom); 
									
						printf("\n   3- EDITAR DNI");
								if( strlen(dni) != 0 ) 
									printf(" (Edicion actual: %s)", dni); 									
									
						printf("\n   4- EDITAR TELEFONO");
								if( strlen(telefono) != 0 ) 
									printf(" (Edicion actual: %s)", telefono); 	
																																				
						printf("\n\n   5- GUARDAR CAMBIOS");
						printf("\n   6- INGRESAR OTRO ID");
						
						printf("\n\n   7- CERRAR APLICACION");
						
						printf("\n\nSELECCIONE UNA OPCION: ");
						opcion = Comprobacion_Tecla_Escape();
						
						switch(opcion)
						{
							case '1':
									{
										system("cls");
										printf("INGRESE ID: ");
										_flushall();
										gets(id);
																
										break;
									}
							case '2':
									{
										system("cls");
										printf("INGRESE APELLIDO Y NOMBRE: ");
										_flushall();
										gets(apeYNom);
																
										break;
									}
							case '3':
									{
										system("cls");
										printf("INGRESE DNI: ");
										scanf("%d", &dni);
																	
										break;	
									}									
							case '4':
									{
										system("cls");
										printf("INGRESE TELEFONO: ");
										_flushall();
										gets(telefono);
																
										break;
									}																						

							case '5':
									{
										// ------ CARGA DE DATOS EN EL REGISTRO ------
										
											band_id = false;	
											band_apeYNom = false;
											band_telefono = false;
											band_dni = false;
											
											if( strlen(id) != 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
											{
												strcpy(Reg_Profesionales.id, id);
												band_id = true;					
												
												printf("%s", Reg_Profesionales.id);
												printf("\n\n");
												system("pause");					
											}
											if( strlen(apeYNom) != 0 )
											{
												strcpy(Reg_Profesionales.apeYNom, apeYNom);
												band_apeYNom = true;										
											}
											if( strlen(telefono) != 0 ) 
											{
												strcpy(Reg_Profesionales.telefono, telefono);
												band_telefono = true;										
											}
											if( strlen(dni) != 0 ) 
											{
												strcpy(Reg_Profesionales.dni, dni);
												band_dni = true;										
											}
																																												
												
										// -------------------------------------------	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
										
										// ----------------------------------------------- CARGA DEL REGISTRO EN EL ARCHIVO -----------------------------------------------
										
											if( band_id == true || band_apeYNom == true || band_telefono == true || band_dni == true )
											{
												/*posicion = ftell(arch_profesionales);
												printf("\n\nPosicion: %d\n\n", posicion);
												system("pause");*/
												
												fwrite(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																								
												system("cls");
												printf("Se edito el profesional exitosamente...");
												printf("\n\n");
												system("pause");
												system("cls");
												
												for(int i=0; i<strlen(id); i++) // Revalorizacion de cadenas a un valor nulo.
													id[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
												
												for(int i=0; i<strlen(apeYNom); i++)
													apeYNom[i] = NULL;
													
												for(int i=0; i<strlen(telefono); i++)
													telefono[i] = NULL;
												
												for(int i=0; i<strlen(dni); i++)
													dni[i] = NULL;
											}
											else
											{
												system("cls");
												printf("No se edito ningun campo del profesional ingresado...");	
												printf("\n\n");
												system("pause");
												system("cls");
											}
								
										// --------------------------------------------------------------------------------------------------------------------------------
											
										break;
									}							
							case '6':
									{
										strcpy(auxiliar, target); // Se declara una variable auxiliar para tomar el valor del target anterior. 
										 						  // Esto se hace porque cuando el target ingresado es incorrecto, el puntero
																  // se tiene que volver a posicionar en el target anterior. 
																  
										system("cls");
										printf("INGRESE ID DE PROFESIONAL A EDITAR: ");
										_flushall();
										gets(target);
										
										// --- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO ---
											 
											Reg_Profesionales.borrado = false;
											
											for(int i=0; i<strlen(id); i++) // Revalorizacion de cadenas a un valor nulo.
												id[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
											
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(telefono); i++)
												telefono[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
											
										// --------------------------------------------------
													
													
										// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
														
											bandera = NULL;
											band_prestado = NULL;
											
											rewind(arch_profesionales);
											fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											
											while(!feof(arch_profesionales) && bandera == false)
											{
												if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.prestamo > 0 && Reg_Profesionales.borrado == false)
												{
													band_prestado = true;
													break;
												}
												
												if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.prestamo == 0 && Reg_Profesionales.borrado == false)
												{
													bandera = true;
													fseek(arch_profesionales, (long)-sizeof(Reg_Profesionales), SEEK_CUR);
												}
												
												if(bandera == false)
												{
													fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);					
												}
									
											}											
											
											/*posicion = ftell(arch_profesionales);
											printf("Posicion: %d\n\n", posicion);
											system("pause");*/
																								
										// ---------------------------------------------------------------------
		
										if(bandera == true && band_prestado == false)
										{
											system("cls");
											printf("Se encontro el profesional exitosamente...");
											printf("\n\n");
											system("pause");
											system("cls");
											
											// -- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO --										
										
												for(int i=0; i<strlen(id); i++) 
													id[i] = NULL;			
												
												for(int i=0; i<strlen(apeYNom); i++)
													apeYNom[i] = NULL;
													
												for(int i=0; i<strlen(telefono); i++)
													telefono[i] = NULL;
												
												for(int i=0; i<strlen(dni); i++)
													dni[i] = NULL;
		
											// -------------------------------------------------
										}
										else if(bandera == true && band_prestado == true)
										{
											system("cls");
											printf("No es posible editar. El socio actualmente es un prestario...");
											printf("\n\n");
											system("pause");
											system("cls");
											
											strcpy(target, auxiliar); // La variable "target" toma el valor del auxiliar, que es del target anterior.	
											//Modulo_Socios_Estudiantes()
										}
										else if(bandera == false && band_prestado == false)
										{
											system("cls");
											printf("No se encontro el codigo del socio. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");	
											
											strcpy(target, auxiliar);
										}
																	
										break;	
									}						
							case '0':
									{
										fclose(arch_profesionales);
										Modulo_Socios_Profesionales();	
										break;
									}
							case '7':
									{
										fclose(arch_profesionales);
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
					while(true);					
			}
}
		
void Modulo_Socios_Profesionales_EliminarProfesional()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_profesionales;
		arch_profesionales = fopen("Profesionales.dat", "r+b");
			
		if(arch_profesionales == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Profesionales.dat");
			printf("\n\n(No hay ningun profesional en la base de datos)");
			printf("\n\n");
			system("pause");
		}
		
	// ----------------------------------------------------------
	else
	{
		Profesionales Reg_Profesionales;
		
		string target = {NULL};
		string centinela = {NULL};	
		
		bool bandera = NULL;
		bool band_prestamo = NULL;
		
		// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
		do
		{
			system("cls");
			printf("-- BORRADO DE UN SOCIO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE ID DEL PROFESIONAL A ELIMINAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_profesionales);
				Modulo_Socios_Profesionales();
			}	
			
			bandera = NULL;
			band_prestamo = NULL;
			rewind(arch_profesionales);
			fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
			
			while(!feof(arch_profesionales) && bandera == false)
			{
				if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.borrado == false && Reg_Profesionales.prestamo > 0)
				{
					band_prestamo = true;	
				}				
				
				if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.borrado == false && Reg_Profesionales.prestamo == 0)
				{
					fseek(arch_profesionales, (long)-sizeof(Reg_Profesionales), SEEK_CUR);
					bandera = true;	
				}


				if (bandera == false)
					fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);	
			}
			
			if(bandera == false && band_prestamo == false)
			{
				system("cls");
				printf("No se encontro el ID del estudiante ingresado. Ingrese nuevamente...");
				printf("\n\n");
				system("pause");
			}
			else if(band_prestamo == true)
			{
				system("cls");
				printf("No es posible eliminar. El socio actualmente es prestatario...");
				printf("\n\n");
				system("pause");	
			}
		}
		while(band_prestamo == true || bandera == false);
		// ---------------------------------------------------------------------	
			

			do
			{
				system("cls");
				printf("-- BORRADO DE UN SOCIO --");
				printf("\n\n(Si desea cancelar, escriba 'salir')");	
				printf("\n\n\tDESEA ELIMINAR EL PROFESIONAL(SI|NO): ");
				_flushall();
				gets(centinela);
				
				if(strcmp(centinela, "salir") == 0)
				{
					fclose(arch_profesionales);
					Modulo_Socios_Profesionales();
				}	
				
				if( strcmp((strupr(centinela)), "SI") == 0) // Cadena ingresada se convierte a mayusculas, y se compara con la cadena "SI"
				{
					Reg_Profesionales.borrado = true;
					fwrite(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
					
					// ---------------------------- BAJA FISICA DEL ARCHIVO ------------------------------
						FILE *aux;
						aux = fopen("auxiliar.dat", "w+b");
						
						rewind(arch_profesionales);
						fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
						
						while (!feof(arch_profesionales))
						{
							if (Reg_Profesionales.borrado == false)
							{
								fwrite(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, aux);
								
								bandera = true;
							}
							
							fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
						}
						
						if (bandera = true)
						{
							system("cls");
							printf("Se ha borrado el profesional exitosamente...");
							printf("\n\n");
							system("pause");
							system("cls");
						}
						else
						{
							system("cls");
							printf("No se pudo borrar el profesional.");
							printf("\n\n");
							system("pause");
						}
						
						fclose(arch_profesionales);
						fclose(aux);
						
						remove("Profesionales.dat");
						rename("auxiliar.dat", "Profesionales.dat");
						remove("auxiliar.dat");
						
					// -----------------------------------------------------------------------------------
										
				}
				else if( strcmp((strupr(centinela)), "NO") == 0) // Cadena ingresada se convierte a mayusculas, y se compara con la cadena "NO"
				{
					system("cls");
					printf("No se ha borrado el profesional ingresado.");
					printf("\n\n");
					system("pause");
					system("cls");
					
					fclose(arch_profesionales);
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
	
	} // Cierre if de archivo		
}

void Modulo_Socios_Profesionales_BuscarProfesional()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_profesionales;
		arch_profesionales = fopen("Profesionales.dat", "rb");
			
		if(arch_profesionales == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo Profesionales.dat");
			printf("\n\n(No hay ningun profesional en la base de datos)");
			printf("\n\n");
			system("pause");
		}
		
	// ----------------------------------------------------------
	else
	{
		Profesionales Reg_Profesionales;
		
		string target = {NULL};		
		
		bool bandera = false;
		
		// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
		
			system("cls");
			printf("-- BUSQUEDA DE UN SOCIO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE ID DEL PROFESIONAL A BUSCAR: ");
			_flushall();
			gets(target);	
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_profesionales);
				Modulo_Socios_Profesionales();
			}	
			
			bandera = false;
			rewind(arch_profesionales);
			fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
			
			while(!feof(arch_profesionales) && bandera == false )
			{
				if( strcmp(target, Reg_Profesionales.id) == 0 && Reg_Profesionales.borrado == false )
					bandera = true;
		
				if (bandera == false)
					fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);	
			}
						
		// ---------------------------------------------------------------------
		
		if(bandera == true)
		{
			system("cls");
			printf("Se ha encontrado el profesional exitosamente...");
			
			printf("\n\n\tID: %s", Reg_Profesionales.id);
			printf("\n\tApellido y nombre: %s", Reg_Profesionales.apeYNom);
			printf("\n\tDNI: %s", Reg_Profesionales.dni);
			printf("\n\tTelefono: %s", Reg_Profesionales.telefono);
			
			printf("\n\n");
			system("pause");
			system("cls");	
			
			fclose(arch_profesionales);		
		}
		else
		{
			system("cls");
			printf("No se encontro el ID del profesional ingresado...");
			printf("\n\nVolviendo a pantalla anterior...");
			printf("\n\n");
			system("pause");
			system("cls");
				
			fclose(arch_profesionales);	
			Modulo_Socios_Profesionales(); // Retornar a la funcion
		}
	}	
}

// **************************************************



// *************** MODULO DE PRESTAMOS *****************

void Modulo_Prestamos()
{
	char opcion = NULL;
	
	do
	{
		system("cls");
		printf("-- MODULO DE PRESTAMOS --");
		
		printf("\n\n\t1- PRESTAMOS DE LIBROS");
		printf("\n\t2- PRESTAMOS DE OBJETOS");
		
		printf("\n\n\t3- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		
		opcion = Comprobacion_Tecla_Escape();
		
		switch( opcion )
		{
			case '1':
					{
						Modulo_Prestamos_Libros();	
					}
			case '2':
					{
						Modulo_Prestamos_Objetos();	
					}
			case '0':
					{
						main();	
					}
			case '3':
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
	while(true);
}

void Modulo_Prestamos_Libros()
{
	char opcion = NULL;
		
	do
	{
		system("cls");
		printf("-- MODULO DE PRESTAMOS/LIBROS --");
		
		printf("\n\n\t1- LISTAR PRESTAMOS");
		printf("\n\n\t2- NUEVO PRESTAMO");
		printf("\n\t3- EDITAR PRESTAMO");
		printf("\n\t4- COMPLETAR PRESTAMO");
		printf("\n\t5- BUSCAR PRESTAMO");
		
		printf("\n\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();
		
		switch(opcion)
		{
			case '1':
					{
						Modulo_Prestamos_Libros_Listar();
						break;	
					}			
			case '2':
					{
						Modulo_Prestamos_Libros_Nuevo();
						break;	
						
					}
			case '3':
					{
						Modulo_Prestamos_Libros_Editar();
						break;								
					}
			case '4':
					{
						Modulo_Prestamos_Libros_Completar();
						break;							
					}
			case '5':
					{
						Modulo_Prestamos_Libros_Buscar();
						break;	
					}
			case '0':
					{
						Modulo_Prestamos();	
					}
			case '6':
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
	while(true);	
}

void Modulo_Prestamos_Objetos()
{
	char opcion = NULL;
	
	do
	{
		system("cls");
		printf("-- MODULO DE PRESTAMOS/OBJETOS --");
		
		printf("\n\n\t1- LISTAR PRESTAMOS");
		
		printf("\n\n\t2- NUEVO PRESTAMO");
		
		printf("\n\t3- EDITAR PRESTAMO");
		printf("\n\t4- COMPLETAR PRESTAMO");
		printf("\n\t5- BUSCAR PRESTAMO");
		
		printf("\n\n\t6- CERRAR APLICACION");
		
		printf("\n\nSELECCIONE UNA OPCION: ");
		opcion = Comprobacion_Tecla_Escape();
		
		switch(opcion)
		{
			case '1':
					{
						Modulo_Prestamos_Objetos_Listar();	
						break;	
					}			
			case '2':
					{
						Modulo_Prestamos_Objetos_Nuevo();	
						break;	
					}
			case '3':
					{
						Modulo_Prestamos_Objetos_Editar();	
						break;	
					}
			case '4':
					{
						Modulo_Prestamos_Objetos_Completar();	
						break;	
					}
			case '5':
					{
						Modulo_Prestamos_Objetos_Buscar();
						break;	
					}
			case '0':
					{
						Modulo_Prestamos();	
					}
			case '6':
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
	while(true);		
}

void Modulo_Prestamos_Libros_Listar()
{
	FILE *arch_prestamos_l;
	FILE *arch_libros;
	
	arch_prestamos_l = fopen("Prestamos_L.dat", "rb");
	
	if(arch_prestamos_l == NULL)
	{
		system("cls");
		printf("ERROR: El archivo 'Prestamos_L.dat' no existe.");
		printf("\n\n(Se debe registrar al menos un prestamo de un objeto).");
		printf("\n\n");
	}	
	else
	{
		Prestamos_Libros Reg_Prestamos_L;
		Libros Reg_Libros;
		
		int i = NULL;
		bool bandera = NULL;
		
		arch_libros = fopen("Libros.dat", "rb");
		
		rewind(arch_prestamos_l);
		fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
		
		system("cls");
		while(!feof(arch_prestamos_l))
		{
			rewind(arch_libros);
			fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
			while(!feof(arch_libros))
			{
				if(strcmp(Reg_Prestamos_L.cod_libro, Reg_Libros.codigo) == 0 && Reg_Prestamos_L.borrado == false)
				{
					bandera = true;
				
					printf("PRESTAMO [%d]:", i+1);
					printf("\n\tCodigo de prestamo: %s", Reg_Prestamos_L.codigo);
					printf("\n\tLibro: %s", Reg_Libros.titulo);
					printf("\n\tCantidad: %d", Reg_Prestamos_L.cantidad);
					printf("\n\tID Prestatario: %s", Reg_Prestamos_L.idprestatario);
					printf("\n\tApellido y nombre: %s", Reg_Prestamos_L.apeYNom);
					printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_L.fecha.dd, Reg_Prestamos_L.fecha.mm, Reg_Prestamos_L.fecha.aaaa);
					
					printf("\n\n------------------------------------------------------------------");
					printf("\n\n");	
					
					i++;
				}	
				fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);				
			}

			fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
		}
		
		if(bandera == false)
		{
			system("cls");
			printf("No se registro ningun prestamo...");
			printf("\n\n");
		}
	}
	
	system("pause");
}

void Modulo_Prestamos_Libros_Nuevo()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
	FILE *arch_prestamos_o;
	FILE *arch_prestamos_l;		
	FILE *arch_objetos;
	FILE *arch_libros;
	FILE *arch_profesionales;
	FILE *arch_estudiantes;
	
	arch_prestamos_l = fopen("Prestamos_L.dat", "a+b");
	arch_libros = fopen("Libros.dat", "r+b");
	
	if(arch_prestamos_l == NULL)
	{
		system("cls");
		printf("ERROR. No se pudo crear el archivo 'Prestamos_L.dat'");
		printf("\n\n");
		system("pause");	
	}
	else if(arch_libros == NULL)
	{
		system("cls");
		printf("ERROR. El archivo 'Libros.dat' no existe.");
		printf("\n\n(Tiene que cargar al menos un objeto).");
		printf("\n\n");
		system("pause");
	}
	/*else if(arch_profesionales == NULL)
	{
		system("cls");
		printf("ERROR. El archivo 'Profesionales.dat' no existe.");
		printf("\n\n(Tiene que cargar al menos un socio profesional).");
		printf("\n\n");
		system("pause");
	}
	else if(arch_estudiantes == NULL)
	{
		system("cls");
		printf("ERROR. El archivo 'Estudiantes.dat' no existe.");
		printf("\n\n(Tiene que cargar al menos un socio estudiante).");
		printf("\n\n");
		system("pause");
	}		
	*/
	
	// ----------------------------------------------------------
	
	else
	{	
		Prestamos_Objetos Reg_Prestamos_O;
		Prestamos_Libros Reg_Prestamos_L;
		Objetos Reg_Objetos;
		Libros Reg_Libros;
		Profesionales Reg_Profesionales;
		Estudiantes Reg_Estudiantes;
		
		char opcion = NULL; // variable centinela para switch principal.
	
		int cantidad = NULL;
		int nuevaCantidad = NULL;
		int dd = NULL;
		int mm = NULL;
		int aaaa = NULL;
		
		string centinela = {NULL};
		string cent_socio = {NULL};
		string codigo = {NULL}; 
		string codLibro = {NULL};
		string id = {NULL};
		string apeYNom = {NULL}; 
		string dni = {NULL};
		string telefono = {NULL};
		string turno = {NULL};
		string curso = {NULL};
			
		bool band_codigo = NULL;
		bool band_codLibro = NULL;
		bool band_cantidad = NULL;
		bool band_id = NULL;
		bool band_apeYNom = NULL;	
		bool band_dni = NULL;
		bool band_telefono = NULL;
		
		bool profesional_existente = NULL;
		bool estudiante_existente = NULL;
		bool prestamo_existente_l = NULL;
		bool prestamo_existente_o = NULL;
		bool libro_existente = NULL;
		bool socio_existente = NULL;
		bool dni_existente = NULL;
		bool cantidad_incorrecta = NULL;
		bool prestamo_socio = NULL;
		
		do
		{
			opcion = NULL;
			
			system("cls");
			
			printf("-- MODULO DE PRESTAMOS/LIBROS/NUEVO PRESTAMO --");
			
			printf("\n\n\t1- INGRESAR PRESTAMO");
			printf("\n\t2- GUARDAR PRESTAMO");
			
			printf("\n\n\t3- CERRAR APLICACION");
	
			printf("\n\nSELECCIONE UNA OPCION: ");
			opcion = Comprobacion_Tecla_Escape();
		
			switch( opcion )
			{
				case '1':
					
						//  ------------------------------------ CARGA DE DATOS ------------------------------------
							
						{
							
							//  -------------------------------------------- CODIGO DE PRESTAMO --------------------------------------------
							
								do
								{
									system("cls");
									
									prestamo_existente_l = NULL;
									prestamo_existente_o = NULL;
									printf("-- NUEVO PRESTAMO --");
									printf("\n\n(Si desea cancelar, escriba 'salir')");
					
									printf("\n\nDATOS DEL PRESTAMO: ");
										printf("\n\n\tCODIGO DE PRESTAMO: ");
										_flushall();
										gets(codigo);
										
										if(strcmp(codigo, "salir") == 0)
										{
											for(int i=0; i<strlen(codigo); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
												codigo[i] = NULL;
																							
										 	fclose(arch_prestamos_l);
										 	fclose(arch_libros);
										 	
											Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.							
										}
										
										//  --------------- COMPROBACION DE EXISTENCIA DEL CODIGO DEL PRESTAMO ---------------
										
											rewind(arch_prestamos_l);
											fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
											
											while(!feof(arch_prestamos_l) && prestamo_existente_l == false)
											{
												
												if(strcmp(codigo, Reg_Prestamos_L.codigo) == 0 && Reg_Prestamos_L.borrado == false)
												{
													prestamo_existente_l = true;
													break;
												}
												
												if(prestamo_existente_l == false)
													fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);			
											}
											
											
											/*arch_prestamos_o = fopen("Prestamos_O", "rb");
											if(arch_prestamos_o != NULL)
											{
												
												printf("HOLAA");
												system("pause");
												
												rewind(arch_prestamos_o);
												fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
												
												while(!feof(arch_prestamos_o) && prestamo_existente_o == false)
												{
													if(strcmp(codigo, Reg_Prestamos_O.codigo) == 0)
													{
														prestamo_existente_o = true;
														break;
													}
													
													if(prestamo_existente_o == false)
														fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);			
												}
												
												fclose(arch_objetos);												
											}*/
											
											if(prestamo_existente_l == true /*|| prestamo_existente_o == true*/)
											{
												system("cls");
												printf("El codigo del prestamo ya existe. Ingrese nuevamente...");
												printf("\n\n");
												system("pause");
											}
											
								} // Cierre do-while del codigo del prestamo
								while(prestamo_existente_l == true /*|| prestamo_existente_o == true*/);
								
								//  ----------------------------------------------------------------------------------
						
							//  ------------------------------------------------------------------------------------------------------------
							
							
							
							
							//  -------------------------------------------- OBJETO A PRESTAR --------------------------------------------
								
								do
								{
									libro_existente = NULL;
									
									system("cls");
									printf("-- NUEVO PRESTAMO --");
									printf("\n\n(Si desea cancelar, escriba 'salir')");
					
									printf("\n\nDATOS DEL PRESTAMO: ");
									printf("\n\n\tCODIGO DE LIBRO: ");
									_flushall();
									gets(codLibro);
									
									if(strcmp(codLibro, "salir") == 0)
									{
										for(int i=0; i<strlen(codLibro); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
											codLibro[i] = NULL;
										
									 	fclose(arch_prestamos_l);
									 	fclose(arch_libros);
									 	
										Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.								
									}
									
									//  --------------- COMPROBACION DE EXISTENCIA DEL OBJETO ---------------
									
										rewind(arch_libros);
										fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
										
										while(!feof(arch_libros) && libro_existente == false)
										{
											if(strcmp(codLibro, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
											{
												libro_existente = true;
												break;
											}
											
											if(libro_existente == false)
												fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);			
										}
										
										if(libro_existente == false)
										{
											system("cls");
											printf("El libro ingresado no existe. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
											system("cls");
										}
									}
									while(libro_existente == false);
								
								//  ---------------------------------------------------------------------
								
							//  ----------------------------------------------------------------------------------------------------------
							
							
							
							
							//  -------------------------------------------- CANTIDAD A PRESTAR --------------------------------------------
								
								do
								{	
									cantidad_incorrecta = NULL;
									libro_existente = NULL;
									nuevaCantidad = NULL;
									
									do
									{
										system("cls");
										printf("-- NUEVO PRESTAMO --");
										printf("\n\n(Si desea cancelar, escriba '0')");
										printf("\n\nDATOS DEL PRESTAMO: ");
										printf("\n\n\tCANTIDAD: ");
										scanf("%d", &cantidad);
										
										if(cantidad == 0)
										{
										 	fclose(arch_prestamos_l);
										 	fclose(arch_libros);
										 	
											Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.		
										}	
										if(cantidad <= 0)
										{
											system("cls");
											printf("La cantidad ingresada es incorrecta. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");		
										}									
									}
									while(cantidad <= 0);

								
									//  --------------- COMPROBACION DE CANTIDAD A PRESTAR CORRECTA ---------------
										
										rewind(arch_libros);
										fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
										
										while(!feof(arch_libros) && libro_existente == false)
										{
											if(strcmp(codLibro, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
											{
												libro_existente = true;
												break;
											}
											
											if(libro_existente == false)
												fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);			
										}
										
										/*printf("Cantidad ingresada: %d\n\n", cantidad);
										system("pause");						
										printf("Existencia actual del libro ingresado: %d\n\n", Reg_Libros.existencias);
										system("pause");*/
										
										nuevaCantidad = Reg_Libros.existencias - cantidad;
										
										/*printf("Nueva cantidad: %d\n\n", nuevaCantidad);
										system("pause");*/
											
										if(nuevaCantidad < 0)
										{
											cantidad_incorrecta = true;
											
											system("cls");
											printf("La cantidad ingresada es incorrecta. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}
			
									}
									while(cantidad_incorrecta == true);
									
									Reg_Libros.existencias = nuevaCantidad;
									
									/*printf("Reg_Libros.Existencias vale: %d", Reg_Libros.existencias);
									printf("\n\n");
									system("pause");*/
									
									/*fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
									fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);*/
																	
								//  ---------------------------------------------------------------------------
								
							//  ------------------------------------------------------------------------------------------------------------
							
							
							
							
							//  -------------------------------------------- CARGA DE ID DE PRESTATARIO --------------------------------------------
																	
								do
								{
								
										do
										{
											system("cls");
											printf("-- NUEVO PRESTAMO --");
											printf("\n\n(Si desea cancelar, escriba 'salir')");
											printf("\n\nDATOS DEL PRESTATARIO: ");
											printf("\n\n\tES SOCIO(SI|NO): ");
											_flushall();
											gets(cent_socio);
											strupr(cent_socio);
											
											if(strcmp(cent_socio, "salir") == 0)
											{
											 	fclose(arch_prestamos_l);
											 	fclose(arch_libros);
											 	
												Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.								
											}
											
											if(strcmp(cent_socio, "SI") == 0)
											{
												prestamo_socio = NULL;
													
													arch_profesionales = fopen("Profesionales.dat", "rb");
													arch_estudiantes = fopen("Estudiantes.dat", "rb");
													
													if(arch_profesionales == NULL && arch_estudiantes == NULL)
													{
														system("cls");
														printf("ERROR: Los archivos 'Estudiantes.dat' y 'Socios.dat' no existen.");
														printf("\n\n(Se debe registrar al menos un socio.)");
														printf("\n\n");
														system("pause");
														
														profesional_existente = false;
														estudiante_existente = false;
													}	
											}
											else if(strcmp(cent_socio, "NO") == 0)		
											{
												break;
											}
											else if(strcmp(cent_socio, "SI") != 0 && strcmp(cent_socio, "NO") != 0)
											{
												system("cls");
												printf("Valor incorrecto. Ingrese nuevamente...");
												printf("\n\n");
												system("pause");	
											}
										}
										while((profesional_existente == false && estudiante_existente == false) && ((strcmp(cent_socio, "SI") != 0 && strcmp(cent_socio, "NO") != 0)));

										if(strcmp(cent_socio, "SI") == 0)
										{			
												do
												{
													profesional_existente = NULL;
													estudiante_existente = NULL;
													
													system("cls");
													printf("-- NUEVO PRESTAMO --");
													printf("\n\n(Si desea cancelar, escriba 'salir')");
													printf("\n\nDATOS DEL PRESTATARIO: ");
													printf("\n\n\tINGRESE ID DEL SOCIO: ");
													_flushall();
													gets(id);
													
													if(strcmp(id, "salir") == 0)
													{
														for(int i=0; i<strlen(id); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
															id[i] = NULL;
														
													 	fclose(arch_prestamos_l);
													 	//fclose(arch_objetos);
													 	fclose(arch_libros);
													 	
														Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.							
													}									
													
													//  --------------- COMPROBACION DE EXISTENCIA DE ID ---------------
															
															arch_profesionales = fopen("Profesionales.dat", "rb");
															
															if(arch_profesionales != NULL)
															{
																rewind(arch_profesionales);
																fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																
																while(!feof(arch_profesionales) && profesional_existente == false)
																{
																	if(strcmp(id, Reg_Profesionales.id) == 0 )
																	{
																		profesional_existente = true;
																		break;
																	}
																	
																	if(profesional_existente == false)
																		fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																}
															}
															
															arch_estudiantes = fopen("Estudiantes.dat", "rb");
															
															if(arch_estudiantes != NULL);
															{
																rewind(arch_estudiantes);
																fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																
																while(!feof(arch_estudiantes) && estudiante_existente == false)
																{
																	if(strcmp(id, Reg_Estudiantes.id) == 0)
																	{
																		estudiante_existente = true;
																		break;
																	}
																	
																	if( estudiante_existente == false)
																		fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																}																
															}
															
															if(profesional_existente == true)
															{
																strcpy(apeYNom, Reg_Profesionales.apeYNom);
																strcpy(dni, Reg_Profesionales.dni);
																strcpy(telefono, Reg_Profesionales.telefono);
															}
															else if(estudiante_existente == true)
															{
																strcpy(apeYNom, Reg_Estudiantes.apeYNom);
																strcpy(dni, Reg_Estudiantes.dni);
																strcpy(turno, Reg_Estudiantes.turno);
																strcpy(curso, Reg_Estudiantes.curso);
															}
															
															if(estudiante_existente == false && profesional_existente == false)
															{
																system("cls");
																printf("No se encontro el ID de socio ingresado.");
																printf("\n\nIngrese nuevamente...");
																printf("\n\n");
																system("pause");
															}															
													}
													while(profesional_existente == false && estudiante_existente == false);	
											}	
											 // cierre else if si
											if(strcmp(cent_socio, "NO") == 0) // SI no es socio, se carga como particular.
											{
												
												//  -------------------------------------------- CARGA DE ID DEL PRESTATARIO --------------------------------------------
												do
												{
													socio_existente = NULL;
													
													system("cls");
													printf("-- NUEVO PRESTAMO --");
													printf("\n\n(Si desea cancelar, escriba 'salir')");
													printf("\n\nDATOS DEL PRESTATARIO: ");
													printf("\n\n\tID DE PRESTATARIO: ");
													_flushall();
													gets(id);												
													
													if(strcmp(id, "salir") == 0)
													{
														for(int i=0; i<strlen(id); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
															id[i] = NULL;
														
													 	fclose(arch_prestamos_l);
													 	fclose(arch_libros);
													 	
														Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.								
													}									
													
													//  --------------- COMPROBACION DE EXISTENCIA DE ID ---------------
															
															arch_profesionales = fopen("Profesionales.dat", "rb");
																
															if(arch_profesionales != NULL)
															{
																rewind(arch_profesionales);
																fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);

																while(!feof(arch_profesionales) && socio_existente == false)
																{
																	if(strcmp(id, Reg_Profesionales.id) == 0)
																	{
																		socio_existente = true;
																		break;
																	}
																	
																	if(socio_existente == false)
																		fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																}																															
															}
																											
															arch_estudiantes = fopen("Estudiantes.dat", "rb");															
															
															if(arch_estudiantes != NULL)
															{
																rewind(arch_estudiantes);	
																fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																															
																while(!feof(arch_estudiantes) && socio_existente == false)
																{
																	if(strcmp(id, Reg_Estudiantes.id) == 0)
																	{
																		socio_existente = true;
																		break;
																	}
																	
																	if(socio_existente == false)
																		fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																}
															}
														
															rewind(arch_prestamos_l);
															fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
															
															while(!feof(arch_prestamos_l) && socio_existente == false)
															{		
																if(strcmp(id, Reg_Prestamos_L.idprestatario) == 0 && Reg_Prestamos_L.borrado == false)
																{
																	socio_existente = true;
																	break;
																}
																
																if(socio_existente == false)
																	fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
															}															
																																								
															if(socio_existente == true)
															{
																system("cls");
																printf("El ID ingresado pertenece a un socio. Ingrese nuevamente...");
																printf("\n\n");
																system("pause");
																system("cls");								
															}
													}
													while(socio_existente == true);		
														
													system("cls");
													printf("-- NUEVO PRESTAMO --");
													printf("\n\n(Si desea cancelar, escriba 'salir')");
													printf("\n\nDATOS DEL PRESTATARIO: ");
													
													printf("\n\n\tAPELLIDO Y NOMBRE: ");
													_flushall();
													gets(apeYNom);
													
													if(strcmp(apeYNom, "salir") == 0)
													{
														for(int i=0; i<strlen(apeYNom); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
															apeYNom[i] = NULL;
														
													 	fclose(arch_prestamos_l);
													 	fclose(arch_libros);
													 	
														Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.								
													}					
												
				
											//  -------------------------------------------- CARGA DE DNI DEL PRESTATARIO --------------------------------------------
												
												do	
												{
													dni_existente = NULL;
													
													system("cls");
													printf("-- NUEVO PRESTAMO --");
													printf("\n\n(Si desea cancelar, escriba 'salir')");
													printf("\n\nDATOS DEL PRESTATARIO: ");
													
														printf("\n\n\tDNI: ");
													_flushall();
													gets(dni);
													
														if(strcmp(dni, "salir") == 0)
														{
															for(int i=0; i<strlen(dni); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
																dni[i] = NULL;
																
														 	fclose(arch_prestamos_l);
														 	fclose(arch_libros);
						
															Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.							
														}
													
														//  --------------- COMPROBACION DE EXISTENCIA DE DNI ---------------
														
															arch_profesionales = fopen("Profesionales.dat", "rb");
															
															if(arch_profesionales != NULL)
															{
																rewind(arch_profesionales);																
																fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																
																while(!feof(arch_profesionales) && dni_existente == false)
																{
																	if(strcmp(dni, Reg_Profesionales.dni) == 0)
																	{
																		dni_existente = true;
																		break;
																	}
																	
																	if(dni_existente == false)
																		fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																}																
															}
															
															arch_estudiantes = fopen("Estudiantes.dat", "rb");
															
															if(arch_estudiantes != NULL)
															{
																rewind(arch_estudiantes);															
																fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																
																while(!feof(arch_estudiantes) && dni_existente == false)
																{
																	if(strcmp(dni, Reg_Estudiantes.dni) == 0)
																	{
																		dni_existente = true;
																		break;
																	}
																	
																	if(dni_existente == false)
																		fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																}		
															}
															
															rewind(arch_prestamos_l);
															fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
															
															while(!feof(arch_prestamos_l) && dni_existente == false)
															{
																if(strcmp(dni, Reg_Prestamos_L.dni) == 0 && Reg_Prestamos_L.borrado == false)
																{
																	dni_existente = true;
																	break;
																}
																
																if(dni_existente == false)
																	fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);

															}
																														
															if(dni_existente == true)
															{
																system("cls");
																printf("El DNI ingresado pertenece a un socio. Ingrese nuevamente...");
																printf("\n\n");
																system("pause");
																system("cls");								
															}								
													}
													while(dni_existente == true);
												
												//  -----------------------------------------------------------------
											
											//  ----------------------------------------------------------------------------------------------------------------------							
												
												system("cls");
												printf("-- NUEVO PRESTAMO --");
												printf("\n\n(Si desea cancelar, escriba 'salir')");
												printf("\n\nDATOS DEL PRESTATARIO: ");
												
												printf("\n\n\tTELEFONO: ");
												_flushall();
												gets(telefono);	
												
												if(strcmp(telefono, "salir") == 0)
												{
													for(int i=0; i<strlen(telefono); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
														telefono[i] = NULL;
													
												 	fclose(arch_prestamos_l);
												 	fclose(arch_libros);
												 	
													Modulo_Prestamos_Libros_Nuevo(); // Salida de la carga de datos.								
												}															
					
								
								//  --------------------------------------------------------------------------------------------------------------------														
														
											} // Cierre else if cent_socio == NO
											else if(strcmp(cent_socio, "SI") != 0 && strcmp(cent_socio, "NO") != 0)
											{
												system("cls");
												printf("Valor incorrecto. Ingrese nuevamente...");
												printf("\n\n");
												system("pause");
											} //cierre else if no-si											
										}
										while (strcmp(cent_socio, "SI") != 0 && strcmp(cent_socio, "NO") != 0);
			
																		
												//  ----------------------------------------------------------------	
																						
											//  -------------------------------------------------------------------------------------------------------------------	
									break;
							
						//  ----------------------------------------------------------------------------------------
																
						}
				case '2':
						{
							// ------ COMPROBACION DE CAMPOS VACIOS ------
							
								if(strlen(codigo) != 0)	
									band_codigo = true;
										
								if(strlen(codLibro) != 0)	
									band_codLibro = true;
								
								if(cantidad != 0)	
									band_cantidad = true;
																	
								if(strlen(id) != 0)	
									band_id = true;
																	
								if(strlen(apeYNom) != 0)	
									band_apeYNom = true;
								
								if(strlen(dni) != 0)
									band_dni = true;
																																				
								if(strlen(telefono) != 0)
									band_telefono = true;
						
							// -------------------------------------------
							
							if (estudiante_existente == true)
							{
								do
								{
									system("cls");
									
									printf("-- DATOS DEL PRESTAMO --");
									printf("\n\tCodigo de prestamo: %s", codigo);
									printf("\n\tLibro: %s", Reg_Libros.titulo);
									printf("\n\tCantidad: %d", cantidad);
									
									printf("\n\n-- DATOS DEL PRESTATARIO --");
									printf("\n\tID: %s", id);
									printf("\n\tApellido y Nombre: %s", apeYNom);
									printf("\n\tDNI: %s", dni);
									printf("\n\tTurno: %s", turno);
									printf("\n\tCurso: %s", curso);
									
									printf("\n\nDESEA CARGAR EL PRESTAMO EN LA BASE DE DATOS(SI|NO): ");
									_flushall();
									gets(centinela);
									strupr(centinela);
								
									if(strcmp(centinela, "SI") == 0)									
									{
										strcpy(Reg_Prestamos_L.codigo, codigo);
										strcpy(Reg_Prestamos_L.cod_libro, codLibro);	
										Reg_Prestamos_L.cantidad = cantidad;
										
										strcpy(Reg_Prestamos_L.idprestatario, id);
										strcpy(Reg_Prestamos_L.apeYNom, apeYNom);
										strcpy(Reg_Prestamos_L.dni, dni);
										strcpy(Reg_Prestamos_L.telefono, telefono);
										
										
										libro_existente = NULL;										
										rewind(arch_libros);
										fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
										
										while(!feof(arch_libros) && libro_existente == false)
										{
											if(strcmp(codLibro, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false) 
											{
												libro_existente = true;
												break;
											}
											
											if(libro_existente == false)
												fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);			
										}	
										
										/*printf("cantidad ingresada: %d\n\n", cantidad);
										system("pause");
																			
										printf("Existencia actual del libro: %d\n\n", Reg_Libros.existencias);
										system("pause");*/										
										
										nuevaCantidad = NULL;
										nuevaCantidad = Reg_Libros.existencias - cantidad;
										Reg_Libros.existencias = nuevaCantidad;
										
										/*printf("Existencia actualizada de libros: %d\n\n", Reg_Libros.existencias);
										system("pause");*/												
										
										Reg_Libros.prestado = Reg_Libros.prestado + 1;
										
										fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
										fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
								
										estudiante_existente = NULL;
										arch_estudiantes = fopen("Estudiantes.dat", "r+b");
										if(arch_estudiantes != NULL)
										{
											rewind(arch_estudiantes);	
											fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
											
											while(!feof(arch_estudiantes) && estudiante_existente == false)
											{
												if(strcmp(id, Reg_Estudiantes.id) == 0)
												{
													estudiante_existente = true;
													break;
												}
												
												if( estudiante_existente == false)
													fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
											}																
										}
										
										if(estudiante_existente == true)
										{
											Reg_Estudiantes.prestamo = Reg_Estudiantes.prestamo + 1;
											
											fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);
											fwrite(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);																
										}										
										
										Reg_Prestamos_L.borrado = NULL;
										
										dd = Fecha_Dia();
										mm = Fecha_Mes();
										aaaa = Fecha_Anio();
										aaaa = aaaa + 1900;
										
										Reg_Prestamos_L.fecha.dd = dd;
										Reg_Prestamos_L.fecha.mm = mm;
										Reg_Prestamos_L.fecha.aaaa = aaaa;
										
										fseek(arch_prestamos_l, 2, SEEK_END);
										fwrite(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);	
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(codigo); i++)
												codigo[i] = NULL;
						
											for(int i=0; i<strlen(codLibro); i++)
												codLibro[i] = NULL;
						
											for(int i=0; i<strlen(id); i++)
												id[i] = NULL;
						
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
		
											for(int i=0; i<strlen(turno); i++)
												turno[i] = NULL;	
												
											for(int i=0; i<strlen(curso); i++)
												curso[i] = NULL;
												
											cantidad = NULL;
											dd = NULL;
											mm = NULL;
											aaaa = NULL;
											
											band_codigo = NULL;
											band_codLibro = NULL;
											band_cantidad = NULL;
																													
											band_id = NULL;																					 
											band_apeYNom = NULL;
											band_dni = NULL;
											band_telefono = NULL;																							
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------
										
										system("cls");
										printf("El prestamo ha sido cargado exitosamente...");
										printf("\n\n");
										system("pause");
										system("cls");	
								
									}	
									else if(strcmp(centinela, "NO") == 0)
									{
										system("cls");
										printf("No se ha cargado el prestamo...");
										printf("\n\n");
										system("pause");
									}
									else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");
										system("cls");
									}
								}
								while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);				
								
							}						
						
							
							if(profesional_existente == true)
							{
								do
								{
									system("cls");
									
									printf("-- DATOS DEL PRESTAMO --");
									printf("\n\tCodigo de prestamo: %s", codigo);
									printf("\n\tLibro: %s", Reg_Libros.titulo);
									printf("\n\tCantidad: %d", cantidad);
									
									printf("\n\n-- DATOS DEL PRESTATARIO --");
									printf("\n\tID: %s", id);
									printf("\n\tApellido y Nombre: %s", apeYNom);
									printf("\n\tDNI: %s", dni);
									printf("\n\tTelefono: %s", telefono);
									
									printf("\n\nDESEA CARGAR EL PRESTAMO EN LA BASE DE DATOS(SI|NO): ");
									_flushall();
									gets(centinela);
									strupr(centinela);
								
									if(strcmp(centinela, "SI") == 0)									
									{
										strcpy(Reg_Prestamos_L.codigo, codigo);
										strcpy(Reg_Prestamos_L.cod_libro, codLibro);	
										Reg_Prestamos_L.cantidad = cantidad;
										
										strcpy(Reg_Prestamos_L.idprestatario, id);
										strcpy(Reg_Prestamos_L.apeYNom, apeYNom);
										strcpy(Reg_Prestamos_L.dni, dni);
										strcpy(Reg_Prestamos_L.telefono, telefono);
										
										libro_existente = NULL;
										rewind(arch_libros);
										fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
										
										while(!feof(arch_libros) && libro_existente == false)
										{
											if(strcmp(codLibro, Reg_Libros.codigo) == 0)
											{
												libro_existente = true;
												
												break;
											}
											
											if(libro_existente == false)
												fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);			
										}	
										
										/*printf("cantidad ingresada: %d\n\n", cantidad);
										system("pause");*/
										
										nuevaCantidad = NULL;
										nuevaCantidad = Reg_Libros.existencias - cantidad;
										Reg_Libros.existencias = nuevaCantidad;
										
										Reg_Libros.prestado = Reg_Libros.prestado + 1;
										fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
										fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
										
										profesional_existente = NULL;
										arch_profesionales = fopen("Profesionales.dat", "r+b");
										if(arch_profesionales != NULL)
										{
											rewind(arch_profesionales);	
											fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											
											while(!feof(arch_estudiantes) && estudiante_existente == false)
											{
												if(strcmp(id, Reg_Estudiantes.id) == 0)
												{
													profesional_existente = true;
													break;
												}
												
												if( profesional_existente == false)
													fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											}																
										}
										
										if(profesional_existente == true)
										{
											Reg_Profesionales.prestamo = Reg_Profesionales.prestamo + 1;
											
											fseek(arch_profesionales, (long)-sizeof(Reg_Profesionales), SEEK_CUR);
											fwrite(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);																
										}										
	
										dd = Fecha_Dia();
										mm = Fecha_Mes();
										aaaa = Fecha_Anio();
										aaaa = aaaa + 1900;
										
										Reg_Prestamos_L.fecha.dd = dd;
										Reg_Prestamos_L.fecha.mm = mm;
										Reg_Prestamos_L.fecha.aaaa = aaaa;
										
										Reg_Prestamos_L.borrado = false;
										
										fseek(arch_prestamos_l, 2, SEEK_END);
										fwrite(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);	
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(codigo); i++)
												codigo[i] = NULL;
						
											for(int i=0; i<strlen(codLibro); i++)
												codLibro[i] = NULL;
						
											for(int i=0; i<strlen(id); i++)
												id[i] = NULL;
						
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
		
											for(int i=0; i<strlen(telefono); i++)
												telefono[i] = NULL;	
												
											cantidad = NULL;
											dd = NULL;
											mm = NULL;
											aaaa = NULL;												
											
											band_codigo = NULL;
											band_codLibro = NULL;
											band_cantidad = NULL;
																													
											band_id = NULL;																					 
											band_apeYNom = NULL;
											band_dni = NULL;
											band_telefono = NULL;
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------
										
										system("cls");
										printf("El prestamo ha sido cargado exitosamente...");
										printf("\n\n");
										system("pause");
										system("cls");
										
										break;
									}
									else if(strcmp(centinela, "NO") == 0)
									{
										system("cls");
										printf("No se ha cargado el prestamo...");
										printf("\n\n");
										system("pause");
									}
									else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");
										system("cls");
									}
								}	
								while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);																	
							}
							
							if(estudiante_existente == false && profesional_existente == false)
							{
								if(band_codigo == true && band_codLibro == true && band_cantidad == true && band_id == true && band_apeYNom == true && band_dni == true && band_telefono == true)
								{
									do
									{
										system("cls");
										
										printf("-- DATOS DEL PRESTAMO --");
										printf("\n\tCodigo de prestamo: %s", codigo);
										strcpy(Reg_Prestamos_L.cod_libro, codLibro);
										printf("\n\tLibro: %s", Reg_Libros.titulo);
										printf("\n\tCantidad: %d", cantidad);
										
										printf("\n\n-- DATOS DEL PRESTATARIO --");
										printf("\n\tID: %s", id);
										printf("\n\tApellido y Nombre: %s", apeYNom);
										printf("\n\tDNI: %s", dni);
										printf("\n\tTelefono: %s", telefono);
										
										printf("\n\nDESEA CARGAR EL PRESTAMO EN LA BASE DE DATOS(SI|NO): ");
										_flushall();
										gets(centinela);
										strupr(centinela);
									
										if(strcmp(centinela, "SI") == 0)									
										{
											strcpy(Reg_Prestamos_L.codigo, codigo);
											strcpy(Reg_Prestamos_L.cod_libro, codLibro);	
											Reg_Prestamos_L.cantidad = cantidad;
											
											strcpy(Reg_Prestamos_L.idprestatario, id);
											strcpy(Reg_Prestamos_L.apeYNom, apeYNom);
											strcpy(Reg_Prestamos_L.dni, dni);
											strcpy(Reg_Prestamos_L.telefono, telefono);

											rewind(arch_libros);
											fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
											
											while(!feof(arch_libros) && libro_existente == false)
											{
												if(strcmp(codLibro, Reg_Libros.codigo) == 0)
												{
													libro_existente = true;
													fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
													break;
												}
												
												if(libro_existente == false)
													fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);			
											}	

											/*printf("cantidad ingresada: %d\n\n", cantidad);
											system("pause");*/
											
											nuevaCantidad = Reg_Libros.existencias - cantidad;
											Reg_Libros.existencias = nuevaCantidad;

											Reg_Libros.prestado = true;
											fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
											
											dd = Fecha_Dia();
											mm = Fecha_Mes();
											aaaa = Fecha_Anio();
											aaaa = aaaa + 1900;
											
											Reg_Prestamos_L.fecha.dd = dd;
											Reg_Prestamos_L.fecha.mm = mm;
											Reg_Prestamos_L.fecha.aaaa = aaaa;
											
											Reg_Prestamos_L.borrado = false;
											
											fseek(arch_prestamos_l, 2, SEEK_END);
											fwrite(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);	
											
											// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
											
												for(int i=0; i<strlen(codigo); i++)
													codigo[i] = NULL;
							
												for(int i=0; i<strlen(codLibro); i++)
													codLibro[i] = NULL;
							
												for(int i=0; i<strlen(id); i++)
													id[i] = NULL;
							
												for(int i=0; i<strlen(apeYNom); i++)
													apeYNom[i] = NULL;
													
												for(int i=0; i<strlen(dni); i++)
													dni[i] = NULL;
			
												for(int i=0; i<strlen(telefono); i++)
													telefono[i] = NULL;	
													
												cantidad = NULL;
												dd = NULL;
												mm = NULL;
												aaaa = NULL;												
												
												band_codigo = NULL;
												band_codLibro = NULL;
												band_cantidad = NULL;
																														
												band_id = NULL;																					 
												band_apeYNom = NULL;
												band_dni = NULL;
												band_telefono = NULL;
												
												// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
												
											// -------------------------------------------------------------
											
											system("cls");
											printf("El prestamo ha sido cargado exitosamente...");
											printf("\n\n");
											system("pause");
											system("cls");											
										}
										else if(strcmp(centinela, "NO") == 0)
										{
											system("cls");
											printf("No se ha cargado el prestamo...");
											printf("\n\n");
											system("pause");
										}
										else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
										{
											system("cls");
											printf("Valor incorrecto. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
											system("cls");
										}
									}
									while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);
								}
								else
								{
									system("cls");
									printf("No es posible guardar el prestamo. Hay campos sin completar...");
									printf("\n\n");
									system("pause");
								}
								
									
							} // Cierre if -> != profesor y != estudiante
							
							break;
						}
				case '3':
						{
						 	fclose(arch_prestamos_o);
						 	fclose(arch_libros);
							Salir();
						}
				case '0':
						{
						 	fclose(arch_prestamos_l);
						 	fclose(arch_libros);
						 	Modulo_Prestamos_Libros();
							break;
						}
				default:
						{
						 	system("cls");
						 	printf("Opcion incorrecta. Ingrese nuevamente...");
						 	printf("\n\n");
						 	system("pause");
							break;
						}	
						 				 					 					 				 	
				} // cierre switch 
		}
		while(true);			
	}
	
}

void Modulo_Prestamos_Libros_Editar()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_prestamos_l;
		FILE *arch_libros;
		
		arch_prestamos_l = fopen("Prestamos_L.dat", "r+b");
		arch_libros = fopen("Libros.dat", "r+b");
			
		if(arch_prestamos_l == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo 'Prestamos_L.dat'");
			printf("\n\n(No hay ningun prestamo de objetos en la base de datos)");
			printf("\n\n");
			system("pause");
			
			Modulo_Prestamos_Libros();
		}
		if(arch_libros == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo 'Libros.dat'");
			printf("\n\n(No hay ningun libro en la base de datos)");
			printf("\n\n");
			system("pause");		
			
			Modulo_Prestamos_Libros();	
		}
	
	// ----------------------------------------------------------	
	
	else
	{
		Prestamos_Libros Reg_Prestamos_L;
		Libros Reg_Libros;
		
		char opcion = NULL;
		int cantidad = NULL;
		int nuevaCantidad = NULL;
		int aux_cantidad = NULL;
		
		string target = {NULL};
		string codigo = {NULL};
		string auxiliar = {NULL};
				
		bool bandera = NULL;
		bool band_libro = NULL;
		bool band_codigo = NULL;	
		bool band_cantidad = NULL;
		bool libro_encontrado = NULL;
	
		// ------------ BUSQUEDA DEL ID DEL PROFESIONAL EN EL ARCHIVO ------------
		
		do
		{
			bandera = NULL;
			
			system("cls");
			printf("-- EDICION DE UN PRESTAMO --");
			printf("(Si desea cancelar, escribla 'salir')");
			printf("\n\n\tINGRESE EL CODIGO DEL PRESTAMO A EDITAR: ");
			_flushall();
			gets(target);
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_prestamos_l);
				Modulo_Prestamos_Libros;
			}
			
			rewind(arch_prestamos_l);
			fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
			
			while(!feof(arch_prestamos_l) && bandera == false)
			{
				if( strcmp(target, Reg_Prestamos_L.codigo) == 0 && Reg_Prestamos_L.borrado == false)
				{
					bandera = true;
					fseek(arch_prestamos_l, (long)-sizeof(Reg_Prestamos_L), SEEK_CUR);
				}
				
				if(bandera == false)
					fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);					
			}			
				
			if(bandera == true)
			{
				system("cls");
				printf("Se encontro el prestamo exitosamente...");
				printf("\n\n");
				system("pause");
				system("cls");
			}
			else if(bandera == false)
			{
				system("cls");
				printf("No se encontro el codigo del prestamo. Ingrese nuevamente...");
				printf("\n\n");
				system("pause");
				system("cls");
			}
		}
		while(bandera == false);
		// ---------------------------------------------------------------------		
		
				do
				{
					opcion = NULL;
					
					system("cls");
					printf("-- MODULO DE PRESTAMOS/OBJETOS/EDITAR PRESTAMO --");
					
					// ------------------ MOSTRAR PROFESIONAL INGRESADO ------------------
							
							// Luego de ingresar el codigo en el case 4, si el codigo es incorrecto, 
							//se tiene que volver a recorrer el archivo para volver a coincidir con el target anterior.
							
							arch_prestamos_l = fopen("Prestamos_L", "r+b");
							
							rewind(arch_prestamos_l);
							fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
							
							bandera = NULL;;
							
							while(!feof(arch_prestamos_l) && bandera == false)
							{
								if( strcmp(target, Reg_Prestamos_L.codigo) == 0 && Reg_Prestamos_L.borrado == false)
								{
									bandera = true;
									fseek(arch_prestamos_l, (long)-sizeof(Reg_Prestamos_L), SEEK_CUR);
								}
								
								if(bandera == false)
								{
									fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);					
								}
					
							}
						
							printf("\n\n\tCodigo de prestamo: %s", Reg_Prestamos_L.codigo);
							
							rewind(arch_libros);
							fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
							
							band_libro = NULL;
							
							while(!feof(arch_libros) && band_libro == false)
							{
								if(strcmp(Reg_Prestamos_L.cod_libro, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
								{
									band_libro = true;
									break;
								}
								
								if(band_libro == false)
									fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
							}
										
							printf("\n\tLibro: %s", Reg_Libros.titulo);
							printf("\n\tCantidad: %d", Reg_Prestamos_L.cantidad);
							printf("\n\tID Prestatario: %s", Reg_Prestamos_L.idprestatario);
							printf("\n\tApellido y nombre: %s", Reg_Prestamos_L.apeYNom);
							printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_L.fecha.dd, Reg_Prestamos_L.fecha.mm, Reg_Prestamos_L.fecha.aaaa);
							
						// -------------------------------------------------------------
							
						printf("\n\n   1- EDITAR CODIGO");
								if( strlen(codigo) != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
									printf(" (Edicion actual: %s)", codigo); 			
						
						printf("\n   2- EDITAR CANTIDAD");
								if (cantidad != 0) 
									printf(" (Edicion actual: %d)", cantidad); 							
																																				
						printf("\n\n   3- GUARDAR CAMBIOS");
						printf("\n   4- INGRESAR OTRO ID");
						
						printf("\n\n   5- CERRAR APLICACION");
						
						printf("\n\nSELECCIONE UNA OPCION: ");
						opcion = Comprobacion_Tecla_Escape();
						
						switch(opcion)
						{
							case '1':
									{
										system("cls");
										printf("INGRESE CODIGO: ");
										_flushall();
										gets(codigo);
																
										break;
									}
							case '2':
									{
										system("cls");
										printf("INGRESE CANTIDAD: ");
										scanf("%d", &cantidad);
										
										arch_libros = fopen("Libros.dat", "r+b");
											
										if(arch_libros != NULL)
										{
											libro_encontrado = NULL;
											rewind(arch_libros);
											fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
											
											while(!feof(arch_libros) && libro_encontrado == false)
											{
												if(strcmp(Reg_Prestamos_L.cod_libro, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
												{
													libro_encontrado = true;
													break;
												}
												
												if(libro_encontrado == false)
													fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
											}
											
											printf("Cantidad actual del libro: %d\n\n", Reg_Libros.existencias);
											system("pause");
											
											printf("Cantidad actual del prestamo: %d\n\n", Reg_Prestamos_L.cantidad);
											system("pause");
											
											nuevaCantidad = Reg_Libros.existencias + Reg_Prestamos_L.cantidad;
											
											printf("Nueva cantidad del libro: %d\n\n", nuevaCantidad);
											system("pause");
											
											Reg_Libros.existencias = nuevaCantidad - cantidad;
											aux_cantidad = Reg_Libros.existencias;
											
											printf("Nueva cantidad del libro: %d\n\n", Reg_Libros.existencias);
											system("pause");
											
											if(nuevaCantidad < 0)
											{
												system("cls");
												printf("Cantindad incorrecta.");
												printf("\n\n");
												system("pause");
												cantidad = NULL;
											}
										}
										
										break;
									}																														
							case '3':
									{
										// ------ CARGA DE DATOS EN EL REGISTRO ------
										
											band_codigo = NULL;	
											band_cantidad = NULL;
											
											if( strlen(codigo) != 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
											{
												strcpy(Reg_Prestamos_L.codigo, codigo);
												band_codigo = true;					
												
												printf("%s", Reg_Prestamos_L.codigo);
												printf("\n\n");
												system("pause");					
											}
											
											if( cantidad > 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
											{
												band_cantidad = true;
												Reg_Prestamos_L.cantidad = cantidad;
											}
																																													
										// -------------------------------------------	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
										
										// ----------------------------------------------- CARGA DEL REGISTRO EN EL ARCHIVO -----------------------------------------------
										
											if(band_codigo == true || band_cantidad == true)
											{
													if(band_cantidad == true)
													{		
														arch_libros = fopen("Libros.dat", "r+b");
														
														if(arch_libros != NULL)
														{
															libro_encontrado = NULL;
															rewind(arch_libros);
															fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
															
															while(!feof(arch_libros) && libro_encontrado == false)
															{
																if(strcmp(Reg_Prestamos_L.cod_libro, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
																{
																	libro_encontrado = true;															
																	fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);
																	break;
																}
																
																if(libro_encontrado == false)
																	fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
															}
															
															Reg_Libros.existencias = aux_cantidad;
															
															fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
															fclose(arch_libros);
														}
													}
													
													fwrite(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
																									
													system("cls");
													printf("Se edito el prestamo exitosamente...");
													printf("\n\n");
													system("pause");
													system("cls");
													
													for(int i=0; i<strlen(codigo); i++) // Revalorizacion de cadenas a un valor nulo.
														codigo[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
													
													cantidad = NULL;		
								
											}
											
											if(band_codigo == false && band_cantidad == false)
											{
												system("cls");
												printf("No se edito ningun campo del profesional ingresado...");	
												printf("\n\n");
												system("pause");
												system("cls");
											}
								
										// --------------------------------------------------------------------------------------------------------------------------------
											
										break;
									}							
							case '4':
									{
										strcpy(auxiliar, target); // Se declara una variable auxiliar para tomar el valor del target anterior. 
										 						  // Esto se hace porque cuando el target ingresado es incorrecto, el puntero
																  // se tiene que volver a posicionar en el target anterior. 
																  
										system("cls");
										printf("INGRESE CODIGO DE PRESTAMO A EDITAR: ");
										_flushall();
										gets(target);
										
										// --- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO ---
											 											
											for(int i=0; i<strlen(codigo); i++) // Revalorizacion de cadenas a un valor nulo.
												codigo[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
											
											cantidad = NULL;
											
										// --------------------------------------------------
													
													
										// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
														
											bandera = NULL;
											
											rewind(arch_prestamos_l);
											fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
											
											bandera = false;
											
											while(!feof(arch_prestamos_l) && bandera == false)
											{
												if( strcmp(target, Reg_Prestamos_L.codigo) == 0 && Reg_Prestamos_L.borrado == false)
												{
													bandera = true;
													fseek(arch_prestamos_l, (long)-sizeof(Reg_Prestamos_L), SEEK_CUR);
												}
												
												if(bandera == false)
													fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);					
									
											}
																			
										// ---------------------------------------------------------------------
		
										if(bandera == true)
										{
											system("cls");
											printf("Se encontro el prestamo exitosamente...");
											printf("\n\n");
											system("pause");
											system("cls");
											
											// -- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO --										
										
												for(int i=0; i<strlen(codigo); i++) 
													codigo[i] = NULL;			
												
												cantidad = NULL;
											// -------------------------------------------------
										}
										else
										{
											system("cls");
											printf("No se encontro el codigo del prestamo ingresado...");
											printf("\n\n");
											system("pause");
											system("cls");
											
											fclose(arch_prestamos_l);	
											strcpy(target, auxiliar); // La variable "target" toma el valor del auxiliar, que es del target anterior.	
										}
																	
										break;	
									}						
							case '0':
									{
										fclose(arch_prestamos_l);
										Modulo_Prestamos_Libros();	
										break;
									}
							case '7':
									{
										fclose(arch_prestamos_l);
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
					while(true);					
			}
		
}

void Modulo_Prestamos_Libros_Completar()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
	FILE *arch_prestamos_l;
	FILE *arch_libros;
	FILE *arch_estudiantes;
	FILE *arch_profesionales;
	
	arch_prestamos_l = fopen("Prestamos_L.dat", "r+b");
	
	if(arch_prestamos_l == NULL)
	{
		system("cls");
		printf("ERROR: El archivo 'Prestamos_L.dat' no existe");
		printf("\n\n(Debe registrar al menos un prestamo de objeto).");
		printf("\n\n");
		system("pause");
	}
		
	// ----------------------------------------------------------
	else
	{
		int posicion = NULL;
		
		Prestamos_Libros Reg_Prestamos_L;
		Libros Reg_Libros;
		Estudiantes Reg_Estudiantes;
		Profesionales Reg_Profesionales;
		
		string target = {NULL};
		string centinela = {NULL};
		string cpy_target = {NULL};
		string cpy_centinela = {NULL};
		
		string codLibro = {NULL};
		
		bool band_encontrado = NULL;
		bool bandera = NULL;
		bool band_estudiante = NULL;
		bool band_profesional = NULL;
		
		do
		{
			band_encontrado = NULL;	
			
			system("cls");
			printf("-- COMPLETAR UN PRESTAMO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE EL CODIGO DEL PRESTAMO A COMPLETAR: ");		
			_flushall();
			gets(target);
			
			strcpy(cpy_target, target);
			
			if(strcmp(strupr(cpy_target), "SALIR") == 0) 
			{
				fclose(arch_prestamos_l);
				Modulo_Prestamos_Libros();
			}
			
			rewind(arch_prestamos_l);
			fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
			
			while(!feof(arch_prestamos_l) && band_encontrado == false)
			{
				if(strcmp(target, Reg_Prestamos_L.codigo) == 0 && Reg_Prestamos_L.borrado == false)
				{
					band_encontrado = true;
					fseek(arch_prestamos_l, (long)-sizeof(Reg_Prestamos_L), SEEK_CUR);
					break;
				}
				
				if(band_encontrado == false)
					fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
			}	
				
			if(band_encontrado == false)
			{
				system("cls");
				printf("No se encontro el codigo del prestamo. Ingrese nuevamente...");
				printf("\n\n");
				system("pause");
			}	
		}
		while(band_encontrado == false);
		
		band_encontrado = NULL;
		arch_libros = fopen("Libros.dat", "r+b");
		
		rewind(arch_libros);
		fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
		
		while(!feof(arch_libros) && band_encontrado == false)
		{	
			if(strcmp(Reg_Prestamos_L.cod_libro, Reg_Libros.codigo) == 0 && Reg_Libros.borrado == false)
			{
				band_encontrado = true;	
				fseek(arch_libros, (long)-sizeof(Reg_Libros), SEEK_CUR);		
				break;
			}
			
			if(band_encontrado == false)
				fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
		}	
		
		band_estudiante = NULL;
		band_encontrado = NULL;
		arch_estudiantes = fopen("Estudiantes.dat", "r+b");
		
		if(arch_estudiantes != NULL)
		{
			rewind(arch_estudiantes);
			fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
			
			while(!feof(arch_estudiantes) && band_encontrado == false)
			{
				if(strcmp(Reg_Prestamos_L.idprestatario, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.borrado == false)
				{
					band_encontrado = true;
					band_estudiante = true;
					fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);	
					break;	
				}
				
				if(band_encontrado == false)
					fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);	
			}
		}

		
		band_profesional = NULL;
		band_encontrado = NULL;
		arch_profesionales = fopen("Profesionales.dat", "r+b");
		
		if(arch_profesionales != NULL)
		{
			rewind(arch_profesionales);
			fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
			
			while(!feof(arch_profesionales) && band_encontrado == false)
			{
				if(strcmp(Reg_Prestamos_L.idprestatario, Reg_Profesionales.id) == 0 && Reg_Profesionales.borrado == false)
				{
					band_encontrado = true;
					band_profesional = true;
					fseek(arch_profesionales, (long)-sizeof(Reg_Profesionales), SEEK_CUR);	
					break;	
				}
				
				if(band_encontrado == false)
					fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);	
			}
		}		
		
		/*printf("Reg_Libros.existencias vale:  %d\n\n", Reg_Libros.existencias);
		system("pause");
		
		printf("Reg_Prestamos_L.cantidad vale: %d\n\n", Reg_Prestamos_L.cantidad);
		system("pause");*/
		
		Reg_Libros.existencias = Reg_Libros.existencias + Reg_Prestamos_L.cantidad;	
		Reg_Libros.prestado = Reg_Libros.prestado - 1;	
		
		/*printf("Reg_Libros.existencias actualizado vale:  %d\n\n", Reg_Libros.existencias);
		system("pause");*/
		
		if(band_estudiante == true)
		{
			/*printf("Estudiante encontrado\n\n");
			system("pause");*/
			Reg_Estudiantes.prestamo = Reg_Estudiantes.prestamo - 1;
		}
		
		if(band_profesional == true)
		{
			/*printf("Profesionale encontrado\n\n");
			system("pause");*/
			Reg_Profesionales.prestamo = Reg_Profesionales.prestamo - 1;
		}
				
		do
		{
			system("cls");
			printf("-- COMPLETAR UN PRESTAMO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tDESEA COMPLETAR EL PRESTAMO(SI|NO): ");
			_flushall();
			gets(centinela);
			strcpy(cpy_centinela, centinela);
			
			if(strcmp(strupr(cpy_centinela), "SI") == 0)
			{
				bandera = NULL;
				
				fwrite(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
				
				/*printf("Reg_Libros.existencias 2 vale:  %d\n\n", Reg_Libros.existencias);
				system("pause");*/
				fclose(arch_libros);
				
				if(band_estudiante == true)
				{
					fwrite(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
					fclose(arch_estudiantes);
				}
				
				if(band_profesional == true)
				{
					fwrite(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
					fclose(arch_profesionales);
				}				
			
		
				/*printf("Posicion: %d\n\n", posicion);
				system("pause");*/
				
				Reg_Prestamos_L.borrado = true;		
				fwrite(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
				
				// ---------------------------- BAJA FISICA DEL ARCHIVO ------------------------------
					FILE *aux;
					aux = fopen("auxiliar.dat", "w+b");
					
					rewind(arch_prestamos_l);
					fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
					
					while (!feof(arch_prestamos_l))
					{
						if (Reg_Prestamos_L.borrado == false)
						{	
							fwrite(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, aux);
						}
						
						fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
					}
										
					fclose(arch_prestamos_l);
					fclose(aux);				

					remove("Prestamos_L.dat");
					rename("auxiliar.dat", "Prestamos_L.dat");
					
				// -----------------------------------------------------------------------------------		
			}
			else if(strcmp(strupr(cpy_centinela), "NO") == 0)
			{
				system("cls");
				printf("No se ha borrado el prestamo ingresado...");
				printf("\n\n");
				system("pause");
			}
			else if(strcmp(strupr(cpy_centinela), "NO") != 0 && (strcmp(strupr(cpy_centinela), "SI") != 0))
			{
				system("cls");
				printf("Valor incorrecto. Ingrese nuevamente...");
				printf("\n\n");
				system("pause");
			}
			
		}
		while(strcmp(strupr(cpy_centinela), "NO") != 0 && (strcmp(strupr(cpy_centinela), "SI") != 0));
	}
}

void Modulo_Prestamos_Libros_Buscar()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_prestamos_l;
		FILE *arch_libros;
		
		arch_prestamos_l = fopen("Prestamos_L.dat", "rb");
		arch_libros = fopen("Libros.dat", "rb");
			
		if(arch_prestamos_l == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo 'Prestamos_L'.dat'");
			printf("\n\n(No hay ningun prestamo en la base de datos)");
			printf("\n\n");
		}
		
	// ----------------------------------------------------------
	
	else
	{
		system("cls");
		
		char opcion = NULL;
			
		Prestamos_Libros Reg_Prestamos_L;
		Libros Reg_Libros;
				
		int i = 0;		
		bool bandera = false;
		
		string codPrestamo = {NULL};
		string codLibro = {NULL};
		string id = {NULL};
		
		bool encontrado = NULL;
		bool encontrado_L = NULL;
		
		do
		{
			opcion = NULL;
			
			system("cls");
			printf("-- BUSQUEDA DE UN PRESTAMO -- ");
			printf("\n\n\t1- BUSQUEDA POR CODIGO DE PRESTAMO");
			printf("\n\t2- BUSQUEDA POR CODIGO DE LIBRO");
			printf("\n\t3- BUSQUEDA POR ID DE PRESTATARIO");
			
			printf("\n\nSELECCIONE UNA OPCION: ");
			opcion = Comprobacion_Tecla_Escape();
			
			switch( opcion )
			{
				case '1':
						{
							encontrado = NULL;
							
							system("cls");
							printf("INGRESE CODIGO DE PRESTAMO: ");
							_flushall();
							gets(codPrestamo);
							
							rewind(arch_prestamos_l);
							
							
							fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);		
							
							while(!feof(arch_prestamos_l) && encontrado == false && Reg_Prestamos_L.borrado == false)
							{
								if(strcmp(codPrestamo, Reg_Prestamos_L.codigo) == 0)
								{
									encontrado = true;
									break;
								}
								
								if(encontrado == false)
									fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
							}
							
							encontrado = NULL;
							
							rewind(arch_libros);
							fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
							
							while(!feof(arch_libros) && encontrado == false)
							{
								if(strcmp(Reg_Prestamos_L.codigo, Reg_Libros.codigo) == 0 && Reg_Prestamos_L.borrado == false)
								{
									encontrado = true;
									break;
								}
								
								if(encontrado == false)
									fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
							}
							
							if(encontrado == false)
							{
								system("cls");
								printf("No se encontro el codigo del prestamo ingresado.");
								printf("\n\n");
								system("pause");
																	
								fclose(arch_prestamos_l);
								Modulo_Prestamos_Libros();
							}
							else
							{
									system("cls");
									printf("Se ha encontrado el prestamo exitosamente...");
									printf("\n\n\tCodigo de prestamo: %s", Reg_Prestamos_L.codigo);
									printf("\n\tLibro: %s", Reg_Libros.titulo);
									printf("\n\tCantidad: %d", Reg_Prestamos_L.cantidad);
									printf("\n\tID Prestatario: %s", Reg_Prestamos_L.idprestatario);
									printf("\n\tApellido y nombre: %s", Reg_Prestamos_L.apeYNom);
									printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_L.fecha.dd, Reg_Prestamos_L.fecha.mm, Reg_Prestamos_L.fecha.aaaa);
									
									printf("\n\n");
									system("pause");
							}
								
							break;
						}
				case '2':
						{
							i = 0;
							
							encontrado = NULL;
							
							system("cls");
							printf("INGRESE CODIGO DEL LIBRO: ");
							_flushall();
							gets(codLibro);
							
							rewind(arch_prestamos_l);
							rewind(arch_libros);
							
							fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
							fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
							
							system("cls");
							
							while(!feof(arch_prestamos_l))
							{
								if(strcmp(codLibro, Reg_Libros.codigo) == 0 && Reg_Prestamos_L.borrado == false)
								{
									encontrado = true;
								
									printf("PRESTAMO [%d]:", i+1);
									printf("\n\tCodigo de prestamo: %s", Reg_Prestamos_L.codigo);
									printf("\n\tLibro: %s", Reg_Libros.titulo);
									printf("\n\tCantidad: %d", Reg_Prestamos_L.cantidad);
									printf("\n\tID Prestatario: %s", Reg_Prestamos_L.idprestatario);
									printf("\n\tApellido y nombre: %s", Reg_Prestamos_L.apeYNom);
									printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_L.fecha.dd, Reg_Prestamos_L.fecha.mm, Reg_Prestamos_L.fecha.aaaa);

									printf("\n\n");	
								}
								
								fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
								fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);	
							}
							
							if(encontrado == false)
							{
								system("cls");
								printf("No se encontro el codigo del prestamo ingresado.");
								printf("\n\n");
								system("pause");
																	
								fclose(arch_prestamos_l);
								Modulo_Prestamos_Libros();
							}	
							
							system("pause");
							break;
						}
				case '3':
						{
							i = 0;
							
							encontrado = NULL;
							
							system("cls");
							printf("INGRESE ID DEL PRESTATARIO: ");
							_flushall();
							gets(id);
							
							rewind(arch_prestamos_l);
							fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
							
							system("cls");
							
							encontrado = NULL;
							
							while(!feof(arch_prestamos_l))
							{
								if(strcmp(id, Reg_Prestamos_L.idprestatario) == 0 && Reg_Prestamos_L.borrado == false)
								{
									encontrado = true;
									
									printf("PRESTAMO [%d]:", i+1);
									printf("\n\tCodigo de prestamo: %s", Reg_Prestamos_L.codigo);
									
									encontrado_L = NULL;
									rewind(arch_libros);
									fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
									
									while(!feof(arch_libros) && encontrado_L == false)
									{
										if(strcmp(Reg_Prestamos_L.cod_libro, codLibro) == 0 && Reg_Prestamos_L.borrado == false)
										{
											encontrado_L = true;
											break;
										}
										
										if(encontrado_L == false)
											fread(&Reg_Libros, sizeof(Reg_Libros), 1, arch_libros);
									}
									
									printf("\n\tLibro: %s", Reg_Libros.titulo);
									printf("\n\tCantidad: %d", Reg_Prestamos_L.cantidad);
									printf("\n\tID Prestatario: %s", Reg_Prestamos_L.idprestatario);
									printf("\n\tApellido y nombre: %s", Reg_Prestamos_L.apeYNom);
									printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_L.fecha.dd, Reg_Prestamos_L.fecha.mm, Reg_Prestamos_L.fecha.aaaa);

									printf("\n\n");								
								}
								
								fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
							}
							
							if(encontrado == false)
							{
								system("cls");
								printf("No se encontro el id del prestatario ingresado.");
								printf("\n\n");
								system("pause");
																	
								fclose(arch_prestamos_l);
								Modulo_Prestamos_Libros();
							}	
							
							system("pause");
							break;
						}
				case '0':
						{
							fclose(arch_prestamos_l);
							Modulo_Prestamos_Libros();
							
							break;
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
			} // Cierre switch principal
		}
		while(true);
		
		
		fclose(arch_prestamos_l);
		system("pause");
	}						
}


void Modulo_Prestamos_Objetos_Listar()
{
	FILE *arch_prestamos_o;
	
	arch_prestamos_o = fopen("Prestamos_O.dat", "rb");
	
	if(arch_prestamos_o == NULL)
	{
		system("cls");
		printf("ERROR: El archivo 'Prestamos_O.dat' no existe.");
		printf("\n\n(Se debe registrar al menos un prestamo de un objeto).");
		printf("\n\n");
	}	
	else
	{
		Prestamos_Objetos Reg_Prestamos_O;
		
		int i = NULL;
		bool bandera = NULL;
		
		rewind(arch_prestamos_o);
		fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
		
		system("cls");
		while(!feof(arch_prestamos_o))
		{
			if( Reg_Prestamos_O.borrado == false )
			{
				bandera = true;
				
				printf("PRESTAMO [%d]\n", i+1);
			
				printf("\n\n\tCodigo de prestamo: %s", Reg_Prestamos_O.codigo);
				printf("\n\tObjeto: %s", Reg_Prestamos_O.objeto);
				printf("\n\tCantidad: %d", Reg_Prestamos_O.cantidad);
				printf("\n\tID Prestatario: %s", Reg_Prestamos_O.idprestatario);
				printf("\n\tApellido y nombre: %s", Reg_Prestamos_O.apeYNom);
				printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_O.fecha.dd, Reg_Prestamos_O.fecha.mm, Reg_Prestamos_O.fecha.aaaa);
				
				printf("\n\n------------------------------------------------------------------");
				
				printf("\n\n");
				i++;	
			}
				
			fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
		}
		
		if(bandera == false)
		{
			system("cls");
			printf("No se registro ningun prestamo...");
			printf("\n\n");
		}
	}
	
	system("pause");
}

void Modulo_Prestamos_Objetos_Nuevo()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
	FILE *arch_prestamos_o;
	FILE *arch_prestamos_l;		
	FILE *arch_objetos;
	FILE *arch_profesionales;
	FILE *arch_estudiantes;
	
	arch_prestamos_o = fopen("Prestamos_O.dat", "a+b");
	arch_objetos = fopen("Objetos.dat", "r+b");
	
	if(arch_prestamos_o == NULL)
	{
		system("cls");
		printf("ERROR. No se pudo crear el archivo Prestamos_O.dat");
		printf("\n\n");
		system("pause");	
	}
	else if(arch_objetos == NULL)
	{
		system("cls");
		printf("ERROR. El archivo 'Objetos.dat' no existe.");
		printf("\n\n(Tiene que cargar al menos un objeto).");
		printf("\n\n");
		system("pause");
	}
	/*else if(arch_profesionales == NULL)
	{
		system("cls");
		printf("ERROR. El archivo 'Profesionales.dat' no existe.");
		printf("\n\n(Tiene que cargar al menos un socio profesional).");
		printf("\n\n");
		system("pause");
	}
	else if(arch_estudiantes == NULL)
	{
		system("cls");
		printf("ERROR. El archivo 'Estudiantes.dat' no existe.");
		printf("\n\n(Tiene que cargar al menos un socio estudiante).");
		printf("\n\n");
		system("pause");
	}		
	*/
	
	// ----------------------------------------------------------
	
	else
	{	
		Prestamos_Objetos Reg_Prestamos_O;
		Prestamos_Libros Reg_Prestamos_L;
		Objetos Reg_Objetos;
		Profesionales Reg_Profesionales;
		Estudiantes Reg_Estudiantes;
		
		char opcion = NULL; // variable centinela para switch principal.
	
		int cantidad = NULL;
		int nuevaCantidad = NULL;
		int dd = NULL;
		int mm = NULL;
		int aaaa = NULL;
		
		string centinela = {NULL};
		string cent_socio = {NULL};
		string codigo = {NULL}; 
		string objeto = {NULL};
		string id = {NULL};
		string apeYNom = {NULL}; 
		string dni = {NULL};
		string telefono = {NULL};
		string turno = {NULL};
		string curso = {NULL};
			
		bool band_codigo = NULL;
		bool band_objeto = NULL;
		bool band_cantidad = NULL;
		bool band_id = NULL;
		bool band_apeYNom = NULL;	
		bool band_dni = NULL;
		bool band_telefono = NULL;
		
		bool profesional_existente = NULL;
		bool estudiante_existente = NULL;
		bool prestamo_existente = NULL;
		bool objeto_existente = NULL;
		bool socio_existente = NULL;
		bool dni_existente = NULL;
		bool cantidad_incorrecta = NULL;
		bool prestamo_socio = NULL;
		
		do
		{
			opcion = NULL;
			
			system("cls");
			
			printf("-- MODULO DE PRESTAMOS/NUEVO PRESTAMO --");
			
			printf("\n\n\t1- INGRESAR PRESTAMO");
			printf("\n\t2- GUARDAR PRESTAMO");
			
			printf("\n\n\t3- CERRAR APLICACION");
	
			printf("\n\nSELECCIONE UNA OPCION: ");
			opcion = Comprobacion_Tecla_Escape();
		
			switch( opcion )
			{
				case '1':
					
						//  ------------------------------------ CARGA DE DATOS ------------------------------------
							
						{
							
							//  -------------------------------------------- CODIGO DE PRESTAMO ---------------------------------------
								
								do
								{
									system("cls");
									
									prestamo_existente = NULL;
									printf("-- NUEVO PRESTAMO --");
									printf("\n\n(Si desea cancelar, escriba 'salir')");
					
									printf("\n\nDATOS DEL PRESTAMO: ");
										printf("\n\n\tCODIGO DE PRESTAMO: ");
										_flushall();
										gets(codigo);
										
										if(strcmp(codigo, "salir") == 0)
										{						
										 	fclose(arch_prestamos_o);
										 	fclose(arch_objetos);
										 	
											Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.								
										}
										
										//  --------------- COMPROBACION DE EXISTENCIA DEL CODIGO DEL PRESTAMO ---------------
											
										
											rewind(arch_prestamos_o);
											fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
											
											while(!feof(arch_prestamos_o) && prestamo_existente == false)
											{
												if(strcmp(codigo, Reg_Prestamos_O.codigo) == 0 && Reg_Prestamos_O.borrado == false)
												{
													prestamo_existente = true;
													break;
												}
												
												if(prestamo_existente == false)
													fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);			
											}
											
											/*arch_prestamos_l = fopen("Prestamos_L", "rb");
											
											if(arch_prestamos_l != NULL)
											{
												rewind(arch_prestamos_l);
												fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);
												
												while(!feof(arch_prestamos_l) && prestamo_existente == false )
												{
													if(strcmp(codigo, Reg_Prestamos_L.codigo) == 0 )
													{
														prestamo_existente = true;
														break;
													}
													
													if(prestamo_existente == false)
														fread(&Reg_Prestamos_L, sizeof(Reg_Prestamos_L), 1, arch_prestamos_l);			
												}												
											}*/
													
											if(prestamo_existente == true)
											{
												system("cls");
												printf("El codigo del prestamo ya existe. Ingrese nuevamente...");
												printf("\n\n");
												system("pause");
											}
											
								} // Cierre do-while del codigo del prestamo
								while(prestamo_existente == true);
								
								//  ----------------------------------------------------------------------------------
						
							//  ------------------------------------------------------------------------------------------------------------
							
							
							
							
							//  -------------------------------------------- OBJETO A PRESTAR --------------------------------------------
								
								do
								{
									objeto_existente = NULL;
									
									system("cls");
									printf("-- NUEVO PRESTAMO --");
									printf("\n\n(Si desea cancelar, escriba 'salir')");
					
									printf("\n\nDATOS DEL PRESTAMO: ");
									printf("\n\n\tOBJETO A PRESTAR: ");
							
									_flushall();
									gets(objeto);
									
									if(strcmp(objeto, "salir") == 0)
									{
										for(int i=0; i<strlen(objeto); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
											objeto[i] = NULL;
										
									 	fclose(arch_prestamos_o);
									 	fclose(arch_objetos);
									 	
										Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.								
									}
									
									//  --------------- COMPROBACION DE EXISTENCIA DEL OBJETO ---------------
									
										rewind(arch_objetos);
										fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
										
										while(!feof(arch_objetos) && objeto_existente == false)
										{
											if(strcmp(objeto, Reg_Objetos.nombre) == 0)
											{
												objeto_existente = true;
												break;
											}
											
											if(objeto_existente == false)
												fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);			
										}
										
										if(objeto_existente == false)
										{
											system("cls");
											printf("El objeto ingresado no existe. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
											system("cls");
										}
									}
									while(objeto_existente == false);
								
								//  ---------------------------------------------------------------------
								
							//  ----------------------------------------------------------------------------------------------------------
							
							
							
							
							//  -------------------------------------------- CANTIDAD A PRESTAR --------------------------------------------
								
								do
								{	
									objeto_existente = NULL;
									cantidad_incorrecta = NULL;
									
									do
									{
										system("cls");
										printf("-- NUEVO PRESTAMO --");
										printf("\n\n(Si desea cancelar, escriba '0')");
										printf("\n\nDATOS DEL PRESTAMO: ");
										printf("\n\tCANTIDAD: ");
										scanf("%d", &cantidad);
										
										if(cantidad == 0)
										{
										 	fclose(arch_prestamos_o);
										 	fclose(arch_objetos);
										 	
											Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.
										}
										if(cantidad <= 0)
										{
											system("cls");
											printf("La cantidad ingresada es incorrecta. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}				
									}
									while(cantidad <= 0);
									
									//  --------------- COMPROBACION DE CANTIDAD A PRESTAR CORRECTA ---------------
										
										rewind(arch_objetos);
										fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
										
										while(!feof(arch_objetos) && objeto_existente == false)
										{
											if( strcmp(objeto, Reg_Objetos.nombre) == 0 )
											{
												objeto_existente = true;
												break;
											}
											
											if( objeto_existente == false )
												fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
										}
										
										nuevaCantidad = Reg_Objetos.existencias - cantidad;
										
										if(nuevaCantidad < 0)
										{
											cantidad_incorrecta = true;
											
											system("cls");
											printf("La cantidad ingresada es incorrecta. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
										}
			
									}
									while(cantidad_incorrecta == true);
									
									Reg_Objetos.existencias = nuevaCantidad;
									
									/*printf("Reg_Objetos.Existencias vale: %d", Reg_Objetos.existencias);
									printf("\n\n");
									system("pause");*/
									
									/*fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
									fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);*/
																	
								//  ---------------------------------------------------------------------------
								
							//  ------------------------------------------------------------------------------------------------------------
							
							
							
							
							//  -------------------------------------------- CARGA DE ID DE PRESTATARIO --------------------------------------------
																	
										do
										{
											do
											{
												system("cls");
												printf("-- NUEVO PRESTAMO --");
												printf("\n\n(Si desea cancelar, escriba 'salir')");
												printf("\n\nDATOS DEL PRESTATARIO: ");
												printf("\n\tES SOCIO(SI|NO): ");
												_flushall();
												gets(cent_socio);
												strupr(cent_socio);
												
												if(strcmp(cent_socio, "SALIR") == 0)
												{
												 	fclose(arch_prestamos_o);
												 	fclose(arch_objetos);
												 	
													Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.								
												}
												
												if(strcmp(cent_socio, "SI") == 0)
												{
													prestamo_socio = NULL;
														
													arch_profesionales = fopen("Profesionales.dat", "r+b");
													arch_estudiantes = fopen("Estudiantes.dat", "r+b");
													
													if(arch_profesionales == NULL && arch_estudiantes == NULL)
													{
														system("cls");
														printf("ERROR: Los archivos 'Estudiantes.dat' y 'Socios.dat' no existen.");
														printf("\n\n(Se debe registrar al menos un socio.)");
														printf("\n\n");
														system("pause");
														
														profesional_existente = false;
														estudiante_existente = false;
													}	
												}
												else if(strcmp(cent_socio, "NO") == 0)		
												{
													break;
												}
												else if(strcmp(cent_socio, "SI") != 0 && strcmp(cent_socio, "NO") != 0)
												{
													system("cls");
													printf("Valor incorrecto. Ingrese nuevamente...");
													printf("\n\n");
													system("pause");	
												}
											}
											while( (strcmp(cent_socio, "SI") != 0 && strcmp(cent_socio, "NO") != 0) && (profesional_existente == false && estudiante_existente == false));
											
											if(strcmp(cent_socio, "SI") == 0)
											{
												prestamo_socio = NULL;
													
												do
												{
													profesional_existente = NULL;
													estudiante_existente = NULL;
													
													system("cls");
													printf("-- NUEVO PRESTAMO --");
													printf("\n\n(Si desea cancelar, escriba 'salir')");
													printf("\n\nDATOS DEL PRESTATARIO: ");
													printf("\n\tINGRESE ID DEL SOCIO: ");
													_flushall();
													gets(id);
													
													if(strcmp(id, "salir") == 0)	
													{
														for(int i=0; i<strlen(id); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
															id[i] = NULL;
														
													 	fclose(arch_prestamos_o);
													 	fclose(arch_objetos);
	
													 	
														Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.								
													}									
													
													//  --------------- COMPROBACION DE EXISTENCIA DE ID ---------------
													
															arch_profesionales = fopen("Profesionales.dat", "r+b");
															if(arch_profesionales != NULL)
															{
																rewind(arch_profesionales);	
																fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																
																while(!feof(arch_profesionales) && profesional_existente == false)
																{
																	if(strcmp(id, Reg_Profesionales.id) == 0)
																	{
																		profesional_existente = true;
																		break;
																	}
																	
																	if(profesional_existente == false)
																		fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																}																
															}
															
															arch_estudiantes = fopen("Estudiantes.dat", "r+b");
															if(arch_estudiantes != NULL)
															{
																rewind(arch_estudiantes);	
																fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																
																while(!feof(arch_estudiantes) && estudiante_existente == false)
																{
																	if(strcmp(id, Reg_Estudiantes.id) == 0)
																	{
																		estudiante_existente = true;
																		break;
																	}
																	
																	if( estudiante_existente == false)
																		fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																}																
															}
															
															if(profesional_existente == true)
															{
																strcpy(apeYNom, Reg_Profesionales.apeYNom);
																strcpy(dni, Reg_Profesionales.dni);
																strcpy(telefono, Reg_Profesionales.telefono);
															}
															else if(estudiante_existente == true)
															{
																strcpy(apeYNom, Reg_Estudiantes.apeYNom);
																strcpy(dni, Reg_Estudiantes.dni);
																strcpy(turno, Reg_Estudiantes.turno);
																strcpy(curso, Reg_Estudiantes.curso);																
															}
															
															if(estudiante_existente == false && profesional_existente == false)
															{
																system("cls");
																printf("No se encontro el ID de socio ingresado.");
																printf("\n\nIngrese nuevamente...");
																printf("\n\n");
																system("pause");
															}															
													}
													while(profesional_existente == false && estudiante_existente == false);	
												
											} // cierre else if si
											if(strcmp(cent_socio, "NO") == 0) // SI no es socio, se carga como particular.
											{
												//  -------------------------------------------- CARGA DE ID DEL PRESTATARIO --------------------------------------------
												do
												{
													socio_existente = NULL;
													
													system("cls");
													printf("-- NUEVO PRESTAMO --");
													printf("\n\n(Si desea cancelar, escriba 'salir')");
													printf("\n\nDATOS DEL PRESTATARIO: ");
													printf("\n\tID DE PRESTATARIO: ");
													_flushall();
													gets(id);
													
													if(strcmp(id, "salir") == 0)
													{
														for(int i=0; i<strlen(id); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
															id[i] = NULL;
														
													 	fclose(arch_prestamos_o);
													 	fclose(arch_objetos);
													 	
														Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.								
													}									
													
													//  --------------- COMPROBACION DE EXISTENCIA DE ID ---------------
															
															arch_profesionales = fopen("Profesionales.dat", "rb");
															arch_estudiantes = fopen("Estudiantes.dat", "rb");
															
															if(arch_profesionales != NULL)
															{																
																rewind(arch_profesionales);
																fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																
																while(!feof(arch_profesionales) && socio_existente == false)
																{
																	if(strcmp(id, Reg_Profesionales.id) == 0)
																	{
																		socio_existente = true;
																		break;
																	}
																	
																	if(socio_existente == false)
																		fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																}
															}
															
															if(arch_estudiantes != NULL)
															{																
																rewind(arch_estudiantes);
																fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																
																while(!feof(arch_estudiantes) && socio_existente == false)
																{
																	if(strcmp(id, Reg_Estudiantes.id) == 0)
																	{
																		socio_existente = true;
																		break;
																	}
																	
																	if(socio_existente == false)
																		fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
																}
															}
															
															rewind(arch_prestamos_o);
															fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
															
															while(!feof(arch_prestamos_o) && socio_existente == false)
															{
																if(strcmp(id, Reg_Prestamos_O.idprestatario) == 0 && Reg_Prestamos_O.borrado == false) 
																{
																	socio_existente = true;
																	break;
																}
																
																if(socio_existente == false)
																	fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
															}
																											
															if(socio_existente == true)
															{
																system("cls");
																printf("El ID ingresado pertenece a un socio. Ingrese nuevamente...");
																printf("\n\n");
																system("pause");
																system("cls");								
															}
													}
													while(socio_existente == true);		
														
													system("cls");
													printf("-- NUEVO PRESTAMO --");
													printf("\n\n(Si desea cancelar, escriba 'salir')");
													printf("\nDATOS DEL PRESTATARIO: ");
													
														printf("\n\n\tAPELLIDO Y NOMBRE: ");
													_flushall();
													gets(apeYNom);
													
													if(strcmp(apeYNom, "salir") == 0)
													{
														for(int i=0; i<strlen(apeYNom); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
															apeYNom[i] = NULL;
														
													 	fclose(arch_prestamos_o);
													 	fclose(arch_objetos);

														Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.								
													}					
												
				
											//  -------------------------------------------- CARGA DE DNI DEL PRESTATARIO --------------------------------------------
												
												do	
												{
													dni_existente = NULL;
													
													system("cls");
													printf("-- NUEVO PRESTAMO --");
													printf("\n\n(Si desea cancelar, escriba 'salir')");
													printf("\nDATOS DEL PRESTATARIO: ");
													
														printf("\n\tDNI: ");
													_flushall();
													gets(dni);
													
														if(strcmp(dni, "salir") == 0)
														{
															for(int i=0; i<strlen(dni); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
																dni[i] = NULL;
															
														 	fclose(arch_prestamos_o);
														 	fclose(arch_objetos);
														 	
															Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.								
														}
													
														//  --------------- COMPROBACION DE EXISTENCIA DE DNI ---------------
															
															arch_profesionales = fopen("Profesionales.dat", "rb");				
															if(arch_profesionales != NULL)
															{
																rewind(arch_profesionales);
																fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																
																while(!feof(arch_profesionales) && dni_existente == false)
																{
																	if(strcmp(dni, Reg_Profesionales.dni) == 0)
																	{
																		dni_existente = true;
																		break;
																	}
																	
																	if(dni_existente == false)
																		fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																}	
															}
															
															arch_estudiantes = fopen("Estudiantes.dat", "rb");
															if(arch_estudiantes != NULL)
															{
																rewind(arch_profesionales);
																fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																
																while(!feof(arch_profesionales) && dni_existente == false)
																{
																	if(strcmp(dni, Reg_Profesionales.dni) == 0)
																	{
																		dni_existente = true;
																		break;
																	}
																	
																	if(dni_existente == false)
																		fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
																}																
															}
															
															rewind(arch_prestamos_o);
															fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
															
															while(!feof(arch_prestamos_o) && dni_existente == false)
															{
																if(strcmp(dni, Reg_Prestamos_O.dni) == 0 && Reg_Prestamos_O.borrado == false)
																{
																	dni_existente = true;
																	break;
																}
																
																if(dni_existente == false)
																	fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
															}
																																									
															if(dni_existente == true)
															{
																system("cls");
																printf("El DNI ingresado pertenece a un socio. Ingrese nuevamente...");
																printf("\n\n");
																system("pause");
																system("cls");								
															}								
													}
													while(dni_existente == true);
												
												//  -----------------------------------------------------------------
											
											//  ----------------------------------------------------------------------------------------------------------------------							
												
												system("cls");
												printf("-- NUEVO PRESTAMO --");
												printf("\n\n(Si desea cancelar, escriba 'salir')");
												printf("\n\nDATOS DEL PRESTATARIO: ");
												
												printf("\n\tTELEFONO: ");
												_flushall();
												gets(telefono);	
												
												if(strcmp(telefono, "salir") == 0)
												{
													for(int i=0; i<strlen(telefono); i++) // Cuando la cadena es igual a "Salir", entonces no se tiene que cargar el dato en la variable. 
														telefono[i] = NULL;
													
												 	fclose(arch_prestamos_o);
												 	fclose(arch_objetos);
												 	
													Modulo_Prestamos_Objetos_Nuevo(); // Salida de la carga de datos.								
												}															
					
								//  --------------------------------------------------------------------------------------------------------------------														
														
											} // Cierre else if cent_socio == NO
											else if(strcmp(cent_socio, "SI") != 0 && strcmp(cent_socio, "NO") != 0)
											{
												system("cls");
												printf("Valor incorrecto. Ingrese nuevamente...");
												printf("\n\n");
												system("pause");
											} //cierre else if no-si											
										}
										while (strcmp(cent_socio, "SI") != 0 && strcmp(cent_socio, "NO") != 0);
			
																		
												//  ----------------------------------------------------------------	
																						
											//  -------------------------------------------------------------------------------------------------------------------	
									break;
							
						//  ----------------------------------------------------------------------------------------
																
						}
				case '2':
						{
							// ------ COMPROBACION DE CAMPOS VACIOS ------
							
								if(strlen(codigo) != 0)	
									band_codigo = true;
										
								if(strlen(objeto) != 0)	
									band_objeto = true;
								
								if(cantidad != 0)	
									band_cantidad = true;
																	
								if(strlen(id) != 0)	
									band_id = true;
																	
								if(strlen(apeYNom) != 0)	
									band_apeYNom = true;
								
								if(strlen(dni) != 0)
									band_dni = true;
																																				
								if(strlen(telefono) != 0)
									band_telefono = true;
						
							// -------------------------------------------
							
							if (estudiante_existente == true)
							{
								do
								{
									system("cls");
									
									printf("-- DATOS DEL PRESTAMO --");
									printf("\n\tCodigo de prestamo: %s", codigo);
									printf("\n\tObjeto: %s", objeto);
									printf("\n\tCantidad: %d", cantidad);
									
									printf("\n\n-- DATOS DEL PRESTATARIO --");
									printf("\n\tID: %s", id);
									printf("\n\tApellido y Nombre: %s", apeYNom);
									printf("\n\tDNI: %s", dni);
									printf("\n\tTurno: %s", turno);
									printf("\n\tCurso: %s", curso);
									
									printf("\n\nDESEA CARGAR EL PRESTAMO EN LA BASE DE DATOS(SI|NO): ");
									_flushall();
									gets(centinela);
									strupr(centinela);
								
									if(strcmp(centinela, "SI") == 0)									
									{
										strcpy(Reg_Prestamos_O.codigo, codigo);
										strcpy(Reg_Prestamos_O.objeto, objeto);	
										Reg_Prestamos_O.cantidad = cantidad;
										
										objeto_existente = NULL;
										rewind(arch_objetos);
										fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
										
										while(!feof(arch_objetos) && objeto_existente == false)
										{
											if(strcmp(objeto, Reg_Objetos.nombre) == 0)
											{
												objeto_existente = true;
												break;
											}
											
											if(objeto_existente == false)
												fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
										}
										
										nuevaCantidad = Reg_Objetos.existencias - cantidad;
										Reg_Objetos.existencias = nuevaCantidad;
									
										/*printf("Reg_Objetos.Existencias vale: %d", Reg_Objetos.existencias);
										printf("\n\n");
										system("pause");*/
										
										Reg_Objetos.prestado = Reg_Objetos.prestado + 1;
										
										fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
										fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
										
										
										estudiante_existente = NULL;
										arch_estudiantes = fopen("Estudiantes.dat", "r+b");
										if(arch_estudiantes != NULL)
										{
											rewind(arch_estudiantes);	
											fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
											
											while(!feof(arch_estudiantes) && estudiante_existente == false)
											{
												if(strcmp(id, Reg_Estudiantes.id) == 0)
												{
													estudiante_existente = true;
													break;
												}
												
												if( estudiante_existente == false)
													fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
											}																
										}
										
										if(estudiante_existente == true)
										{
											Reg_Estudiantes.prestamo = Reg_Estudiantes.prestamo + 1;
											
											fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);
											fwrite(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);																
										}
																						
										strcpy(Reg_Prestamos_O.idprestatario, id);
										strcpy(Reg_Prestamos_O.apeYNom, apeYNom);
										strcpy(Reg_Prestamos_O.dni, dni);
										strcpy(Reg_Prestamos_O.telefono, telefono);
										
										dd = Fecha_Dia();
										mm = Fecha_Mes();
										aaaa = Fecha_Anio();
										aaaa = aaaa + 1900;
										
										Reg_Prestamos_O.fecha.dd = dd;
										Reg_Prestamos_O.fecha.mm = mm;
										Reg_Prestamos_O.fecha.aaaa = aaaa;
										
										Reg_Prestamos_O.borrado = NULL;
										
										fseek(arch_prestamos_o, 2, SEEK_END);
										fwrite(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);	
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(codigo); i++)
												codigo[i] = NULL;
						
											for(int i=0; i<strlen(objeto); i++)
												objeto[i] = NULL;
						
											for(int i=0; i<strlen(id); i++)
												id[i] = NULL;
						
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
		
											for(int i=0; i<strlen(turno); i++)
												turno[i] = NULL;	
												
											for(int i=0; i<strlen(curso); i++)
												curso[i] = NULL;
												
											cantidad = NULL;
											dd = NULL;
											mm = NULL;
											aaaa = NULL;												
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------
										
										system("cls");
										printf("El prestamo ha sido cargado exitosamente...");
										printf("\n\n");
										system("pause");
										system("cls");	
								
									}	
									else if(strcmp(centinela, "NO") == 0)
									{
										system("cls");
										printf("No se ha cargado el prestamo...");
										printf("\n\n");
										system("pause");
									}
									else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");
										system("cls");
									}
								}
								while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);				
								
							}						
						
							
							if(profesional_existente == true)
							{
								do
								{
									system("cls");
									
									printf("-- DATOS DEL PRESTAMO --");
									printf("\n\tCodigo de prestamo: %s", codigo);
									printf("\n\tObjeto: %s", objeto);
									printf("\n\tCantidad: %d", cantidad);
									
									printf("\n\n-- DATOS DEL PRESTATARIO --");
									printf("\n\tID: %s", id);
									printf("\n\tApellido y Nombre: %s", apeYNom);
									printf("\n\tDNI: %s", dni);
									printf("\n\tTelefono: %s", telefono);
									
									printf("\n\nDESEA CARGAR EL PRESTAMO EN LA BASE DE DATOS(SI|NO): ");
									_flushall();
									gets(centinela);
									strupr(centinela);
								
									if(strcmp(centinela, "SI") == 0)									
									{
										strcpy(Reg_Prestamos_O.codigo, codigo);
										strcpy(Reg_Prestamos_O.objeto, objeto);	
										Reg_Prestamos_O.cantidad = cantidad;
										
										strcpy(Reg_Prestamos_O.idprestatario, id);
										strcpy(Reg_Prestamos_O.apeYNom, apeYNom);
										strcpy(Reg_Prestamos_O.dni, dni);
										strcpy(Reg_Prestamos_O.telefono, telefono);
										
										objeto_existente = NULL;
										rewind(arch_objetos);
										fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
										
										while(!feof(arch_objetos) && objeto_existente == false)
										{
											if(strcmp(objeto, Reg_Objetos.nombre) == 0)
											{
												objeto_existente = true;
												break;
											}
											
											if(objeto_existente == false)
												fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
										}
										
										nuevaCantidad = Reg_Objetos.existencias - cantidad;
										Reg_Objetos.existencias = nuevaCantidad;
									
									/*	printf("Reg_Objetos.Existencias vale: %d", Reg_Objetos.existencias);
										printf("\n\n");
										system("pause");*/
										
										Reg_Objetos.prestado = Reg_Objetos.prestado + 1;
										
										fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
										fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
										
										profesional_existente = NULL;
										arch_profesionales = fopen("Profesionales.dat", "r+b");
										if(arch_profesionales != NULL)
										{
											rewind(arch_profesionales);	
											fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											
											while(!feof(arch_profesionales) && profesional_existente == false)
											{
												if(strcmp(id, Reg_Profesionales.id) == 0)
												{
													estudiante_existente = true;
													break;
												}
												
												if( profesional_existente == false)
													fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
											}																
										}
										
										if(profesional_existente == true)
										{
											Reg_Profesionales.prestamo = Reg_Profesionales.prestamo + 1;
											
											fseek(arch_profesionales, (long)-sizeof(Reg_Profesionales), SEEK_CUR);
											fwrite(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);																
										}
										
										dd = Fecha_Dia();
										mm = Fecha_Mes();
										aaaa = Fecha_Anio();
										aaaa = aaaa + 1900;
										
										Reg_Prestamos_O.fecha.dd = dd;
										Reg_Prestamos_O.fecha.mm = mm;
										Reg_Prestamos_O.fecha.aaaa = aaaa;
										
										Reg_Prestamos_O.borrado = NULL;
										
										fseek(arch_prestamos_o, 2, SEEK_END);
										fwrite(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);	
										
										// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
										
											for(int i=0; i<strlen(codigo); i++)
												codigo[i] = NULL;
						
											for(int i=0; i<strlen(objeto); i++)
												objeto[i] = NULL;
						
											for(int i=0; i<strlen(id); i++)
												id[i] = NULL;
						
											for(int i=0; i<strlen(apeYNom); i++)
												apeYNom[i] = NULL;
												
											for(int i=0; i<strlen(dni); i++)
												dni[i] = NULL;
		
											for(int i=0; i<strlen(telefono); i++)
												telefono[i] = NULL;	
												
											cantidad = NULL;
											dd = NULL;
											mm = NULL;
											aaaa = NULL;												
											
											band_codigo = NULL;
											band_objeto = NULL;
											band_cantidad = NULL;
																													
											band_id = NULL;																					 
											band_apeYNom = NULL;
											band_dni = NULL;
											band_telefono = NULL;
											
											// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
											
										// -------------------------------------------------------------
										
										system("cls");
										printf("El prestamo ha sido cargado exitosamente...");
										printf("\n\n");
										system("pause");
										system("cls");
									}
									else if(strcmp(centinela, "NO") == 0)
									{
										system("cls");
										printf("No se ha cargado el prestamo...");
										printf("\n\n");
										system("pause");
									}
									else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
									{
										system("cls");
										printf("Valor incorrecto. Ingrese nuevamente...");
										printf("\n\n");
										system("pause");
										system("cls");
									}
								}	
								while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);																	
							}
							
							if(estudiante_existente == false && profesional_existente == false)
							{
								if(band_codigo == true && band_objeto == true && band_cantidad == true && band_id == true && band_apeYNom == true && band_dni == true && band_telefono == true)
								{
									do
									{
										system("cls");
										
										printf("-- DATOS DEL PRESTAMO --");
										printf("\n\tCodigo de prestamo: %s", codigo);
										printf("\n\tObjeto: %s", objeto);
										printf("\n\tCantidad: %d", cantidad);
										
										printf("\n\n-- DATOS DEL PRESTATARIO --");
										printf("\n\tID: %s", id);
										printf("\n\tApellido y Nombre: %s", apeYNom);
										printf("\n\tDNI: %s", dni);
										printf("\n\tTelefono: %s", telefono);
										
										printf("\n\nDESEA CARGAR EL PRESTAMO EN LA BASE DE DATOS(SI|NO): ");
										_flushall();
										gets(centinela);
										strupr(centinela);
									
										if(strcmp(centinela, "SI") == 0)									
										{
											strcpy(Reg_Prestamos_O.codigo, codigo);
											strcpy(Reg_Prestamos_O.objeto, objeto);	
											Reg_Prestamos_O.cantidad = cantidad;
											
											strcpy(Reg_Prestamos_O.idprestatario, id);
											strcpy(Reg_Prestamos_O.apeYNom, apeYNom);
											strcpy(Reg_Prestamos_O.dni, dni);
											strcpy(Reg_Prestamos_O.telefono, telefono);
											
											objeto_existente = NULL;
											rewind(arch_objetos);
											fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
											
											while(!feof(arch_objetos) && objeto_existente == false)
											{
												if(strcmp(objeto, Reg_Objetos.nombre) == 0)
												{
													objeto_existente = true;
													break;
												}
												
												if(objeto_existente == false)
													fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
											}
											
											nuevaCantidad = Reg_Objetos.existencias - cantidad;
											Reg_Objetos.existencias = nuevaCantidad;
										
											/*printf("Reg_Objetos.Existencias vale: %d", Reg_Objetos.existencias);
											printf("\n\n");
											system("pause");*/
											
											Reg_Objetos.prestado = Reg_Objetos.prestado + 1;
											
											fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);												
											fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);											
											
											dd = Fecha_Dia();
											mm = Fecha_Mes();
											aaaa = Fecha_Anio();
											aaaa = aaaa + 1900;
											
											Reg_Prestamos_O.fecha.dd = dd;
											Reg_Prestamos_O.fecha.mm = mm;
											Reg_Prestamos_O.fecha.aaaa = aaaa;
											
											Reg_Prestamos_O.borrado = NULL;
											
											fseek(arch_prestamos_o, 2, SEEK_END);
											fwrite(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);	
											
											// -------- REVALORIZACION DE VARIABLES A UN VALOR NULO -------- 
											
												for(int i=0; i<strlen(codigo); i++)
													codigo[i] = NULL;
							
												for(int i=0; i<strlen(objeto); i++)
													objeto[i] = NULL;
							
												for(int i=0; i<strlen(id); i++)
													id[i] = NULL;
							
												for(int i=0; i<strlen(apeYNom); i++)
													apeYNom[i] = NULL;
													
												for(int i=0; i<strlen(dni); i++)
													dni[i] = NULL;
			
												for(int i=0; i<strlen(telefono); i++)
													telefono[i] = NULL;	
													
												cantidad = NULL;
												dd = NULL;
												mm = NULL;
												aaaa = NULL;												
												
												band_codigo = NULL;
												band_objeto = NULL;
												band_cantidad = NULL;
																														
												band_id = NULL;																					 
												band_apeYNom = NULL;
												band_dni = NULL;
												band_telefono = NULL;
												
												// Esto se hace porque al retornar hacia el switch principal, los campos quedan con los datos anteriormente cargados.
												
											// -------------------------------------------------------------
											
											system("cls");
											printf("El prestamo ha sido cargado exitosamente...");
											printf("\n\n");
											system("pause");
											system("cls");											
										}
										else if(strcmp(centinela, "NO") == 0)
										{
											system("cls");
											printf("No se ha cargado el prestamo...");
											printf("\n\n");
											system("pause");
										}
										else if(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0)
										{
											system("cls");
											printf("Valor incorrecto. Ingrese nuevamente...");
											printf("\n\n");
											system("pause");
											system("cls");
										}
									}
									while(strcmp(centinela, "SI") != 0 && strcmp(centinela, "NO") != 0);
								}
								else
								{
									system("cls");
									printf("No es posible guardar el prestamo. Hay campos sin completar...");
									printf("\n\n");
									system("pause");
								}
								
									
							} // Cierre if -> != profesor y != estudiante
							
							break;
						}
				case '3':
						{
						 	fclose(arch_prestamos_o);
						 	fclose(arch_objetos);
							Salir();
						}
				case '0':
						{
						 	fclose(arch_prestamos_o);
						 	fclose(arch_objetos);
						 	Modulo_Prestamos_Objetos();
							break;
						}
				default:
						{
						 	system("cls");
						 	printf("Opcion incorrecta. Ingrese nuevamente...");
						 	printf("\n\n");
						 	system("pause");
							break;
						}	
						 				 					 					 				 	
				} // cierre switch 
		}
		while(true);			
	}
						
}

void Modulo_Prestamos_Objetos_Editar()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_prestamos_o;
		FILE *arch_objetos;
		
		arch_prestamos_o = fopen("Prestamos_O.dat", "r+b");
		arch_objetos = fopen("Objetos.dat", "r+b");
			
		if(arch_prestamos_o == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo 'Prestamos_O.dat'");
			printf("\n\n(No hay ningun prestamo de objetos en la base de datos)");
			printf("\n\n");
			system("pause");
			
			Modulo_Prestamos_Objetos();
		}
		if(arch_objetos == NULL)
		{
			system("cls");
			printf("ERROR. NO se pudo abrir el archivo 'Objetos.dat'");
			printf("\n\n(No hay ningun prestamo de objetos en la base de datos)");
			printf("\n\n");
			system("pause");
			
			Modulo_Prestamos_Objetos();
		}
	
	// ----------------------------------------------------------	
	
	else
	{
		Prestamos_Objetos Reg_Prestamos_O;
		Objetos Reg_Objetos;
		
		char opcion = NULL;
		int cantidad = NULL;
		int aux_cantidad = NULL;
		int nuevaCantidad = NULL;
		
		string target = {NULL};
		string codigo = {NULL};
		string auxiliar = {NULL};
				
		bool bandera = NULL;
		bool band_codigo = NULL;	
		bool band_cantidad = NULL;
		bool objeto_encontrado = NULL;
		
		
		// ------------ BUSQUEDA DEL ID DEL PROFESIONAL EN EL ARCHIVO ------------
		do
		{
			bandera = NULL;
			
			system("cls");
			printf("-- EDICION DEL PRESTAMO --");
			printf("\n\n(Si desea cancelar, escriba 'salir').");
			printf("\n\n\tINGRESE EL CODIGO DEL PRESTAMO A EDITAR: ");
			_flushall();
			gets(target);
			
			if(strcmp(target, "salir") == 0)
			{
				fclose(arch_prestamos_o);
				
				Modulo_Prestamos_Objetos();
			}
			
			rewind(arch_prestamos_o);
			fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
			
			while(!feof(arch_prestamos_o) && bandera == false)
			{
				if( strcmp(target, Reg_Prestamos_O.codigo) == 0 && Reg_Prestamos_O.borrado == false)
				{
					bandera = true;
					fseek(arch_prestamos_o, (long)-sizeof(Reg_Prestamos_O), SEEK_CUR);
				}
				
				if(bandera == false)
					fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);					
			}			
				
			if(bandera == true)
			{
				system("cls");
				printf("Se encontro el prestamo exitosamente...");
				printf("\n\n");
				system("pause");
			}			
			if(bandera == false)
			{
				system("cls");
				printf("No se encontro el codigo del prestamo ingresado. Ingrese nuevamente...");
				printf("\n\n");
				system("pause");			
			}
			
		}
		while(bandera == false);
		// ---------------------------------------------------------------------		
		
				do
				{
					opcion = NULL;
					
					system("cls");
					printf("-- MODULO DE PRESTAMOS/OBJETOS/EDITAR PRESTAMO --");
					
					// ------------------ MOSTRAR PROFESIONAL INGRESADO ------------------
							
							// Luego de ingresar el codigo en el case 4, si el codigo es incorrecto, 
							//se tiene que volver a recorrer el archivo para volver a coincidir con el target anterior.
							
							arch_prestamos_o = fopen("Prestamos_O.dat", "r+b");
							
							rewind(arch_prestamos_o);
							fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
							
							bandera = NULL;
							
							while(!feof(arch_prestamos_o) && bandera == false)
							{
								if( strcmp(target, Reg_Prestamos_O.codigo) == 0 && Reg_Prestamos_O.borrado == false )
								{
									bandera = true;
									fseek(arch_prestamos_o, (long)-sizeof(Reg_Prestamos_O), SEEK_CUR);
								}
								
								if(bandera == false)
								{
									fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);					
								}
					
							}
						
							printf("\n\n\tCodigo de prestamo: %s", Reg_Prestamos_O.codigo);
							printf("\n\tObjeto: %s", Reg_Prestamos_O.objeto);
							printf("\n\tCantidad: %d", Reg_Prestamos_O.cantidad);
							printf("\n\tID Prestatario: %s", Reg_Prestamos_O.idprestatario);
							printf("\n\tApellido y nombre: %s", Reg_Prestamos_O.apeYNom);
							printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_O.fecha.dd, Reg_Prestamos_O.fecha.mm, Reg_Prestamos_O.fecha.aaaa);
							
						// -------------------------------------------------------------
							
						printf("\n\n   1- EDITAR CODIGO");
								if( strlen(codigo) != 0 ) // Comprobación del valor de la variable para imprimir en pantalla.
									printf(" (Edicion actual: %s)", codigo); 			
						
						printf("\n   2- EDITAR CANTIDAD");
								if (cantidad != 0) 
									printf(" (Edicion actual: %d)", cantidad); 							
																																				
						printf("\n\n   3- GUARDAR CAMBIOS");
						printf("\n   4- INGRESAR OTRO ID");
						
						printf("\n\n   5- CERRAR APLICACION");
						
						printf("\n\nSELECCIONE UNA OPCION: ");
						opcion = Comprobacion_Tecla_Escape();
						
						switch(opcion)
						{
							case '1':
									{
										system("cls");
										printf("INGRESE CODIGO: ");
										_flushall();
										gets(codigo);
																
										break;
									}
							case '2':
									{
										system("cls");
										printf("INGRESE CANTIDAD: ");
										scanf("%d", &cantidad);
										
										arch_objetos = fopen("Objetos.dat", "r+b");
											
										if(arch_objetos != NULL)
										{
											objeto_encontrado = NULL;
											rewind(arch_objetos);
											fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
											
											while(!feof(arch_objetos) && objeto_encontrado == false)
											{
												if(strcmp(Reg_Prestamos_O.objeto, Reg_Objetos.nombre) == 0 && Reg_Objetos.borrado == false)
												{
													objeto_encontrado = true;
													break;
												}
												
												if(objeto_encontrado == false)
													fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
											}
											
											printf("Cantidad actual del objetos: %d\n\n", Reg_Objetos.existencias);
											system("pause");
											
											printf("Cantidad actual del prestamo: %d\n\n", Reg_Prestamos_O.cantidad);
											system("pause");
											
											nuevaCantidad = Reg_Objetos.existencias + Reg_Prestamos_O.cantidad;
											
											printf("Nueva cantidad del objetos: %d\n\n", nuevaCantidad);
											system("pause");
											
											Reg_Objetos.existencias = nuevaCantidad - cantidad;
											aux_cantidad = Reg_Objetos.existencias;
											
											printf("Nueva cantidad del objetos: %d\n\n", Reg_Objetos.existencias);
											system("pause");
											
											if(nuevaCantidad < 0)
											{
												system("cls");
												printf("Cantindad incorrecta.");
												printf("\n\n");
												system("pause");
												cantidad = NULL;
											}
										}
																							
										break;
									}																														
							case '3':
									{
										// ------ CARGA DE DATOS EN EL REGISTRO ------
										
											band_codigo = NULL;	
											band_cantidad = NULL;
											
											if( strlen(codigo) != 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
											{
												strcpy(Reg_Prestamos_O.codigo, codigo);
												band_codigo = true;					
												
												printf("%s", Reg_Prestamos_O.codigo);
												printf("\n\n");
												system("pause");					
											}
											
											if( cantidad > 0 ) // Si el valor de la variable es nulo, entonces no se carga al campo del registro.
											{
												band_cantidad = true;
												Reg_Prestamos_O.cantidad = cantidad;
											}
																																																						
										// -------------------------------------------	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
										
										// ----------------------------------------------- CARGA DEL REGISTRO EN EL ARCHIVO -----------------------------------------------
										
											if(band_codigo == true || band_cantidad == true)
											{
													if(band_cantidad == true)
													{
														arch_objetos = fopen("Objetos.dat", "r+b");
														
														if(arch_objetos != NULL)
														{
															objeto_encontrado = NULL;
															rewind(arch_objetos);
															fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
															
															while(!feof(arch_objetos) && objeto_encontrado == false)
															{
																if(strcmp(Reg_Prestamos_O.objeto, Reg_Objetos.nombre) == 0 && Reg_Objetos.borrado == false)
																{
																	objeto_encontrado = true;															
																	fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR);
																	break;
																}
																
																if(objeto_encontrado == false)
																	fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
															}
															
															Reg_Objetos.existencias = aux_cantidad;
															
															fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
															fclose(arch_objetos);
														}
													}
													
													fwrite(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
																									
													system("cls");
													printf("Se edito el prestamo exitosamente...");
													printf("\n\n");
													system("pause");
													system("cls");
													
													for(int i=0; i<strlen(codigo); i++) // Revalorizacion de cadenas a un valor nulo.
														codigo[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
													
													cantidad = NULL;		
								
											}
											
											if(band_codigo == false && band_cantidad == false)
											{
												system("cls");
												printf("No se edito ningun campo del profesional ingresado...");	
												printf("\n\n");
												system("pause");
												system("cls");
											}								
										// --------------------------------------------------------------------------------------------------------------------------------
											
										break;
									}							
							case '4':
									{
										strcpy(auxiliar, target); // Se declara una variable auxiliar para tomar el valor del target anterior. 
										 						  // Esto se hace porque cuando el target ingresado es incorrecto, el puntero
																  // se tiene que volver a posicionar en el target anterior. 
																  
										system("cls");
										printf("INGRESE CODIGO DE PRESTAMO A EDITAR: ");
										_flushall();
										gets(target);
										
										// --- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO ---
											 											
											for(int i=0; i<strlen(codigo); i++) // Revalorizacion de cadenas a un valor nulo.
												codigo[i] = NULL;				// Esto se hace para limpiar los campos (Actual: ---) una vez editado el objeto.
											
											cantidad = NULL;
											
										// --------------------------------------------------
													
													
										// ------------ BUSQUEDA DEL ID DEL ESTUDIANTE EN EL ARCHIVO ------------
														
											bandera = NULL;
											
											rewind(arch_prestamos_o);
											fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
											
											while(!feof(arch_prestamos_o) && bandera == false)
											{
												if( strcmp(target, Reg_Prestamos_O.codigo) == 0 && Reg_Prestamos_O.borrado == false )
												{
													bandera = true;
													fseek(arch_prestamos_o, (long)-sizeof(Reg_Prestamos_O), SEEK_CUR);
												}
												
												if(bandera == false)
													fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);					
									
											}
																			
										// ---------------------------------------------------------------------
		
										if(bandera == true)
										{
											system("cls");
											printf("Se encontro el prestamo exitosamente...");
											printf("\n\n");
											system("pause");
											system("cls");
											
											// -- REVALORIZACIÓN DE VARIABLES A UN VALOR NULO --										
										
												for(int i=0; i<strlen(codigo); i++) 
													codigo[i] = NULL;			
												
												cantidad = NULL;
											// -------------------------------------------------
										}
										else
										{
											system("cls");
											printf("No se encontro el codigo del prestamo ingresado...");
											printf("\n\n");
											system("pause");
											system("cls");
											
											fclose(arch_prestamos_o);	
											strcpy(target, auxiliar); // La variable "target" toma el valor del auxiliar, que es del target anterior.	
										}
																	
										break;	
									}						
							case '0':
									{
										fclose(arch_prestamos_o);
										Modulo_Prestamos_Objetos();	
										break;
									}
							case '7':
									{
										fclose(arch_prestamos_o);
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
					while(true);					
	}
			
}

void Modulo_Prestamos_Objetos_Completar()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
	FILE *arch_prestamos_o;
	FILE *arch_objetos;
	FILE *arch_estudiantes;
	FILE *arch_profesionales;
	
	arch_prestamos_o = fopen("Prestamos_O.dat", "r+b");
	
	if(arch_prestamos_o == NULL)
	{
		system("cls");
		printf("ERROR: El archivo 'Prestamos_O.dat' no existe");
		printf("\n\n(Debe registrar al menos un prestamo de objeto).");
		printf("\n\n");
		system("pause");
	}

	// ----------------------------------------------------------
	else
	{
		Prestamos_Objetos Reg_Prestamos_O;
		Objetos Reg_Objetos;
		Estudiantes Reg_Estudiantes;
		Profesionales Reg_Profesionales;
		
		string target = {NULL};
		string centinela = {NULL};
		string cpy_target = {NULL};
		string cpy_centinela = {NULL};
		
		bool band_encontrado = NULL;
		bool bandera = NULL;
		bool band_estudiante = NULL;
		bool band_profesional = NULL;
		
		do
		{
			band_encontrado = NULL;	
			
			system("cls");
			printf("-- COMPLETAR UN PRESTAMO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tINGRESE EL CODIGO DEL PRESTAMO A COMPLETAR: ");		
			_flushall();
			gets(target);
			
			strcpy(cpy_target, target);
			
			if(strcmp(strupr(cpy_target), "SALIR") == 0) 
			{
				fclose(arch_prestamos_o);
				Modulo_Prestamos_Objetos();
			}
			
			rewind(arch_prestamos_o);
			fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
			
			while(!feof(arch_prestamos_o) && band_encontrado == false)
			{
				if(strcmp(target, Reg_Prestamos_O.codigo) == 0 && Reg_Prestamos_O.borrado == false)
				{
					band_encontrado = true;
					fseek(arch_prestamos_o, (long)-sizeof(Reg_Prestamos_O), SEEK_CUR);
					break;
				}
				
				if(band_encontrado == false)
					fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
			}
			
			if(band_encontrado == false)
			{
				system("cls");
				printf("No se encontro el codigo del prestamo. Ingrese nuevamente...");
				printf("\n\n");
				system("pause");
			}
		}
		while(band_encontrado == false);
		
		arch_objetos = fopen("Objetos.dat", "r+b");
		
		rewind(arch_objetos);
		fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
		
		band_encontrado = NULL;
		while(!feof(arch_objetos) && band_encontrado == false)
		{
			
			if(strcmp(Reg_Prestamos_O.objeto, Reg_Objetos.nombre) == 0 && Reg_Objetos.borrado == false)
			{
				band_encontrado = true;
				fseek(arch_objetos, (long)-sizeof(Reg_Objetos), SEEK_CUR); // Cambio de existencias.

				break;
			}
			
			if(band_encontrado == false)
				fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
		}
		
		band_estudiante = NULL;
		band_encontrado = NULL;
		arch_estudiantes = fopen("Estudiantes.dat", "r+b");
		
		if(arch_estudiantes != NULL)
		{
			rewind(arch_estudiantes);
			fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);
			
			while(!feof(arch_estudiantes) && band_encontrado == false)
			{
				if(strcmp(Reg_Prestamos_O.idprestatario, Reg_Estudiantes.id) == 0 && Reg_Estudiantes.borrado == false)
				{
					band_estudiante = true;
					band_encontrado = true;
					fseek(arch_estudiantes, (long)-sizeof(Reg_Estudiantes), SEEK_CUR);	
					break;	
				}
				
				if(band_encontrado == false)
					fread(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);	
			}
		}
		
		band_profesional = NULL;
		band_encontrado = NULL;
		arch_profesionales = fopen("Profesionales.dat", "r+b");
		
		if(arch_profesionales != NULL)
		{
			rewind(arch_profesionales);
			fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
			
			while(!feof(arch_profesionales) && band_encontrado == false)
			{
				if(strcmp(Reg_Prestamos_O.idprestatario, Reg_Profesionales.id) == 0 && Reg_Profesionales.borrado == false)
				{
					band_profesional = true;
					band_encontrado = true;
					fseek(arch_profesionales, (long)-sizeof(Reg_Profesionales), SEEK_CUR);	
					break;	
				}
				
				if(band_encontrado == false)
					fread(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);	
			}
		}		
		
		Reg_Objetos.existencias = Reg_Objetos.existencias + Reg_Prestamos_O.cantidad;
		Reg_Objetos.prestado = Reg_Objetos.prestado - 1;
	
		if(band_estudiante == true)
		{
			/*printf("Estudiante encontrado\n\n");
			system("pause");*/
			Reg_Estudiantes.prestamo = Reg_Estudiantes.prestamo - 1;			
		}
		if(band_profesional == true)
		{
			/*printf("Profesional encontrado\n\n");
			system("pause");*/
			Reg_Profesionales.prestamo = Reg_Profesionales.prestamo - 1;			
		}		
		do
		{
			system("cls");
			printf("-- COMPLETAR UN PRESTAMO --");
			printf("\n\n(Si desea cancelar, escriba 'salir')");	
			printf("\n\n\tDESEA COMPLETAR EL PRESTAMO(SI|NO): ");
			_flushall();
			gets(centinela);
			
			strcpy(cpy_centinela, centinela);
			
			if(strcmp(strupr(cpy_centinela), "SI") == 0)
			{
				bandera = NULL;
				
				fwrite(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
				fclose(arch_objetos);
				
				Reg_Prestamos_O.borrado = true;
				fwrite(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
				
				if(band_estudiante == true)
				{
					fwrite(&Reg_Estudiantes, sizeof(Reg_Estudiantes), 1, arch_estudiantes);	
					fclose(arch_estudiantes);		
				}
				if(band_profesional == true)
				{
					fwrite(&Reg_Profesionales, sizeof(Reg_Profesionales), 1, arch_profesionales);
					fclose(arch_estudiantes);		
				}					

				// ---------------------------- BAJA FISICA DEL ARCHIVO ------------------------------
					FILE *aux;
					aux = fopen("auxiliar.dat", "w+b");
					
					rewind(arch_prestamos_o);
					fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
					
					while (!feof(arch_prestamos_o))
					{
						if (Reg_Prestamos_O.borrado == false)
						{	
							fwrite(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, aux);
						}
						
						fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
					}
					
					fclose(arch_prestamos_o);
					fclose(aux);
					
					remove("Prestamos_O.dat");
					rename("auxiliar.dat", "Prestamos.O.dat");
					remove("auxiliar.dat");
					
				// -----------------------------------------------------------------------------------		
			}
			else if(strcmp(strupr(cpy_centinela), "NO") == 0)
			{
				system("cls");
				printf("No se ha borrado el prestamo ingresado...");
				printf("\n\n");
				system("pause");
			}
			else if(strcmp(strupr(cpy_centinela), "NO") != 0 && (strcmp(strupr(cpy_centinela), "SI") != 0))
			{
				system("cls");
				printf("Valor incorrecto. Ingrese nuevamente...");
				printf("\n\n");
				system("pause");
			}
			
		}
		while(strcmp(strupr(cpy_centinela), "NO") != 0 && (strcmp(strupr(cpy_centinela), "SI") != 0));
	}
}

void Modulo_Prestamos_Objetos_Buscar()
{
	// ---- APERTURA Y COMPROBACION DE ERRORES EN EL ARCHIVO ----
	
		FILE *arch_prestamos_o;
		FILE *arch_objetos;
		
		arch_prestamos_o = fopen("Prestamos_O.dat", "rb");
		arch_objetos = fopen("Objetos.dat", "rb");
			
		if(arch_prestamos_o == NULL)
		{
			system("cls");
			printf("ERROR. No se pudo abrir el archivo 'Prestamos_O.dat'");
			printf("\n\n(No hay ningun prestamo en la base de datos)");
			printf("\n\n");
		}
		
	// ----------------------------------------------------------
	
	else
	{
		system("cls");
		
		char opcion = NULL;
			
		Prestamos_Objetos Reg_Prestamos_O;
		Objetos Reg_Objetos;
				
		int i = 0;		
		bool bandera = false;
		
		string codPrestamo = {NULL};
		string codObjeto = {NULL};
		string id = {NULL};
		
		bool encontrado = true;
		
		do
		{
			opcion = NULL;
			
			system("cls");
			printf("-- BUSQUEDA DE UN PRESTAMO -- ");
			printf("\n\n\t1- BUSQUEDA POR CODIGO DE PRESTAMO");
			printf("\n\t2- BUSQUEDA POR CODIGO DE OBJETO");
			printf("\n\t3- BUSQUEDA POR ID DE PRESTATARIO");
			
			printf("\n\nSELECCIONE UNA OPCION: ");
			opcion = Comprobacion_Tecla_Escape();
			
			switch( opcion )
			{
				case '1':
						{
							encontrado = NULL;
							
							system("cls");
							printf("INGRESE CODIGO DE PRESTAMO: ");
							_flushall();
							gets(codPrestamo);
							
							rewind(arch_prestamos_o);
							fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
							
							while(!feof(arch_prestamos_o) && encontrado == false)
							{
								if(strcmp(codPrestamo, Reg_Prestamos_O.codigo) == 0 && Reg_Prestamos_O.borrado == false)
								{
									encontrado = true;
									break;
								}
								
								if(encontrado == false)
									fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
							}
							
							if(encontrado == false)
							{
								system("cls");
								printf("No se encontro el codigo del prestamo ingresado.");
								printf("\n\n");
								system("pause");
																	
								fclose(arch_prestamos_o);
								Modulo_Prestamos_Objetos_Buscar();
							}
							else
							{
									system("cls");
									printf("Se ha encontrado el prestamo exitosamente...");
									printf("\n\n\tCodigo de prestamo: %s", Reg_Prestamos_O.codigo);
									printf("\n\tObjeto: %s", Reg_Prestamos_O.objeto);
									printf("\n\tCantidad: %d", Reg_Prestamos_O.cantidad);
									printf("\n\tID Prestatario: %s", Reg_Prestamos_O.idprestatario);
									printf("\n\tApellido y nombre: %s", Reg_Prestamos_O.apeYNom);
									printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_O.fecha.dd, Reg_Prestamos_O.fecha.mm, Reg_Prestamos_O.fecha.aaaa);
									
									printf("\n\n");
									system("pause");
							}
								
							break;
						}
				case '2':
						{
							i = 0;
							
							encontrado = NULL;
							
							system("cls");
							printf("INGRESE CODIGO DEL OBJETO: ");
							_flushall();
							gets(codObjeto);
							
							rewind(arch_prestamos_o);
							rewind(arch_objetos);
							
							fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
							fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);
							
							system("cls");
							while(!feof(arch_prestamos_o))
							{
								if(strcmp(codObjeto, Reg_Objetos.codigo) == 0)
								{
									if(strcmp(Reg_Objetos.nombre, Reg_Prestamos_O.objeto) == 0 && Reg_Prestamos_O.borrado == false)
									{
										encontrado = true;
									
										printf("PRESTAMO [%d]:", i+1);
										printf("\n\tCodigo de prestamo: %s", Reg_Prestamos_O.codigo);
										printf("\n\tObjeto: %s", Reg_Prestamos_O.objeto);
										printf("\n\tCantidad: %d", Reg_Prestamos_O.cantidad);
										printf("\n\tID Prestatario: %s", Reg_Prestamos_O.idprestatario);
										printf("\n\tApellido y nombre: %s", Reg_Prestamos_O.apeYNom);
										printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_O.fecha.dd, Reg_Prestamos_O.fecha.mm, Reg_Prestamos_O.fecha.aaaa);

										printf("\n\n");	
									}
									
								}
								
								fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
								fread(&Reg_Objetos, sizeof(Reg_Objetos), 1, arch_objetos);	
							}
							
							if(encontrado == false)
							{
								system("cls");
								printf("No se encontro el codigo del prestamo ingresado.");
								printf("\n\n");
								system("pause");
																	
								fclose(arch_prestamos_o);
								Modulo_Prestamos_Objetos_Buscar();
							}	
							
							system("pause");
							break;
						}
				case '3':
						{
							i = 0;
							
							encontrado = NULL;
							
							system("cls");
							printf("INGRESE ID DEL PRESTATARIO: ");
							_flushall();
							gets(id);
							
							rewind(arch_prestamos_o);
							fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
							
							system("cls");
							while(!feof(arch_prestamos_o))
							{
								if(strcmp(id, Reg_Prestamos_O.idprestatario) == 0 && Reg_Prestamos_O.borrado == false)
								{
										encontrado = true;
									
										printf("PRESTAMO [%d]:", i+1);
										printf("\n\tCodigo de prestamo: %s", Reg_Prestamos_O.codigo);
										printf("\n\tObjeto: %s", Reg_Prestamos_O.objeto);
										printf("\n\tCantidad: %d", Reg_Prestamos_O.cantidad);
										printf("\n\tID Prestatario: %s", Reg_Prestamos_O.idprestatario);
										printf("\n\tApellido y nombre: %s", Reg_Prestamos_O.apeYNom);
										printf("\n\tFecha del prestamo: %d/%d/%d", Reg_Prestamos_O.fecha.dd, Reg_Prestamos_O.fecha.mm, Reg_Prestamos_O.fecha.aaaa);

									
										printf("\n\n");								
								}
								
								fread(&Reg_Prestamos_O, sizeof(Reg_Prestamos_O), 1, arch_prestamos_o);
							}
							
							if(encontrado == false)
							{
								system("cls");
								printf("No se encontro el id del prestatario ingresado.");
								printf("\n\n");
								system("pause");
																	
								fclose(arch_prestamos_o);
								Modulo_Prestamos_Objetos_Buscar();
							}	
							
							system("pause");
							break;
						}
				case '0':
						{
							fclose(arch_prestamos_o);
							Modulo_Prestamos_Objetos();
							
							break;
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
			} // Cierre switch principal
		}
		while(true);
		
		
		fclose(arch_prestamos_o);
		system("pause");
	}				
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

char Comprobacion_Tecla_Escape()
{
	bool band_esc = false;
	bool band_enter = false;
	
	char opcion = NULL;
	char tecla = NULL;
	
	string cadena = {NULL};
	
	int i = 0;
	
	do
	{
		_flushall();
		tecla = getch();	
				
		switch(tecla)
		{
			case 27:
					{
						band_esc = true;
						break;	
					}	
					
			case 13:
					{
						band_enter = true;
						break;		
					}
			default:
					{
						printf("%c", tecla);
						cadena[i++] = tecla;
						break;
					}
		}
					
		if(band_esc == true || band_enter == true)
			break;
	}
	while(true);
	
	cadena[i] = '\0';
		
	if(band_esc == true)
	{
		opcion = '0';
		
		for(i=0; i<strlen(cadena); i++)
		{
			cadena[i] = NULL;
		}
	}
	else
	{
		if(i > 1)
			opcion = '-';
		else
			opcion = cadena[0];			
	}
	
	return opcion;	
}

int Fecha_Dia()
{
    //char fecha[] = {NULL};
    int dd = NULL;
    
    time_t current_time;
    
    current_time = time(NULL);
    
    ctime(&current_time);
    
    //strcpy(fecha, ctime(&current_time));
    
    //printf("%s", fecha);
     
    struct tm *tiempo = localtime(&current_time);
    /*printf("%d/%d/%d", tiempo->tm_mday, tiempo->tm_mon, tiempo->tm_year+1900);
    
    printf("\n\n");
    system("pause");*/
    
	dd = tiempo->tm_mday;  
	/*printf("dia: %d", dd);
	system("pause");*/
	
	
    return dd;
}

int Fecha_Mes()
{
    //char fecha[] = {NULL};
    int mm = NULL;
    
    time_t current_time;
    
    current_time = time(NULL);
    
    ctime(&current_time);
    
    //strcpy(fecha, ctime(&current_time));
    
    //printf("%s", fecha);
     
    struct tm *tiempo = localtime(&current_time);
    /*printf("%d/%d/%d", tiempo->tm_mday, tiempo->tm_mon, tiempo->tm_year+1900);
    
    printf("\n\n");
    system("pause");*/
    
	mm = tiempo->tm_mon;  
	/*printf("Mes: %d", mm);
	system("pause");*/
	
    return mm;
}

int Fecha_Anio()
{
    //char fecha[] = {NULL};
    int aaaa = NULL;
    
    time_t current_time;
    
    current_time = time(NULL);
    
    ctime(&current_time);
    
    //strcpy(fecha, ctime(&current_time));
    
    //printf("%s", fecha);
     
    struct tm *tiempo = localtime(&current_time);
   /* printf("%d/%d/%d", tiempo->tm_mday, tiempo->tm_mon, tiempo->tm_year+1900);
    
    printf("\n\n");
    system("pause");*/
    
	aaaa = tiempo->tm_year;  
	/*printf("Anio: %d", aaaa);
	system("pause");*/
	
    return aaaa;
}

// ***********************************************************


