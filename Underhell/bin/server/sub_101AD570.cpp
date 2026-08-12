char *__cdecl sub_101AD570(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(856);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *(_DWORD *)v3 = &CPathTrack::`vftable';
    *((_DWORD *)v3 + 211) = -1;
    *((_DWORD *)v3 + 208) = 0;
    *((_DWORD *)v3 + 212) = 5;
    *((_DWORD *)v3 + 206) = -1;
    *((_DWORD *)v3 + 207) = 1;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
