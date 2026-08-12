char __thiscall sub_101ABCC0(_DWORD *this)
{
  int v2; // eax
  int v3; // esi
  double v4; // st7
  double v5; // st6
  float *v6; // eax
  double v7; // st6
  double v8; // st5
  double v9; // st7
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  float *v13; // edi

  v2 = this[1];
  if ( v2 )
    v3 = v2 + 5232;
  else
    v3 = 0;
  v4 = 0.0;
  *(float *)(this[2] + 44) = 0.0;
  *(float *)(this[2] + 48) = 0.0;
  *(float *)(this[2] + 52) = 0.0;
  v5 = (*((float *)off_103DC81C + 3) - *(float *)(v3 + 4)) / (*(float *)(v3 + 8) - *(float *)(v3 + 4));
  if ( v5 > 1.0 )
  {
    v5 = 1.0;
    *(_BYTE *)v3 = 0;
LABEL_6:
    v4 = v5;
    goto LABEL_7;
  }
  if ( v5 >= 0.0 )
    goto LABEL_6;
LABEL_7:
  v6 = (float *)this[2];
  v7 = (*(float *)(v3 + 16) - *(float *)(v3 + 28)) * v4 + *(float *)(v3 + 28);
  v8 = (*(float *)(v3 + 12) - *(float *)(v3 + 24)) * v4 + *(float *)(v3 + 24);
  v9 = v4 * (*(float *)(v3 + 20) - *(float *)(v3 + 32)) + *(float *)(v3 + 32);
  v6[38] = v8;
  v6[39] = v7;
  v6[40] = v9;
  if ( !*(_BYTE *)v3 )
  {
    sub_1008FA90(this[1] + 352, 2);
    sub_10035C70((_BYTE *)this[1], 2, 0);
    if ( *(_BYTE *)(v3 + 1) )
    {
      v10 = *(_DWORD *)(v3 + 36);
      if ( v10 != -1
        && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 36) & 0xFFF) + 2) == v10 >> 12
        && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 36) & 0xFFF) + 1) )
      {
        sub_10035C70((_BYTE *)this[1], 9, 0);
        v11 = *(_DWORD *)(v3 + 36);
        if ( v11 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 36) & 0xFFF) + 2) != v11 >> 12 )
          v12 = 0;
        else
          v12 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v3 + 36) & 0xFFF) + 1);
        sub_101ABA00(this, v12);
      }
    }
    v13 = (float *)this[2];
    v13[16] = 0.0;
    v13[17] = 0.0;
    v13[18] = 0.0;
  }
  return *(_BYTE *)v3;
}
