a = [100, 200, 50, 90, 150, 50, 20, 80]
capacity = 400

a.sort()
total_weight = 0
containers_loaded = []

for weight in a:
    if total_weight + weight <= capacity:
        total_weight += weight
        containers_loaded.append(weight)
    else:
        break

print("Containers loaded:", containers_loaded)
print("Total weight loaded:", total_weight)
