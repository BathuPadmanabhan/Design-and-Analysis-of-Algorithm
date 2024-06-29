import random

def calculate_demand(price, inventory, competitor_price, elasticity):
    base_demand = 100
    demand = base_demand - elasticity * (price - competitor_price)
    return min(demand, inventory)

def update_price(current_price, demand, competitor_price):
    if demand > 0:
        return current_price + (competitor_price - current_price) * 0.1
    else:
        return current_price - (current_price - competitor_price) * 0.1

def dynamic_pricing(time_period, products, initial_prices, inventory_levels, competitor_prices, demand_elasticity):
    prices = [[0] * products for _ in range(time_period + 1)]
    revenue = [0] * (time_period + 1)
    
    for i in range(products):
        prices[0][i] = initial_prices[i]
    
    for t in range(1, time_period + 1):
        for i in range(products):
            demand = calculate_demand(prices[t-1][i], inventory_levels[i], competitor_prices[i], demand_elasticity[i])
            prices[t][i] = update_price(prices[t-1][i], demand, competitor_prices[i])
            revenue[t] += prices[t][i] * demand
    
    return prices, revenue

time_period = 10
products = 3
initial_prices = [50, 60, 70]
inventory_levels = [500, 600, 700]
competitor_prices = [48, 62, 68]
demand_elasticity = [1.5, 1.2, 1.8]

prices, revenue = dynamic_pricing(time_period, products, initial_prices, inventory_levels, competitor_prices, demand_elasticity)
print("Prices:", prices)
print("Revenue:", revenue)
