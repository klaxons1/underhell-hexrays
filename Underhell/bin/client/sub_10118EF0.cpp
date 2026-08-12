int __thiscall sub_10118EF0(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // eax
  bool v5; // zf
  float *v6; // eax
  float v7; // edx
  int result; // eax
  int v10; // ebx
  int v11; // esi
  int v12; // eax
  _BYTE v13[48]; // [esp+0h] [ebp-4Ch] BYREF
  float v14; // [esp+30h] [ebp-1Ch]
  float v15; // [esp+34h] [ebp-18h]
  float v16; // [esp+38h] [ebp-14h]
  float v17; // [esp+3Ch] [ebp-10h] BYREF
  float v18; // [esp+40h] [ebp-Ch]
  float v19; // [esp+44h] [ebp-8h]
  _DWORD *v20; // [esp+48h] [ebp-4h]

  v4 = this[7];
  v5 = *(_DWORD *)(v4 + 1284) == 0;
  v20 = this;
  if ( v5 )
    v6 = &flt_10459240;
  else
    v6 = (float *)(v4 + 1308);
  v14 = *v6;
  v7 = v6[1];
  v16 = v6[2];
  result = a3;
  v15 = v7;
  if ( a3 > 0 )
  {
    v10 = a3;
    while ( 1 )
    {
      v11 = this[6];
      if ( v11 && *(_DWORD *)(v11 + 12) != *(_DWORD *)(v11 + 8) )
      {
        v12 = *(_DWORD *)(v11 + 12) - *(_DWORD *)(v11 + 8);
        if ( !v12 )
          goto LABEL_12;
        if ( v12 < 48 )
        {
          *(_DWORD *)(v11 + 8) = *(_DWORD *)(v11 + 12);
LABEL_12:
          Warning("Restore underflow!\n");
          goto LABEL_13;
        }
        memcpy_0(v13, *(const void **)(v11 + 4), sizeof(v13));
        *(_DWORD *)(v11 + 4) += 48;
        *(_DWORD *)(v11 + 8) += 48;
      }
LABEL_13:
      sub_101ED9E0(v13, a2);
      sub_101EDA00(v13, 3, &v17);
      v17 = v14 + v17;
      v18 = v15 + v18;
      v19 = v16 + v19;
      sub_101EDA20(&v17, 3, a2);
      a2 += 48;
      if ( !--v10 )
        return a3;
      this = v20;
    }
  }
  return result;
}
