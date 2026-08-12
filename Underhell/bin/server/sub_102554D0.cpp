int __thiscall sub_102554D0(int this, int a2)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx

  if ( *(_BYTE *)(this + 800) )
  {
    *(_BYTE *)(this + 800) = 0;
    v2 = *(_DWORD *)(this + 424);
    if ( v2 )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 48))(v2, 1);
  }
  else
  {
    *(_BYTE *)(this + 800) = 1;
    v4 = *(_DWORD *)(this + 424);
    if ( v4 )
      return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 48))(v4, 0);
  }
  return result;
}
