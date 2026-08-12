char *__cdecl sub_1023D7E0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi
  _DWORD *v4; // eax
  int i; // ecx

  v2 = (char *)sub_100D6340(7468);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *(_DWORD *)v3 = &CSoundEnt::`vftable';
    v4 = v3 + 812;
    for ( i = 127; i >= 0; --i )
    {
      *v4 = -1;
      v4[1] = -1;
      v4 += 13;
    }
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
