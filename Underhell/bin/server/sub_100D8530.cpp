int __thiscall sub_100D8530(void *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // edi
  int v4; // esi

  v1 = *(_DWORD *)dword_106B31D0;
  v2 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
  v3 = (*(int (__thiscall **)(int, int))(v1 + 256))(dword_106B31D0, v2);
  v4 = sub_10236A30();
  if ( !v4 )
    return 0;
  while ( !(*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31D0 + 252))(
             dword_106B31D0,
             v3,
             *(_DWORD *)(v4 + 820)) )
  {
    v4 = *(_DWORD *)(v4 + 896);
    if ( !v4 )
      return 0;
  }
  return v4;
}
