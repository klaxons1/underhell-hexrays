char __cdecl sub_1001DF90(int a1, int a2, float a3, float a4, int a5, float *a6, float *a7)
{
  double v7; // st7
  int v10; // ecx
  int v11; // ebx
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st7
  double v16; // rt0
  double v17; // st7
  double v18; // rt1
  double v19; // rt2
  int v21[4]; // [esp+1Ch] [ebp-3Ch] BYREF
  float v22[4]; // [esp+2Ch] [ebp-2Ch] BYREF
  int v23; // [esp+3Ch] [ebp-1Ch] BYREF
  float v24; // [esp+40h] [ebp-18h]
  float v25; // [esp+44h] [ebp-14h]
  int v26; // [esp+48h] [ebp-10h] BYREF
  float v27; // [esp+4Ch] [ebp-Ch]
  float v28; // [esp+50h] [ebp-8h]
  int v29; // [esp+54h] [ebp-4h]
  char v30; // [esp+77h] [ebp+1Fh]
  int v31; // [esp+78h] [ebp+20h]

  v29 = sub_10127960(a2);
  sub_1001D990(a1, v29, a2, a5, v21, v22);
  v7 = 0.0;
  *a6 = 0.0;
  a6[1] = 0.0;
  a6[2] = 0.0;
  *a7 = 0.0;
  v10 = 0;
  a7[1] = 0.0;
  v30 = 0;
  a7[2] = 0.0;
  v31 = 0;
  do
  {
    if ( v7 == *(float *)((char *)v22 + v10) )
      goto LABEL_6;
    v11 = *(int *)((char *)v21 + v10);
    *(float *)&v26 = v7;
    v27 = v7;
    v28 = v7;
    *(float *)&v23 = v7;
    v24 = v7;
    v25 = v7;
    if ( sub_1001DF00((_DWORD *)v11, a3, a4, (int)&v26, (int)&v23) )
    {
      v12 = *(float *)((char *)v22 + v31);
      v30 = 1;
      v13 = *(float *)&v26 * v12;
      v14 = v27 * v12;
      v15 = v12 * v28 + a6[2];
      v16 = v14 + a6[1];
      *a6 = v13 + *a6;
      a6[1] = v16;
      a6[2] = v15;
      v17 = *(float *)((char *)v22 + v31);
      v18 = v24 * v17 + a7[1];
      v19 = v17 * v25 + a7[2];
      *a7 = *(float *)&v23 * v17 + *a7;
      a7[1] = v18;
      a7[2] = v19;
LABEL_5:
      v7 = 0.0;
      goto LABEL_6;
    }
    if ( (*(_BYTE *)(v11 + 12) & 4) != 0 || *(_DWORD *)(v11 + 20) )
      goto LABEL_5;
    v7 = 0.0;
    if ( *(float *)(v29 + *(_DWORD *)(v29 + 156)) > 0.0 )
      v30 = 1;
LABEL_6:
    v10 = v31 + 4;
    v31 = v10;
  }
  while ( v10 < 16 );
  return v30;
}
