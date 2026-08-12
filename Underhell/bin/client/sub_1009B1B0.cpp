int __cdecl sub_1009B1B0(int a1, int a2, int a3)
{
  return (*(int (__cdecl **)(int, int, int))(*(_DWORD *)(*(_DWORD *)a1 + 20) + 4))(
           a1,
           a3,
           *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 20) + 20) + a2)
         + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 20) + 16) * *(_DWORD *)(*(_DWORD *)a1 + 48));
}
