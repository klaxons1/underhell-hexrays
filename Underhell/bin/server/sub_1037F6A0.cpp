float *__thiscall sub_1037F6A0(int this, float *a2, float *a3)
{
  double v4; // st7
  float *result; // eax
  double v6; // st6
  double v7; // rt0
  float v8; // [esp+4h] [ebp-18h]
  float v9; // [esp+8h] [ebp-14h]
  float v10; // [esp+Ch] [ebp-10h]
  float v11; // [esp+10h] [ebp-Ch]
  float v12; // [esp+14h] [ebp-8h]
  float v13; // [esp+18h] [ebp-4h]

  v11 = *a3 - *(float *)(this + 716);
  v12 = a3[1] - *(float *)(this + 720);
  v13 = a3[2] - *(float *)(this + 724);
  off_10689714();
  v4 = *(float *)(this + 800);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  result = a2;
  v9 = v12 * v4;
  v6 = v9 - *(float *)(this + 480);
  v10 = v4 * v13;
  v7 = v10 - *(float *)(this + 484);
  v8 = v11 * v4;
  *a2 = v8 - *(float *)(this + 476);
  a2[1] = v6;
  a2[2] = v7;
  return result;
}
