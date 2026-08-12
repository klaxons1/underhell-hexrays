int __thiscall sub_10118E20(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  bool v5; // zf
  float *v6; // eax
  float v7; // edx
  int result; // eax
  int v9; // esi
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  double v13; // st7
  _BYTE v14[64]; // [esp+0h] [ebp-50h] BYREF
  float v15; // [esp+40h] [ebp-10h]
  float v16; // [esp+44h] [ebp-Ch]
  float v17; // [esp+48h] [ebp-8h]
  _DWORD *v18; // [esp+4Ch] [ebp-4h]

  v4 = this[7];
  v5 = *(_DWORD *)(v4 + 1284) == 0;
  v18 = this;
  if ( v5 )
    v6 = &flt_10459240;
  else
    v6 = (float *)(v4 + 1308);
  v15 = *v6;
  v7 = v6[1];
  v17 = v6[2];
  result = a3;
  v16 = v7;
  if ( a3 > 0 )
  {
    v9 = a2 + 28;
    v10 = a3;
    while ( 1 )
    {
      v11 = this[6];
      if ( v11 && *(_DWORD *)(v11 + 12) != *(_DWORD *)(v11 + 8) )
      {
        v12 = *(_DWORD *)(v11 + 12) - *(_DWORD *)(v11 + 8);
        if ( !v12 )
          goto LABEL_12;
        if ( v12 < 64 )
        {
          *(_DWORD *)(v11 + 8) = *(_DWORD *)(v11 + 12);
LABEL_12:
          Warning("Restore underflow!\n");
          goto LABEL_13;
        }
        memcpy_0(v14, *(const void **)(v11 + 4), sizeof(v14));
        *(_DWORD *)(v11 + 4) += 64;
        *(_DWORD *)(v11 + 8) += 64;
      }
LABEL_13:
      sub_101F17F0(v14);
      v13 = v15 + *(float *)(v9 - 16);
      v9 += 64;
      --v10;
      *(float *)(v9 - 80) = v13;
      *(float *)(v9 - 64) = v16 + *(float *)(v9 - 64);
      *(float *)(v9 - 48) = *(float *)(v9 - 48) + v17;
      if ( !v10 )
        return a3;
      this = v18;
    }
  }
  return result;
}
