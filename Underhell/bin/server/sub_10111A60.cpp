float *__thiscall sub_10111A60(_BYTE *this, float *a2, float *a3)
{
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_10111110(this, a2, v6);
  sub_10424470(this + 8, this + 20, v6, v5);
  return sub_100E8D90(this, v5, a3);
}
