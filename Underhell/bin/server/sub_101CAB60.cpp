char *__stdcall sub_101CAB60(int a1)
{
  char *v1; // eax
  char *v2; // esi

  v1 = (char *)sub_100D6340(820);
  v2 = v1;
  if ( v1 )
  {
    sub_100E33C0(v1, 1);
    *(_DWORD *)v2 = &CPhysicsEntitySolver::`vftable';
    *((_DWORD *)v2 + 200) = -1;
    *((_DWORD *)v2 + 201) = -1;
  }
  else
  {
    v2 = 0;
  }
  (*(void (__thiscall **)(char *, int))(*(_DWORD *)v2 + 108))(v2, a1);
  return v2 + 12;
}
