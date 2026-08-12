int __cdecl sub_102EC5A0(int a1, float a2, char *String1, int a4, int a5)
{
  int *v5; // eax
  int v6; // esi
  double v8; // st7

  v5 = sub_102D9B20();
  v6 = sub_100B9D10(v5, String1);
  if ( v6 == -1 )
  {
    Msg("ERROR: Attempting to give unknown ammo type (%s)\n", String1);
    return 0;
  }
  else
  {
    v8 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 376))(dword_106B3CDC, v6) * a2;
    if ( v8 < 1.0 )
      v8 = 1.0;
    return (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)a1 + 928))(a1, (int)v8, v6, a4, a5);
  }
}
