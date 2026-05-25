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