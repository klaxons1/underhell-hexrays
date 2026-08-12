float *__thiscall sub_1014B360(float *this, float *a2, float *a3, float *a4)
{
  double v5; // st7
  float *result; // eax
  double v7; // st6
  double v8; // st5
  _BYTE v9[12]; // [esp+4h] [ebp-3Ch] BYREF
  float v10[3]; // [esp+10h] [ebp-30h] BYREF
  float v11[3]; // [esp+1Ch] [ebp-24h] BYREF
  float v12[3]; // [esp+28h] [ebp-18h] BYREF
  float v13; // [esp+34h] [ebp-Ch]
  float v14; // [esp+38h] [ebp-8h]
  float v15; // [esp+3Ch] [ebp-4h]

  v13 = *a2 - this[251];
  v14 = a2[1] - this[252];
  v15 = a2[2] - this[253];
  v12[0] = this[248] * -1.0;
  v12[1] = this[249] * -1.0;
  v12[2] = -1.0 * this[250];
  sub_10422540(v12, v9);
  sub_104222B0(v9, 0, v11, v10);
  v5 = v13;
  result = a4;
  v7 = v14;
  v8 = v15;
  *a3 = (v11[2] * v15 + v11[1] * v14 + v11[0] * v13) / this[246];
  *a4 = (v8 * v10[2] + v7 * v10[1] + v5 * v10[0]) / this[247];
  return result;
}
