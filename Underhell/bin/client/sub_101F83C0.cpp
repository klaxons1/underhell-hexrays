void __thiscall sub_101F83C0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // edx
  int v4; // edi
  bool v5; // cc
  char v6; // al
  _DWORD *i; // esi
  int v8; // ecx
  float *v9; // edx
  float *v10; // eax
  int v11; // ecx
  float *v12; // edx
  float *v13; // eax
  int v14; // ecx
  float *v15; // edx
  float *v16; // eax
  int v17; // ecx
  float *v18; // edx
  float *v19; // eax
  int v20; // ecx
  float *v21; // edx
  float *v22; // eax
  int v23; // ecx
  float *v24; // edx
  float *v25; // eax
  int v26; // ecx
  float *v27; // edx
  float *v28; // eax
  int v29; // ecx
  float *v30; // edx
  float *v31; // eax
  int v33; // [esp+8h] [ebp+4h]
  int v34; // [esp+Ch] [ebp+8h]

  v3 = this;
  if ( this[1516] )
  {
    v4 = a2;
    v5 = a2 < a2 + a3;
    v34 = a2 + a3;
    if ( v5 )
    {
      v6 = 2;
      v33 = 2;
      for ( i = this + 1613; ; i = this + 1613 )
      {
        while ( 1 )
        {
          if ( ((1 << (v6 - 2)) & v3[1516]) != 0 )
          {
            v8 = v4 & 3;
            v9 = (float *)(*(i - 96) + 4 * (v8 + v4 / 4 * *(i - 32)));
            v10 = (float *)(*(i - 64) + 4 * (v8 + v4 / 4 * *i));
            *v10 = *v9;
            if ( *(i - 32) == 12 )
            {
              v10[4] = v9[4];
              v10[8] = v9[8];
            }
          }
          if ( ((1 << (v33 - 1)) & this[1516]) != 0 )
          {
            v11 = v4 & 3;
            v12 = (float *)(*(i - 95) + 4 * (v11 + v4 / 4 * *(i - 31)));
            v13 = (float *)(*(i - 63) + 4 * (v11 + v4 / 4 * i[1]));
            *v13 = *v12;
            if ( *(i - 31) == 12 )
            {
              v13[4] = v12[4];
              v13[8] = v12[8];
            }
          }
          if ( ((1 << v33) & this[1516]) != 0 )
          {
            v14 = v4 & 3;
            v15 = (float *)(*(i - 94) + 4 * (v14 + v4 / 4 * *(i - 30)));
            v16 = (float *)(*(i - 62) + 4 * (v14 + v4 / 4 * i[2]));
            *v16 = *v15;
            if ( *(i - 30) == 12 )
            {
              v16[4] = v15[4];
              v16[8] = v15[8];
            }
          }
          if ( ((1 << (v33 + 1)) & this[1516]) != 0 )
          {
            v17 = v4 & 3;
            v18 = (float *)(*(i - 93) + 4 * (v17 + v4 / 4 * *(i - 29)));
            v19 = (float *)(*(i - 61) + 4 * (v17 + v4 / 4 * i[3]));
            *v19 = *v18;
            if ( *(i - 29) == 12 )
            {
              v19[4] = v18[4];
              v19[8] = v18[8];
            }
          }
          if ( ((1 << (v33 + 2)) & this[1516]) != 0 )
          {
            v20 = v4 & 3;
            v21 = (float *)(*(i - 92) + 4 * (v20 + v4 / 4 * *(i - 28)));
            v22 = (float *)(*(i - 60) + 4 * (v20 + v4 / 4 * i[4]));
            *v22 = *v21;
            if ( *(i - 28) == 12 )
            {
              v22[4] = v21[4];
              v22[8] = v21[8];
            }
          }
          if ( ((1 << (v33 + 3)) & this[1516]) != 0 )
          {
            v23 = v4 & 3;
            v24 = (float *)(*(i - 91) + 4 * (v23 + v4 / 4 * *(i - 27)));
            v25 = (float *)(*(i - 59) + 4 * (v23 + v4 / 4 * i[5]));
            *v25 = *v24;
            if ( *(i - 27) == 12 )
            {
              v25[4] = v24[4];
              v25[8] = v24[8];
            }
          }
          if ( ((1 << (v33 + 4)) & this[1516]) != 0 )
          {
            v26 = v4 & 3;
            v27 = (float *)(*(i - 90) + 4 * (v26 + v4 / 4 * *(i - 26)));
            v28 = (float *)(*(i - 58) + 4 * (v26 + v4 / 4 * i[6]));
            *v28 = *v27;
            if ( *(i - 26) == 12 )
            {
              v28[4] = v27[4];
              v28[8] = v27[8];
            }
          }
          if ( ((1 << (v33 + 5)) & this[1516]) != 0 )
          {
            v29 = v4 & 3;
            v30 = (float *)(*(i - 89) + 4 * (v29 + v4 / 4 * *(i - 25)));
            v31 = (float *)(*(i - 57) + 4 * (v29 + v4 / 4 * i[7]));
            *v31 = *v30;
            if ( *(i - 25) == 12 )
            {
              v31[4] = v30[4];
              v31[8] = v30[8];
            }
          }
          v6 = v33 + 8;
          i += 8;
          v5 = v33 + 6 < 32;
          v33 += 8;
          if ( !v5 )
            break;
          v3 = this;
        }
        if ( ++v4 >= v34 )
          break;
        v3 = this;
        v6 = 2;
        v33 = 2;
      }
    }
  }
}
