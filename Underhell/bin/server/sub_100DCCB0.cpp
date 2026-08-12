float *__thiscall sub_100DCCB0(float *this, float *a2)
{
  float v2; // eax
  float v4[3]; // [esp+0h] [ebp-Ch] BYREF

  v4[0] = *a2;
  v2 = a2[2];
  v4[1] = a2[1];
  v4[2] = v2;
  return sub_100D9710(this + 116, v4);
}
