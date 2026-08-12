int __thiscall sub_10077340(_DWORD *this, unsigned __int8 *a2)
{
  unsigned __int8 v4; // al
  unsigned int v5; // ecx
  unsigned __int8 v7; // [esp+14h] [ebp+8h]

  v7 = *a2;
  if ( v7 != 0xFF )
  {
    do
    {
      v4 = sub_100765B0(this, v7);
      *(_DWORD *)a2 = v4;
      if ( v4 == 0xFF )
        break;
      v5 = **(_DWORD **)(this[1] + 12 * v4 + 8);
      if ( v5 != -1
        && off_1061BE18[4 * (v5 & 0xFFF) + 2] == v5 >> 12
        && off_1061BE18[4 * (**(_DWORD **)(this[1] + 12 * v4 + 8) & 0xFFF) + 1] )
      {
        return *(_DWORD *)(this[1] + 12 * v4 + 8);
      }
      v7 = *a2;
    }
    while ( *a2 != 0xFF );
  }
  return 0;
}
