int __thiscall sub_10219AE0(_DWORD *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // eax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax

  if ( a2 >= 255 )
    return -1;
  v2 = a2 >> 5;
  v3 = this[a2 >> 5] & dword_10645FE8[a2 & 0x1F];
  if ( a2 >> 5 == 7 )
  {
    v4 = v3 & 0x7FFFFFFF;
    if ( v4 )
    {
      _BitScanForward(&v5, v4);
      return v5 + 224;
    }
    return -1;
  }
  if ( v3 )
  {
    _BitScanForward(&v7, v3);
    return v7 + 32 * v2;
  }
  v8 = v2 + 1;
  if ( v8 >= 7 )
  {
LABEL_10:
    v10 = this[7] & 0x7FFFFFFF;
    if ( v10 )
    {
      _BitScanForward(&v11, v10);
      return v11 + 224;
    }
    return -1;
  }
  while ( 1 )
  {
    v9 = this[v8];
    if ( v9 )
      break;
    if ( ++v8 >= 7 )
      goto LABEL_10;
  }
  _BitScanForward(&v9, v9);
  return v9 + 32 * v8;
}
