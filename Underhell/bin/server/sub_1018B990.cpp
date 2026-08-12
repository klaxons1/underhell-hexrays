bool __thiscall sub_1018B990(float *this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st4
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  float v11; // [esp+4h] [ebp-18h]
  float v12; // [esp+8h] [ebp-14h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+10h] [ebp-Ch]
  float v15; // [esp+14h] [ebp-8h]
  float v16; // [esp+18h] [ebp-4h]

  v2 = this[4] - this[1];
  v3 = this[13] - this[3];
  v4 = this[5] - this[2];
  v5 = this[14] - this[3];
  v11 = v5 * 0.0 - v4 * v3;
  v12 = v3 * 0.0 - v5 * v2;
  v13 = v2 * v4;
  off_10689714();
  v6 = this[1] - this[4];
  v7 = this[14] - this[6];
  v8 = this[2] - this[5];
  v9 = this[13] - this[6];
  v14 = v9 * 0.0 - v8 * v7;
  v15 = v7 * 0.0 - v9 * v6;
  v16 = v6 * v8;
  off_10689714();
  return v14 * v11 + v15 * v12 + v16 * v13 > *(float *)(dword_106B7A34 + 44);
}
