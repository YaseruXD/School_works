def binary_search(list, item):
    begin_index = 0
    end_index = len(list) - 1

    while begin_index <= end_index:
        midpoint = begin_index + (end_index - begin_index) // 2
        midpoint_value = list[midpoint]

        if midpoint_value == item:
            return midpoint
        
        elif item < midpoint_value:
            end_index =  midpoint - 1

        else:
            begin_index = midpoint + 1

    return None

list_a = ['Aera', 'John', 'Joleen', 'Lana', 'Michelle', 'Navi', 'Paul', 'Skyler', 'Tom']
item_a = 'Michelle'

print("List is: ",list_a)
print("Name searched: ",item_a)

print("Element is present as index ", binary_search(list_a, item_a))

