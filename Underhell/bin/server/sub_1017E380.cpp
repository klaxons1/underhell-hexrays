char *__cdecl sub_1017E380(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(836);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 1);
    *(_DWORD *)v3 = &CLogicLineToEntity::`vftable';
    *((_DWORD *)v3 + 203) = -1;
    *((_DWORD *)v3 + 200) = 0;
    *((_DWORD *)v3 + 204) = 5;
    *((_DWORD *)v3 + 207) = -1;
    *((_DWORD *)v3 + 208) = -1;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
