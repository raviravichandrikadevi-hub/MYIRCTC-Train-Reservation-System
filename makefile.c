CC = gcc
CFLAGS = -Wall -g

TARGET = MYIRCTC

SRC = main.c print_train_info.c reserve_ticket.c booking_details.c cancel_ticket.c sign_up.c sign_in.c login_menue.c train_menue.c

OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
        $(CC) $(OBJ) -o $(TARGET)

%.o: %.c
        $(CC) $(CFLAGS) -c $< -o $@

clean:
        rm -f *.o $(TARGET)

run: $(TARGET)
        ./$(TARGET)