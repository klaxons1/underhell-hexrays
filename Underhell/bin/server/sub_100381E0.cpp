int __thiscall sub_100381E0(void *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( !a2 )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 360))(this, 0);
  v3 = *(_DWORD *)(a2 + 12);
  if ( !v3 )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 360))(this, 0);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 20))(v3);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 360))(this, v4);
}
