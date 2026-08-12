int __thiscall sub_10130480(_DWORD *this)
{
  int v2; // ecx
  int result; // eax
  int v4; // ecx

  v2 = this[1];
  if ( v2 )
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 156))(v2, 0);
    v4 = this[1];
    if ( v4 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 120))(v4, 1);
    this[1] = 0;
  }
  return result;
}
