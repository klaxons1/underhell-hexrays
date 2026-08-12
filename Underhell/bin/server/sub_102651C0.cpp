int __cdecl sub_102651C0(float *a1, float *a2, int a3, int a4, float a5, char a6, int a7, int a8)
{
  double v8; // st7
  float v10[12]; // [esp+0h] [ebp-60h] BYREF
  int v11; // [esp+30h] [ebp-30h]
  int v12; // [esp+34h] [ebp-2Ch]
  float v13; // [esp+38h] [ebp-28h]
  float v14; // [esp+3Ch] [ebp-24h]
  float v15; // [esp+40h] [ebp-20h]
  int v16; // [esp+44h] [ebp-1Ch]
  __int16 v17; // [esp+48h] [ebp-18h]
  int v18; // [esp+4Ch] [ebp-14h]
  int v19; // [esp+50h] [ebp-10h]
  int v20; // [esp+54h] [ebp-Ch]
  char v21; // [esp+58h] [ebp-8h]

  v10[6] = 0.0;
  v10[7] = 0.0;
  v17 = 0;
  v10[8] = 0.0;
  v10[9] = 0.0;
  v10[10] = 0.0;
  v10[11] = 0.0;
  v16 = 0;
  v14 = 0.0;
  v18 = 0;
  v15 = 0.0;
  v19 = 0;
  v8 = *a1;
  v21 = 0;
  v10[3] = v8;
  v12 = a3;
  v10[4] = a1[1];
  v10[5] = a1[2];
  v10[0] = *a2;
  v10[1] = a2[1];
  v10[2] = a2[2];
  v20 = a8;
  v13 = a5;
  v11 = a6 != 0;
  if ( a4 != -1 )
  {
    v11 |= 2u;
    v16 = a4;
  }
  if ( a7 )
    return sub_1028E890(a7, v10);
  else
    return sub_1028E890("Tracer", v10);
}
