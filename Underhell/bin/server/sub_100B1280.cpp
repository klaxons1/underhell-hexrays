int __thiscall sub_100B1280(int *this, float *a2, float a3)
{
  int v4; // edi
  int *v5; // eax
  int v6; // ecx
  int v7; // esi
  double v8; // st6
  double v9; // st5
  unsigned int v11; // eax
  float v12; // [esp+0h] [ebp-14h]
  _DWORD *i; // [esp+10h] [ebp-4h]

  v4 = 0;
  if ( this[18] <= 0 )
    return 0;
  for ( i = this + 2; ; ++i )
  {
    if ( *i != -1 )
    {
      v5 = &off_1061BE18[4 * (*i & 0xFFF) + 1];
      v6 = *i >> 12;
      if ( off_1061BE18[4 * (*i & 0xFFF) + 2] == v6 )
      {
        if ( *v5 )
        {
          v7 = off_1061BE18[4 * (*i & 0xFFF) + 2] == v6 ? *v5 : 0;
          if ( (*(_DWORD *)(v7 + 252) & 0x800) != 0 )
            sub_100DAE60(v7);
          v8 = a2[1] - *(float *)(v7 + 584);
          v9 = *a2 - *(float *)(v7 + 580);
          v12 = v9 * v9 + v8 * v8;
          if ( off_10689708(v12) <= a3 )
            break;
        }
      }
    }
    if ( ++v4 >= this[18] )
      return 0;
  }
  v11 = this[v4 + 2];
  if ( v11 == -1 || off_1061BE18[4 * (this[v4 + 2] & 0xFFF) + 2] != v11 >> 12 )
    return 0;
  else
    return off_1061BE18[4 * (this[v4 + 2] & 0xFFF) + 1];
}
