estudiantes = [
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
    for indice, estudiante in enumerate(lista_estudiantes, start=1):
        print(f"--- Estudiante {indice} ---")
        print(f"Nombre: {estudiante['nombre']}")
        print(f"Edad: {estudiante['edad']}")
        print(f"Ciudad: {estudiante['ciudad']}")
        print(f"Estudia: {estudiante['estudia']}")
        print(f"Curso: {estudiante['curso']}")
        print()

while True:     
    print ("¿Que desea hacer?")
    print ("")
    print ("(1) Imprimir datos de todoslos estudiantes")
    print ("(2) buscar estudiante por nombre")
    print ("(3) agregar un nuevo estudiante")
    print ("(4) ver solo los que estudian actualmente")
    print ("(0) salir")

    opcion = input("Ingrese el número de la opción deseada: ")

    if opcion == "1":
        imprimir_estudiantes(estudiantes)       
    
    elif opcion == "2":
        nombre_buscar = input("Ingrese el nombre del estudiante a buscar: ")
        encontrado = False
        for estudiante in estudiantes:
            if estudiante['nombre'].lower() == nombre_buscar.lower():
                print(f"Nombre: {estudiante['nombre']}")
                print(f"Edad: {estudiante['edad']}")
                print(f"Ciudad: {estudiante['ciudad']}")
                print(f"Estudia: {estudiante['estudia']}")
                print(f"Curso: {estudiante['curso']}")
                encontrado = True
                break
        if not encontrado:
            print("Estudiante no encontrado.")




