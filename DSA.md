## DSA 
###
Greek Letters
αA
$\alpha A$	νN
$\nu N$
βB
$\beta B$	ξΞ
$\xi\Xi$
γΓ
$\gamma \Gamma$	oO
$o O$ (omicron)
δΔ
$\delta \Delta$	πΠ
$\pi \Pi$
ϵεE
$\epsilon \varepsilon E$	ρϱP
$\rho\varrho P$
ζZ
$\zeta Z \sigma \,\!$	Σ
$\sigma \Sigma$
ηH
$\eta H$	τT
$\tau T$
θϑΘ
$\theta \vartheta \Theta$	υΥ
$\upsilon \Upsilon$
ιI
$\iota I$	ϕφΦ
$\phi \varphi \Phi$
κK
$\kappa K$	χX
$\chi X$
λΛ
$\lambda \Lambda$	ψΨ
$\psi \Psi$
μM
$\mu M$	ω Ω
$\omega \Omega$

### Exception handling
```
try
{
    // code to be executed
}
catch
{
    // code to be executed
}
throw
{
    // code to be executed
}
```
### final vs finally vs finalized ( constant -/ block- / function- )
---
### Exception propagation 

### Asymptotic Notation 
- Types of Asymptotic notation :-
    - 1) Upper bound : Big O(n)
    - 2) Lower bound : Omega Ω(n)
      3) Exact Bound : Theta θ (n)
      4) Strict upper bound : small o(n)
      5) Strict lower bound : small omega o(n)
---
## GP series  & Time complexity  :
- ```
  for (i=1;i<=n;i*=2)
  {
    for(j=1;j<=i;j++)
    {
        cout<<"hi";
    }
  }
  // Time complexity : n
---
## Recursion and Iteration : 
```
#include<iostream>
using namespace std;
void print(int n)
{
  if(n>0){
    cout<<n;
    print(n-1);
    cout<<n;
    
  }
}
int main(){
  print(5);
  return 0;
  
}
```