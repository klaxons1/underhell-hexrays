float *__thiscall sub_103DAA00(float *this, float *a2, float *a3, float a4, float *a5)
{
  double v5; // st6
  double v6; // st7
  double v7; // st6
  double v8; // st7
  float *result; // eax
  int v10[4]; // [esp+8h] [ebp-6Ch] BYREF
  int v11[4]; // [esp+18h] [ebp-5Ch] BYREF
  int v12[4]; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v13[12]; // [esp+38h] [ebp-3Ch] BYREF
  _BYTE v14[12]; // [esp+44h] [ebp-30h] BYREF
  float v15[3]; // [esp+50h] [ebp-24h] BYREF
  float v16; // [esp+5Ch] [ebp-18h] BYREF
  float v17; // [esp+60h] [ebp-14h]
  float v18; // [esp+64h] [ebp-10h]
  float v19; // [esp+68h] [ebp-Ch] BYREF
  float v20; // [esp+6Ch] [ebp-8h]
  float v21; // [esp+70h] [ebp-4h]

  sub_103D9500(this, &v16);
  v5 = a3[1] - v17;
  v6 = a3[2] - v18;
  v15[0] = *a3 - v16;
  v15[1] = v5;
  v15[2] = v6;
  off_10689714();
  sub_10422540(v15, v13);
  v7 = a2[1] - v17;
  v8 = a2[2] - v18;
  v19 = *a2 - v16;
  v20 = v7;
  v21 = v8;
  off_10689714();
  sub_10422540(&v19, v14);
  sub_10423260(v13, v12);
  sub_10423260(v14, v11);
  sub_104251E0((int)v11, (int)v12, a4, (int)v10);
  sub_104252C0(v10, v14);
  sub_10422220(v14, &v19);
  result = a5;
  *a5 = v19;
  a5[1] = v20;
  a5[2] = v21;
  return result;
}
