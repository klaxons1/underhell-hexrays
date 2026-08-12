char *__cdecl sub_101AACA0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(824);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 1);
    *((float *)v3 + 200) = 5000.0;
    *(_DWORD *)v3 = &CParticleLight::`vftable';
    *((float *)v3 + 201) = 1.0;
    *((float *)v3 + 202) = 0.0;
    *((float *)v3 + 203) = 0.0;
    *((_DWORD *)v3 + 204) = 0;
    v3[820] = 0;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
