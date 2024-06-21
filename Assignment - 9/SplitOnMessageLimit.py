def split(message, limit):
    parts = []
    total_parts = (len(message) + limit - 1) // limit

    for i in range(total_parts):

        start = i * limit
        end = min((i + 1) * limit, len(message))

        part = message[start:end] + f"<{i + 1}/{total_parts}>"

        parts.append(part)
    return parts

message = "this is really a very awesome message"
limit = 9
output = split(message, limit)
print(output)
