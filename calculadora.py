def suma(a, b):
    return a + b

def resta(a, b):
    return a - b

def multiplicacion(a, b):
    return a * b

def division(a, b):
    if b == 0:
        return "Error: División por cero"
    return a / b

def calculadora():
    print("Seleccione la operación:")
    print("1. Suma")
    print("2. Resta")
    print("3. Multiplicación")
    print("4. División")
    
    while True:
        opcion = input("Ingrese la opcion (1-4): ")
        
        if opcion in ['1', '2', '3', '4']:
            try:
                num1 = float(input("Ingrese el primer número: "))
                num2 = float(input("Ingrese el segundo número: "))
            except ValueError:
                print("Error: Entrada no valida")
                continue
            
            if opcion == '1':
                print(f"{num1} + {num2} = {suma(num1, num2)}")
            elif opcion == '2':
                print(f"{num1} - {num2} = {resta(num1, num2)}")
            elif opcion == '3':
                print(f"{num1} * {num2} = {multiplicacion(num1, num2)}")
            elif opcion == '4':
                resultado = division(num1, num2)
                if resultado == "Error: Division por cero":
                    print(resultado)
                else:
                    print(f"{num1} / {num2} = {resultado}")
        else:
            print("Opción no válida. Por favor, seleccione una opción del 1 al 4.")
        
        siguiente_operacion = input("¿Desea realizar otra operación? (1=si/0=no): ")
        if siguiente_operacion.lower() != '1':
            print("Saliendo")
            break

if __name__ == "__main__":
    calculadora()
