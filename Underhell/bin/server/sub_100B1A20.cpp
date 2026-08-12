int __thiscall sub_100B1A20(_DWORD *this, int a2)
{
  int v3; // esi
  int *v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edx
  int v9; // [esp+Ch] [ebp-4h]

  v3 = 0;
  v9 = this[16];
  if ( v9 <= 0 )
    return -1;
  v4 = off_1061BE18;
  while ( 1 )
  {
    v5 = sub_1026A890(a2);
    v6 = this[v3];
    if ( v6 == -1 || v4[4 * (this[v3] & 0xFFF) + 2] != v6 >> 12 )
      v7 = 0;
    else
      v7 = v4[4 * (this[v3] & 0xFFF) + 1];
    if ( v7 == v5 )
      break;
    if ( ++v3 >= v9 )
      return -1;
  }
  return v3;
}
