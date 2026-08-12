int __thiscall sub_10244BD0(int *this, int a2)
{
  unsigned __int16 v3; // ax
  int v4; // ebx

  v3 = sub_10244160(*this);
  if ( v3 == 0xFFFF )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(*this + 4);
    if ( *(_DWORD *)(v4 + 16 * v3 + 12) == a2 )
      break;
    v3 = sub_10244230((_DWORD *)*this, v3);
    if ( v3 == 0xFFFF )
      return 0;
  }
  return *(_DWORD *)(v4 + 16 * v3 + 8);
}
