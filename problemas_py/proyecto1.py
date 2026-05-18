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


while True:
def imprimir_estudiantes(lista_estudiantes):
    for indice, estudiante in enumerate(lista_estudiantes, start=1):
        print(f"--- Estudiante {indice} ---")
        print(f"Nombre: {estudiante['nombre']}")
        print(f"Edad: {estudiante['edad']}")
        print(f"Ciudad: {estudiante['ciudad']}")
        print(f"Estudia: {estudiante['estudia']}")
        print(f"Curso: {estudiante['curso']}")
        print()



for estudiante in estudiantes in enumerate(estudiantes, start=1):
    while True:
        respuesta = input(f"¿Deseas imprimir los datos de {estudiante['nombre']}? (s/n): ")
        if respuesta in {'s', 'n'}:
            break
        print("Por favor responde 's' para sí o 'n' para no.")
    if respuesta == 's':
        print(f"--- Estudiante {indice} ---")
        print(f"Nombre: {estudiante['nombre']}")
        print(f"Edad: {estudiante['edad']}")
        print(f"Ciudad: {estudiante['ciudad']}")
        print(f"Estudia: {estudiante['estudia']}")
        print(f"Curso: {estudiante['curso']}")


        