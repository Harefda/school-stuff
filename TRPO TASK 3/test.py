class Car:
    def __init__(self, name, model: str, year: int, hp: int) -> None:
        self.name = name
        self.model = model
        self.year = year
        self.hp = hp

    def get_info(self):
        return f'This is {self.name} {self.model} {self.year} and this car has {self.hp} horses powers'

    def updata_hp_info(self, new_hp):
        self.hp = new_hp



first_car = Car(name="Audi", model="A7", year=2021, hp=328)
first_car.updata_hp_info(500)


print(first_car.get_info())