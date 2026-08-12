char *__cdecl sub_101869B0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(836);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *(_DWORD *)v3 = &CNPCSpawnDestination::`vftable';
    *((_DWORD *)v3 + 206) = -1;
    *((_DWORD *)v3 + 203) = 0;
    *((_DWORD *)v3 + 207) = 5;
    *((float *)v3 + 202) = *(float *)(dword_106B31C8 + 12);
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
