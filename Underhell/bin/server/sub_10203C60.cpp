char *__cdecl sub_10203C60(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(832);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *(_DWORD *)v3 = &CPointProximitySensor::`vftable';
    *((_DWORD *)v3 + 201) = -1;
    *((_DWORD *)v3 + 205) = -1;
    *((_DWORD *)v3 + 202) = 0;
    *((_DWORD *)v3 + 206) = 5;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
