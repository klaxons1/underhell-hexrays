char __cdecl sub_1012FE80(int a1, char *Str, int (__thiscall ***a3)(_DWORD), _DWORD *a4)
{
  int v4; // eax
  int v6; // eax
  int v7; // [esp-4h] [ebp-4h]

  if ( Str )
  {
    v4 = sub_1022A6A0(Str, 0);
    if ( !v4 )
      return 0;
  }
  else
  {
    v4 = a1;
  }
  v7 = v4;
  v6 = (**a3)(a3);
  return sub_1012FE10(a4, v6, v7);
}
