import random, json
G=lambda N:([M for n in range(2,46)if(M:=int(N**(1/n)))>=2and sum(M**q for q in range(n+1))==N][-1:]or[N-1])[0]
A=[(V:=random.randint(2,10**5)) and random.choice([Q for m in range(2,64)if (Q:=sum(V**n for n in range(m)))<10**14])for _ in range(3000)]
B=[*map(G,A)]
json.dump([[[f'{v}']for v in A],[f'{v}' for v in B]],open('test_cases_random.json','w'))