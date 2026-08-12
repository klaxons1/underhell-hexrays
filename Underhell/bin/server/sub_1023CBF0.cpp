char *__cdecl sub_1023CBF0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(820);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *((float *)v3 + 203) = 0.30000001;
    *(_DWORD *)v3 = &CAISound::`vftable';
    *((_DWORD *)v3 + 201) = 0;
    *((_DWORD *)v3 + 202) = 0;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
