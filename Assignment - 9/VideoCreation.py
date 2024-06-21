from collections import defaultdict

def Create(name, ids, views):
    views = defaultdict(int)
    videos = defaultdict(list)
    
    for i in range(len(name)):
        views[name[i]] += views[i]
        videos[name[i]].append((ids[i], views[i]))
    
    maxs = max(views.values())
    
    result = [[name, min(videos)[0]] for name, videos in videos.items() 
              if views[name] == maxs]
    
    return result

name = ["alice", "bob", "alice", "chris"]
ids = ["one", "two", "three", "four"]
views = [5, 10, 5, 4]

result = Create(name, ids, views)
print(result)
