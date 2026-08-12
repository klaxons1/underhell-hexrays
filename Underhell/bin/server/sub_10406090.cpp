char *__cdecl sub_10406090(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(2132);
  v3 = v2;
  if ( v2 )
  {
    sub_100CC980(v2);
    *(_DWORD *)v3 = &CMissile::`vftable';
    *((_DWORD *)v3 + 526) = -1;
    *((_DWORD *)v3 + 527) = -1;
    v3[2128] = 0;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
