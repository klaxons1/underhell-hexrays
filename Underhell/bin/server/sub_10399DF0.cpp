__int16 __thiscall sub_10399DF0(_WORD *this, unsigned int *a2)
{
  unsigned __int16 v2; // di
  int *v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // esi
  int v8; // [esp+Ch] [ebp-4h]

  v2 = this[6];
  if ( v2 == 0xFFFF )
    return -1;
  v3 = off_1061BE18;
  v8 = *(_DWORD *)this;
  while ( 1 )
  {
    v4 = sub_1026A890(a2);
    v5 = v8 + 8 * v2;
    if ( *(_DWORD *)v5 == -1 || v3[4 * (*(_DWORD *)v5 & 0xFFF) + 2] != *(_DWORD *)v5 >> 12 )
      v6 = 0;
    else
      v6 = v3[4 * (*(_DWORD *)v5 & 0xFFF) + 1];
    if ( v6 == v4 )
      break;
    v2 = *(_WORD *)(v5 + 6);
    if ( v2 == 0xFFFF )
      return -1;
  }
  return v2;
}
