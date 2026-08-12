int __thiscall sub_10147700(_DWORD *this, _DWORD *a2, int a3)
{
  unsigned int v3; // eax
  int v4; // eax
  int v5; // edx
  int result; // eax
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // ecx

  v3 = this[1];
  if ( v3 == -1 || off_1061BE18[4 * (this[1] & 0xFFF) + 2] != v3 >> 12 )
    v4 = 0;
  else
    v4 = off_1061BE18[4 * (this[1] & 0xFFF) + 1];
  v5 = *(_DWORD *)(v4 + 424);
  result = 0;
  if ( v5 && a3 > 0 )
  {
    *a2 = v5;
    result = 1;
  }
  v7 = this[20];
  if ( v7 && result < a3 )
    a2[result++] = v7;
  v8 = this[21];
  if ( v8 && result < a3 )
    a2[result++] = v8;
  v9 = this[22];
  if ( v9 && result < a3 )
    a2[result++] = v9;
  v10 = this[23];
  if ( v10 )
  {
    if ( result < a3 )
      a2[result++] = v10;
  }
  return result;
}
