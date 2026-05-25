estudiantes = [                #creando lista de estudiantes con diccionarios para cada estudiante
    {
        "nombre": "Said",
        "edad": 23,
        "ciudad": "Lima",
        "estudia": "si",
        "curso": "Matemáticas"
    },
    {
        "nombre": "Sato",
        "edad": 19,
        "ciudad": "Callao",
        "estudia": "si",
        "curso": "Física"
    },
    {
        "nombre": "Luis",
        "edad": 30,
        "ciudad": "Cusco",
        "estudia": "no",
        "curso": "Historia"
    }
]

def imprimir_estudiantes(lista_estudiantes):
    for indice, estudiante in enumerate(lista_estudiantes, start=1):   #enumerate para obtener un indice y no tener que crear una variable contador
        print(f"--- Estudiante {indice} ---")
        print(f"Nombre: {estudiante['nombre']}")
        print(f"Edad: {estudiante['edad']}")
        print(f"Ciudad: {estudiante['ciudad']}")
        print(f"Estudia: {estudiante['estudia']}")
        print(f"Curso: {estudiante['curso']}")
        print()

while True:     #bucle para mostrar el menu hasta que el usuario decida salir
    print ("¿Que desea hacer?")
    print ("")
    print ("(1) Imprimir datos de todoslos estudiantes") 
    print ("(2) buscar estudiante por nombre")
    print ("(3) agregar un nuevo estudiante")
    print ("(4) ver solo los que estudian actualmente")
    print ("(0) salir")

    opcion = input("Ingrese el número de la opción deseada: ") #el usuario elige una opcion del menu

    if opcion == "1":   #compara la opcion ingresada por el usuario con las opciones del menu aqui seria como el imput de un sensor en arduino
        imprimir_estudiantes(estudiantes)       
    
    elif opcion == "2":
        nombre_buscar = input("Ingrese el nombre del estudiante a buscar: ") #el usuario ingresa el nombre del estudiante que desea buscar
        encontrado = False  #para saber si se encontro el estudiante o no, se inicializa en falso y si se encuentra el estudiante se cambia a verdadero
        for estudiante in estudiantes:
            if estudiante['nombre'].lower() == nombre_buscar.lower(): #compara el nombre ingresado con la lista .lower() para no tener problemas con mayusculas o minusculas
                print(f"Nombre: {estudiante['nombre']}")
                print(f"Edad: {estudiante['edad']}")
                print(f"Ciudad: {estudiante['ciudad']}")
                print(f"Estudia: {estudiante['estudia']}")
                print(f"Curso: {estudiante['curso']}")
                encontrado = True           
                break #como en el multimetro , encuentra un valor y deja de buscar
        if not encontrado:          #si el imput es un estudiante que no esta en la lista.
            print("Estudiante no encontrado.")

    elif opcion == "3":
        nuevo_estudiante = {} #se crea un diccionario vacio
        nuevo_estudiante["nombre"] = input("Ingrese el nombre del nuevo estudiante: ")  # agrega datos del nuevo estudiantes en el diccionario    
        try:
            nuevo_estudiante["edad" ] = int(input("Ingrese la edad del nuevo estudiante: "))
        except ValueError:
            print("Error: Por favor, ingrese un número válido para la edad.")  
            continue          
        nuevo_estudiante["ciudad"] = input("Ingrese la ciudad del nuevo estudiante: ")
        nuevo_estudiante["estudia"] = input("¿El nuevo estudiante estudia? (si/no): ")
        nuevo_estudiante["curso"] = input("Ingrese el curso del nuevo estudiante: ")
        estudiantes.append(nuevo_estudiante) #estudiantes.append(nuevo_estudiante) para agregar el nuevo estudiante a la lista de estudiantes
        print("Estudiante agregado correctamente.")
    
    elif opcion == "4":
        print("Estudiantes que estudian actualmente:")
        for estudiante in estudiantes:
            if estudiante['estudia'].lower() == "si": #compara si el estudiante estudia actualmente, si es asi imprime su nombre
                print(f"Nombre: {estudiante['nombre']}")
                print()
    
    elif opcion == "0":
        print("Saliendo del programa. ¡Hasta luego!")
        break