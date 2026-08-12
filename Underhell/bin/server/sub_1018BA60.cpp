bool __thiscall sub_1018BA60(float *this, float *a2)
{
  bool result; // al
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st4
  float v12; // [esp+4h] [ebp-18h]
  float v13; // [esp+8h] [ebp-14h]
  float v14; // [esp+Ch] [ebp-10h]
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+18h] [ebp-4h]

  result = sub_1018B990(this);
  if ( result )
  {
    if ( !sub_1018B990(a2) )
      return 0;
    v4 = this[4] - this[1];
    v5 = this[13] - this[3];
    v6 = this[5] - this[2];
    v7 = this[14] - this[3];
    v12 = v7 * 0.0 - v6 * v5;
    v13 = v5 * 0.0 - v7 * v4;
    v14 = v4 * v6;
    off_10689714();
    v8 = a2[4] - a2[1];
    v9 = a2[13] - a2[3];
    v10 = a2[5] - a2[2];
    v11 = a2[14] - a2[3];
    v15 = v11 * 0.0 - v10 * v9;
    v16 = v9 * 0.0 - v11 * v8;
    v17 = v8 * v10;
    off_10689714();
    return v15 * v12 + v16 * v13 + v17 * v14 > *(float *)(dword_106B7A34 + 44);
  }
  return result;
}
