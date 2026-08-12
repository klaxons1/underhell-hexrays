char __thiscall sub_101FDE80(void *this)
{
  int v2; // eax
  int v3; // esi

  if ( *(int *)(dword_106B31C8 + 20) <= 1 )
  {
    v2 = sub_10261B20();
  }
  else
  {
    LOBYTE(v2) = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0);
    if ( (_BYTE)v2 )
      return v2;
    v2 = sub_1025FC50();
  }
  v3 = v2;
  if ( v2 )
  {
    LOBYTE(v2) = sub_100F8040(v2, (int)this, 0, 0.0, 0);
    if ( !--dword_106C13C0 )
      LOBYTE(v2) = (*(int (__cdecl **)(int, _DWORD, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
                     dword_106B31D0,
                     *(_DWORD *)(v3 + 24),
                     "devshots_nextmap");
  }
  return v2;
}
