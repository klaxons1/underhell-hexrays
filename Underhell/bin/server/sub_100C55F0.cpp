int __thiscall sub_100C55F0(int *this, int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int result; // eax
  _DWORD *v7; // eax

  v3 = *this;
  v4 = *this - 1;
  if ( *this != v4 )
  {
    v5 = this[3];
    if ( v5 )
    {
      if ( *(_BYTE *)(v5 + 84) )
      {
        *(_BYTE *)(v5 + 88) |= 1u;
        result = v3;
        *this = v4;
        return result;
      }
      v7 = *(_DWORD **)(v5 + 24);
      if ( v7 )
      {
        *v7 |= 0x101u;
        *(_WORD *)(sub_10153460(v7) + 2) = 0;
      }
    }
    *this = v4;
  }
  return v3;
}
