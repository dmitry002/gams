import random

print("Вітаємо в грі 'Вгадай число'!")
print("Я загадав число від 1 до 100. У вас є 7 спроб, щоб його вгадати.")

secret_number = random.randint(1, 100)
attempts = 10

for attempt in range(1, attempts + 1):
    try:
        guess = int(input(f"\nСпроба {attempt} з {attempts}. Введіть ваше число: "))
    except ValueError:
        print("Введіть, будь ласка, ціле число!")
        continue

    if guess < secret_number:
        print("Занадто маленьке.")
    elif guess > secret_number:
        print("Занадто велике.")
    else:
        print(f"Вітаємо! Ви вгадали число {secret_number} з {attempt} спроб(и)!")
        break
else:
    print(f"\nВи використали всі спроби. Загадане число було: {secret_number}")