int __cdecl sub_1009B1E0(int a1, int a2, int a3, int a4)
{
  return (**(int (__cdecl ***)(int, int, int, int))(a1 + 20))(
           a1,
           a2,
           *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 20) + a3)
         + *(_DWORD *)(*(_DWORD *)(a1 + 20) + 16) * *(_DWORD *)(a1 + 48),
           a4);
}
