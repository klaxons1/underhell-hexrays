char __cdecl sub_10100980(_DWORD *a1, float a2, float a3, int a4, int a5)
{
  double v6; // st7
  float v7; // [esp+4h] [ebp-48h]
  int v8; // [esp+10h] [ebp-3Ch] BYREF
  float v9; // [esp+14h] [ebp-38h]
  int v10[3]; // [esp+1Ch] [ebp-30h] BYREF
  int v11[3]; // [esp+28h] [ebp-24h] BYREF
  int v12[3]; // [esp+34h] [ebp-18h] BYREF
  int v13[3]; // [esp+40h] [ebp-Ch] BYREF

  if ( !a1[5] )
    return 0;
  sub_10100760(a1, a2, (float *)v12, (float *)&v8);
  sub_10100760(a1, a3, (float *)v13, (float *)v10);
  *(float *)v11 = *(float *)v13 - *(float *)v12;
  *(float *)&v11[1] = *(float *)&v13[1] - *(float *)&v12[1];
  *(float *)&v11[2] = *(float *)&v13[2] - *(float *)&v12[2];
  v6 = v9;
  *(float *)(a5 + 4) = *(float *)&v10[1] - v9;
  v7 = -v6;
  sub_10422AF0((int)v11, v7, a4);
  return 1;
}
