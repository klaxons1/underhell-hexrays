char *__cdecl sub_101DDD40(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(832);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 1);
    *(_DWORD *)v3 = &CPhysConvert::`vftable';
    *((_DWORD *)v3 + 203) = -1;
    *((_DWORD *)v3 + 200) = 0;
    *((_DWORD *)v3 + 204) = 5;
    *((float *)v3 + 207) = 0.0;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
