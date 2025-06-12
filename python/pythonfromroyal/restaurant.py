# Write a Python class Restaurant with attributes like menu_items, book_table, and customer_orders, 
# and methods like add_item_to_menu, book_tables, and customer_order.
# Perform the following tasks now:
# Now add items to the menu.
# Make table reservations.
# Take customer orders.
# Print the menu.
# Print table reservations.
# Print customer orders.
# Note: Use dictionaries and lists to store the data.


class restaurant:
    def __init__(self):
        self.menu_item = {
            'pizza' : 10,
            'burger' : 30,
            'dosa' : 40,
            'burrito' : 50           
        }

        self.book_table = {
            't1' : True,
            't2' : False,
            't3' : True,
            't4' : False,
            't5' : False,
        }

        self.customer_orders = {
            'c1' : []
        }

    def add_item_to_menu(self,item,price):
        self.menu_item.update({item:price})

    def book_tables(self):
        while(True):
            table = input('Enter Table number : ')
            if(table in self.book_table.keys()):
                if(self.book_table[table] == True):
                    print('Table is occupied\ntry again')
                else:
                    self.book_table[table] = True
                    print('Table book')
                    break

    def customer_order(self,customer_id):
        self.customer_orders.update({customer_id:[]})
        print('Enter name of dishes (for exit Enter 0): \n')
        while(True):
            dish = input('Enter dish : ')
            if(dish in self.menu_item.keys()):
                self.customer_orders[customer_id].append(dish)  
            elif(dish == '0'):
                break
            else:
                print('invalid choice try again : ')
        print(self.customer_orders)

    def customer_bill(self,customer_id):
        bill = 0
        while(True):
            if customer_id in self.customer_orders.keys():
                for x in self.customer_orders.get(customer_id):
                    bill= bill + self.menu_item[x]
                break
            else:
                print('invalid customer_id')
        return bill        
r = restaurant()

r.add_item_to_menu('mojito',159)
r.customer_order('c1')
r.book_tables()
print(r.customer_bill('c1'))
