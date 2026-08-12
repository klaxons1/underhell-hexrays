int __thiscall sub_100FFF00(char *this, float *a2)
{
  char *v2; // edi
  double v3; // st5
  double v4; // st7
  double v5; // st6
  double v6; // rt1
  double v7; // st7
  double v8; // rt2
  _BYTE v10[48]; // [esp+8h] [ebp-54h] BYREF
  char v11[12]; // [esp+38h] [ebp-24h] BYREF
  float v12[3]; // [esp+44h] [ebp-18h] BYREF
  float v13; // [esp+50h] [ebp-Ch] BYREF
  float v14; // [esp+54h] [ebp-8h]
  float v15; // [esp+58h] [ebp-4h]

  v2 = this + 108;
  sub_10422FA0(this + 108, v10);
  sub_10421CE0(v10, 1, &v13);
  v3 = a2[2] * v14 - a2[1] * v15;
  v4 = v15 * *a2 - a2[2] * v13;
  v5 = v13 * a2[1] - v14 * *a2;
  v12[0] = v3;
  v12[1] = v4;
  v12[2] = v5;
  v6 = a2[1] * v5 - a2[2] * v4;
  v7 = v4 * *a2 - v3 * a2[1];
  v8 = a2[2] * v3 - v5 * *a2;
  v13 = v6;
  v14 = v8;
  v15 = v7;
  sub_10421D00(v12, 0, v10);
  sub_10421D00(&v13, 1, v10);
  sub_10421D00(a2, 2, v10);
  return sub_10424D60(v10, v2, v11);
}
