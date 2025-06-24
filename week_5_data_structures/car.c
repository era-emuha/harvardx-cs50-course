struct car {
    char *make;
    char model[10];
    char plate[8];
    int mileage;
    int year;
    float price;
    double engine_size;
};

// Variable declarations
struct car my_car;

// Accessing the members of the struct
my_car.make = "Toyota";

// Dynamic memory allocation for car
struct car *my_car_ptr;
my_car_ptr = malloc(sizeof(struct car));


