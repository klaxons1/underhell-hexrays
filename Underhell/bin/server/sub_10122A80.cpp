int __cdecl sub_10122A80(int a1, int a2, int a3, int a4, int a5)
{
  return (**(int (__cdecl ***)(int, int, int, int, int))(a1 + 72))(
           a1,
           a3,
           *(_DWORD *)(a2 + *(_DWORD *)(*(_DWORD *)(a1 + 72) + 16))
         + *(_DWORD *)(a1 + 36) * *(_DWORD *)(*(_DWORD *)(a1 + 72) + 12),
           a4,
           a5);
}
