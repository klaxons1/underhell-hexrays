int __stdcall sub_1011C1C0(int a1, int a2, int a3, int a4)
{
  int i; // esi
  int v5; // ecx
  int result; // eax

  for ( i = dword_10437688; i; i = *(_DWORD *)(i + 8) )
  {
    v5 = *(_DWORD *)(i + 4);
    if ( v5 )
      result = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v5 + 12))(v5, a1, a2, a3, a4);
  }
  return result;
}
