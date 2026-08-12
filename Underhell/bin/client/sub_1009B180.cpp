int __cdecl sub_1009B180(int a1, _DWORD *a2, int a3)
{
  int result; // eax

  result = (*(int (__cdecl **)(int, _DWORD, _DWORD))(*(_DWORD *)(a1 + 20) + 12))(
             a3,
             *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20),
             *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24));
  *a2 = a3;
  return result;
}
