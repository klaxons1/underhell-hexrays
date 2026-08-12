char *__cdecl sub_101DE6D0(int a1, int a2)
{
  char *v2; // eax
  char *v3; // esi

  v2 = (char *)sub_100D6340(840);
  v3 = v2;
  if ( v2 )
  {
    sub_100E33C0(v2, 0);
    *(_DWORD *)v3 = &CPhysExplosion::`vftable';
    *((_DWORD *)v3 + 207) = -1;
    *((_DWORD *)v3 + 204) = 0;
    *((_DWORD *)v3 + 208) = 5;
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)v3 + 108))(v3, a2);
    return v3;
  }
  else
  {
    (*(void (__thiscall **)(_DWORD, int))(MEMORY[0] + 108))(0, a2);
    return 0;
  }
}
