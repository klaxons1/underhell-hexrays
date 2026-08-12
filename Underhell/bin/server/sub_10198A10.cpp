float *__usercall sub_10198A10@<eax>(int a1@<ebp>, float *a2, int a3, float a4, float a5, int a6, float *a7)
{
  float v7; // ecx
  float v8; // edx
  float *v9; // edi
  double v10; // st6
  double v11; // st6
  double v12; // st5
  double v13; // st4
  float *v14; // eax
  double v16; // st7
  double v17; // st6
  float v18; // [esp+10h] [ebp-F4h]
  float v19; // [esp+14h] [ebp-F0h]
  _BYTE v20[12]; // [esp+20h] [ebp-E4h] BYREF
  float v21[20]; // [esp+2Ch] [ebp-D8h] BYREF
  int v22; // [esp+7Ch] [ebp-88h] BYREF
  float v23[16]; // [esp+88h] [ebp-7Ch] BYREF
  char v24; // [esp+C8h] [ebp-3Ch]
  bool v25; // [esp+C9h] [ebp-3Bh]
  int v26; // [esp+E4h] [ebp-20h]
  int v27; // [esp+E8h] [ebp-1Ch]
  float v28; // [esp+ECh] [ebp-18h] BYREF
  float v29; // [esp+F0h] [ebp-14h]
  float v30; // [esp+F4h] [ebp-10h]
  int v31; // [esp+F8h] [ebp-Ch]
  void *v32; // [esp+FCh] [ebp-8h]
  void *retaddr; // [esp+104h] [ebp+0h]

  v31 = a1;
  v32 = retaddr;
  v7 = a2[1];
  v8 = a2[2];
  v9 = 0;
  v28 = *a2;
  v29 = v7;
  v30 = v8;
  v26 = (int)(a4 * 0.039999999 + 0.5);
  v27 = 1;
  if ( v26 >= 1 )
  {
    while ( 1 )
    {
      switch ( a3 )
      {
        case 0:
          v29 = v29 - 25.0;
          break;
        case 1:
          v10 = v28 + 25.0;
          goto LABEL_7;
        case 2:
          v29 = v29 + 25.0;
          break;
        case 3:
          v10 = v28 - 25.0;
LABEL_7:
          v28 = v10;
          break;
        default:
          break;
      }
      v11 = v28 - *a2;
      v23[4] = v11;
      v12 = v29 - a2[1];
      v23[5] = v12;
      v13 = v30 - a2[2];
      v23[6] = v13;
      v25 = 0.0 != v11 * v11 + v12 * v12 + v13 * v13;
      v23[14] = 0.0;
      v23[13] = 0.0;
      v23[12] = 0.0;
      v24 = 1;
      v23[10] = 0.0;
      v23[9] = 0.0;
      v23[8] = 0.0;
      v23[0] = *a2;
      v23[1] = a2[1];
      v23[2] = a2[2];
      sub_10265570(a6, 0);
      (*(void (__thiscall **)(int, float *, int, int *, _BYTE *))(*(_DWORD *)dword_106B31F4 + 16))(
        dword_106B31F4,
        v23,
        81931,
        &v22,
        v20);
      if ( *(_DWORD *)(dword_106CE63C + 48) )
        sub_101A0AD0((int)v20, (int)v21, 255, 0, 0, 1, 5.0);
      if ( v21[8] < 1.0 )
        break;
      v14 = (float *)sub_1019E380((int)&v28, a5);
      v9 = v14;
      if ( v14 )
      {
        if ( a7 )
        {
          v16 = v28;
          *a7 = v28;
          v17 = v29;
          a7[1] = v29;
          v19 = v17;
          v18 = v16;
          sub_1018AE30(v14, v18, v19);
          a7[2] = v16;
        }
        return v9;
      }
      if ( ++v27 > v26 )
        return 0;
    }
  }
  return v9;
}
