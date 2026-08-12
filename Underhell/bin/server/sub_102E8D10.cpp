char __thiscall sub_102E8D10(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  double v4; // st7
  double v5; // st6
  unsigned int v6; // eax
  int *v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  float *v10; // eax
  double v11; // st6
  double v12; // st5
  double v13; // st7
  int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // ecx
  float *v18; // eax

  v2 = this[1];
  if ( v2 )
    v3 = v2 + 5148;
  else
    v3 = 0;
  v4 = 0.0;
  *(float *)(this[2] + 44) = 0.0;
  *(float *)(this[2] + 48) = 0.0;
  *(float *)(this[2] + 52) = 0.0;
  v5 = (*(float *)(dword_106B31C8 + 12) - *(float *)(v3 + 4)) / (*(float *)(v3 + 8) - *(float *)(v3 + 4));
  if ( v5 <= 1.0 )
  {
    if ( v5 >= 0.0 )
      v4 = v5;
  }
  else
  {
    *(_BYTE *)v3 = 0;
    v6 = *(_DWORD *)(v3 + 40);
    if ( v6 != -1 )
    {
      v7 = &off_1061BE18[4 * (*(_DWORD *)(v3 + 40) & 0xFFF) + 1];
      v8 = v6 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(v3 + 40) & 0xFFF) + 2] == v8 )
      {
        if ( *v7 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(v3 + 40) & 0xFFF) + 2] == v8 )
            v9 = *v7;
          else
            v9 = 0;
          sub_1025FAC0(v9);
          *(_DWORD *)(v3 + 40) = -1;
        }
      }
    }
    v4 = 1.0;
  }
  v10 = (float *)this[2];
  v11 = (*(float *)(v3 + 16) - *(float *)(v3 + 28)) * v4 + *(float *)(v3 + 28);
  v12 = (*(float *)(v3 + 12) - *(float *)(v3 + 24)) * v4 + *(float *)(v3 + 24);
  v13 = v4 * (*(float *)(v3 + 20) - *(float *)(v3 + 32)) + *(float *)(v3 + 32);
  v10[38] = v12;
  v10[39] = v11;
  v10[40] = v13;
  if ( !*(_BYTE *)v3 )
  {
    sub_10112C00(this[1] + 320, 2);
    sub_100E0970(this[1], v14, 2, 0);
    if ( *(_BYTE *)(v3 + 1) )
    {
      v15 = *(_DWORD *)(v3 + 36);
      if ( v15 != -1
        && off_1061BE18[4 * (*(_DWORD *)(v3 + 36) & 0xFFF) + 2] == v15 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(v3 + 36) & 0xFFF) + 1] )
      {
        sub_100E0970(this[1], (int)off_1061BE18, 9, 0);
        v16 = *(_DWORD *)(v3 + 36);
        if ( v16 == -1 || off_1061BE18[4 * (*(_DWORD *)(v3 + 36) & 0xFFF) + 2] != v16 >> 12 )
          v17 = 0;
        else
          v17 = off_1061BE18[4 * (*(_DWORD *)(v3 + 36) & 0xFFF) + 1];
        sub_102E8350(this, v17);
      }
    }
    v18 = (float *)this[2];
    v18[16] = 0.0;
    v18[17] = 0.0;
    v18[18] = 0.0;
  }
  return *(_BYTE *)v3;
}
