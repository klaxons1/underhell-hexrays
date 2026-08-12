int __thiscall sub_100B1370(_DWORD *this, float *a2)
{
  int result; // eax
  int v3; // ebx
  int *v4; // edx
  _DWORD *v5; // edi
  int v6; // esi
  double v7; // st4
  double v8; // st6
  double v9; // st4
  double v10; // st5
  double v11; // st6
  double v12; // st7
  int v14; // [esp+8h] [ebp-8h]
  float v15; // [esp+Ch] [ebp-4h]

  result = 0;
  v15 = 3.4028235e38;
  v3 = 0;
  v14 = 0;
  if ( (int)this[18] > 0 )
  {
    v4 = off_1061BE18;
    v5 = this + 2;
    do
    {
      if ( *v5 == -1 || v4[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 )
        v6 = 0;
      else
        v6 = v4[4 * (*v5 & 0xFFF) + 1];
      if ( (*(_DWORD *)(v6 + 252) & 0x800) != 0 )
      {
        sub_100DAE60(v6);
        v4 = off_1061BE18;
      }
      v7 = *(float *)(v6 + 584) - a2[1];
      v8 = v7 * v7;
      v9 = *(float *)(v6 + 580) - *a2;
      v10 = v8;
      v11 = *(float *)(v6 + 588) - a2[2];
      v12 = v9 * v9 + v10 + v11 * v11;
      if ( v15 > v12 )
      {
        v15 = v12;
        if ( *v5 == -1 || v4[4 * (*v5 & 0xFFF) + 2] != *v5 >> 12 )
          v14 = 0;
        else
          v14 = v4[4 * (*v5 & 0xFFF) + 1];
      }
      ++v3;
      ++v5;
    }
    while ( v3 < this[18] );
    return v14;
  }
  return result;
}
