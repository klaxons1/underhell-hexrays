void __thiscall sub_101C5210(float *this, float a2)
{
  float v2[3]; // [esp+0h] [ebp-Ch] BYREF

  v2[0] = this[122] * a2 + this[182];
  v2[1] = this[123] * a2 + this[183];
  v2[2] = a2 * this[124] + this[184];
  sub_100E11A0((int)this, v2);
}
