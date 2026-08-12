void *__thiscall sub_10118720(_DWORD *this, char *Src, char *a3)
{
  _DWORD *v3; // esi
  int v4; // eax
  bool v5; // zf
  float *v6; // eax
  float v7; // ecx
  float v8; // edx
  float v9; // eax
  void *result; // eax
  char *v11; // edi
  int v12; // esi
  _BYTE v13[48]; // [esp+4h] [ebp-4Ch] BYREF
  float v14; // [esp+34h] [ebp-1Ch]
  float v15; // [esp+38h] [ebp-18h]
  float v16; // [esp+3Ch] [ebp-14h]
  float v17; // [esp+40h] [ebp-10h] BYREF
  float v18; // [esp+44h] [ebp-Ch]
  float v19; // [esp+48h] [ebp-8h]
  _DWORD *v20; // [esp+4Ch] [ebp-4h]

  v3 = this;
  v4 = this[7];
  v5 = *(_DWORD *)(v4 + 1284) == 0;
  v20 = this;
  if ( v5 )
    v6 = &flt_10459240;
  else
    v6 = (float *)(v4 + 1308);
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v17 = v7;
  v18 = v8;
  v14 = -v7;
  v19 = v9;
  result = a3;
  v15 = -v8;
  v16 = -v19;
  if ( (int)a3 > 0 )
  {
    v11 = Src;
    while ( 1 )
    {
      sub_101ED9E0(v11, v13);
      sub_101EDA00(v11, 3, &v17);
      v17 = v17 + v14;
      v18 = v18 + v15;
      v19 = v19 + v16;
      result = (void *)sub_101EDA20(&v17, 3, v13);
      v12 = v3[6];
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 12) - *(_DWORD *)(v12 + 8) >= 48 )
        {
          result = memcpy_0(*(void **)(v12 + 4), Src, 0x30u);
          *(_DWORD *)(v12 + 4) += 48;
          *(_DWORD *)(v12 + 8) += 48;
        }
        else
        {
          *(_DWORD *)(v12 + 8) = *(_DWORD *)(v12 + 12);
          result = (void *)Warning("Save/Restore overflow!\n");
        }
      }
      v11 += 48;
      if ( !--a3 )
        break;
      v3 = v20;
    }
  }
  return result;
}
