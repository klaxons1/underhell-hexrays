void __cdecl sub_102467B0(char *String2, int a2, int a3, int a4, float a5)
{
  _DWORD *i; // esi
  const char *v6; // eax

  if ( String2 )
  {
    if ( *String2 )
    {
      DevMsg(2, "Firing: (%s)\n", String2);
      for ( i = sub_1012BF20(&dword_1069E3E0, 0, String2, a2, a2, a3, 0);
            i;
            i = sub_1012BF20(&dword_1069E3E0, (int)i, String2, a2, a2, a3, 0) )
      {
        if ( (i[63] & 1) == 0 )
        {
          v6 = sub_100D6390(i);
          DevMsg(2, "[%03d] Found: %s, firing (%s)\n", *(_DWORD *)(dword_106B31C8 + 24) % 1000, v6, String2);
          (*(void (__thiscall **)(_DWORD *, int, int, int, _DWORD))(*i + 372))(i, a2, a3, a4, LODWORD(a5));
        }
      }
    }
  }
}
