int __thiscall sub_1019E7E0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // edx
  _DWORD *v4; // ecx
  int result; // eax

  if ( !a2 )
    return 0;
  v2 = this[303];
  if ( v2 == -1 )
    return 0;
  v3 = this[300];
  while ( 1 )
  {
    v4 = (_DWORD *)(v3 + 12 * v2);
    result = *v4;
    if ( *(_DWORD *)(*v4 + 68) == a2 )
      break;
    v2 = v4[2];
    if ( v2 == -1 )
      return 0;
  }
  return result;
}
