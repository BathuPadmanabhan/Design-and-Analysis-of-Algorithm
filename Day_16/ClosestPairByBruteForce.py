import math

def brute(points):
    min_distance = float('inf')
    pair = None
    n = len(points)
    
    for i in range(n):
        for j in range(i + 1, n):
            distance = math.sqrt((points[i][0] - points[j][0])**2 + (points[i][1] - points[j][1])**2)
            if distance < min_distance:
                min_distance = distance
                pair = (points[i], points[j])
    
    return pair

points = [(1, 2), (4, 5), (7, 8), (3, 1)]
closest_pair = brute(points)
print("Closest Pair:", closest_pair)
