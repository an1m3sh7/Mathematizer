# https://www.hackerearth.com/practice/math/combinatorics/inclusion-exclusion/practice-problems/algorithm/gcd-on-a-tree/

# GCD on a tree

N=int(raw_input())
gcds={}
res=[1]*(N+1)
edg=[set([]) for _ in xrange(N+1)]
for iCase in xrange(N-1):
  u,v=map(int, raw_input().split())
  if u<v:
  	u,v=v,u
  gcd,a=u,v
  while a!=0:
    gcd,a=a,gcd%a
  gcds[(u,v)]=gcd
  if gcd!=1:
    edg[u].add(v)
    edg[v].add(u)
for i in xrange(2,N+1):
  todo=[(i,i)]
  done=set([i])
  while todo:
    old=todo
    todo=[]
    for x,y in old:
      for z in edg[x]:
      	if z not in done:
      	  done.add(z)
          t=gcds[(max(x,z),min(x,z))]
          gcd,a=max(t,y),min(t,y)
          if (gcd,a) in gcds:
       	    gcd=gcds[(gcd,a)]
          else: 	
            while a!=0:
              gcd,a=a,gcd%a
            gcds[(max(t,y),min(t,y))]=gcd            
          if gcd!=1:
            res[gcd]+=1
            todo.append((z,gcd))
print N**2-sum(res[2:]),
for i in xrange(2,N+1):
  print res[i],