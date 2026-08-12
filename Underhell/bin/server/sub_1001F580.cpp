int __cdecl sub_1001F580(int a1, unsigned int a2)
{
  unsigned int i; // esi
  int result; // eax

  for ( i = 0; i < a2; ++i )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4 * i) + 8))(*(_DWORD *)(a1 + 4 * i));
  return result;
}
