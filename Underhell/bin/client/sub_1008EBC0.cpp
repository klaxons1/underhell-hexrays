float *__thiscall sub_1008EBC0(_BYTE *this, float *a2, float *a3)
{
  float v5[3]; // [esp+4h] [ebp-18h] BYREF
  float v6[3]; // [esp+10h] [ebp-Ch] BYREF

  sub_1008E5E0(this, a2, v6);
  sub_101F0110(this + 8, this + 20, v6, v5);
  return sub_1000EEE0(this, v5, a3);
}
