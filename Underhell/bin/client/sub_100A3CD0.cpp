// bad sp value at call has been detected, the output may be wrong!
int __userpurge sub_100A3CD0@<eax>(
        float *a1@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        float *a5,
        float a6,
        float a7,
        int a8)
{
  float *v9; // esi
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st6
  double v15; // st3
  double v16; // st6
  double v17; // st7
  float v21[20]; // [esp+2Ch] [ebp-CCh] BYREF
  _BYTE v22[12]; // [esp+7Ch] [ebp-7Ch] BYREF
  float v23[10]; // [esp+88h] [ebp-70h] BYREF
  char v24; // [esp+B3h] [ebp-45h]
  float v25; // [esp+B4h] [ebp-44h]
  _DWORD v26[3]; // [esp+D4h] [ebp-24h] BYREF
  float v27; // [esp+E0h] [ebp-18h] BYREF
  float v28; // [esp+E4h] [ebp-14h]
  float v29; // [esp+E8h] [ebp-10h]
  _DWORD v30[3]; // [esp+ECh] [ebp-Ch] BYREF
  _UNKNOWN *retaddr; // [esp+F8h] [ebp+0h]

  v30[0] = a2;
  v30[1] = retaddr;
  a1[1] = *a5;
  v9 = a1 + 1;
  a1[2] = a5[1];
  a1[3] = a5[2];
  v27 = a1[1];
  v28 = a1[2];
  v29 = a1[3] + 512.0;
  sub_1000E430(v21, a1 + 1, &v27);
  sub_1012D400(0, 0);
  (*(void (__thiscall **)(int, float *, int, _DWORD *, _BYTE *, int, int))(*(_DWORD *)dword_104131A0 + 16))(
    dword_104131A0,
    v21,
    16432,
    v26,
    v22,
    a3,
    a4);
  if ( *(_DWORD *)(dword_10439134 + 48) )
    sub_10130AC0((int)v22, (int)v23, 255, 0, 0, 1, 5.0);
  if ( v24 )
  {
    v13 = v25;
    if ( 0.0 == v25 )
    {
      a1[13] = *v9;
      a1[14] = v9[1];
      a1[15] = v9[2];
      v12 = 512.0;
    }
    else
    {
      v14 = 0.0 * v13 + v9[1];
      v15 = v9[2];
      a1[13] = 0.0 * v13 + *v9;
      a1[14] = v14;
      v16 = v13 * 512.0 + v15;
      v12 = v13 * 512.0;
      a1[15] = v16;
    }
  }
  else
  {
    v10 = *v9;
    v28 = COERCE_FLOAT(v22);
    v27 = v10;
    v11 = v9[1];
    v27 = 0.0;
    v28 = v11;
    v26[2] = 0;
    v29 = v9[2] - 512.0;
    sub_1000FCE0((int)v30, (int)v9, v9, &v27, 16432, 0, 0, SLODWORD(v28));
    if ( v23[8] >= 1.0 )
    {
      a1[13] = *v9;
      a1[14] = v9[1];
      a1[15] = v9[2];
    }
    else
    {
      a1[13] = v23[0];
      a1[14] = v23[1];
      a1[15] = v23[2];
    }
    v12 = 0.0;
  }
  a1[16] = v12;
  v17 = *v9;
  LODWORD(v28) = a1 + 20;
  v27 = v17;
  v28 = v9[1];
  v29 = v9[2] + 32.0;
  sub_100A65B0(SLOBYTE(v27), LODWORD(v28), LODWORD(v29), a1 + 17, LODWORD(v28));
  return sub_100A3C60(a1, a5, a6, a7, a8);
}
