int __stdcall sub_101548A0(int a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // esi

  v2 = a1;
  if ( !a1 )
  {
    v2 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
    if ( !v2 )
      return 0;
  }
  v3 = *(_DWORD *)(v2 + 12);
  if ( !v3 )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  if ( !v4 )
    return 0;
  *a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1396))(v4);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1392))(v4);
}
