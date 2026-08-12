void __thiscall sub_10426AA0(float *this)
{
  float v1; // xmm0_4
  float v2; // [esp+0h] [ebp-40h]
  float v3; // [esp+30h] [ebp-10h]

  v3 = this[2] * this[2] + this[1] * this[1] + *this * *this + 0.00000011920929;
  v1 = 1.0 / fsqrt(v3);
  v2 = (float)((float)0.5 * v1) * (float)((float)3.0 - (float)((float)(v3 * v1) * v1));
  *this = *this * v2;
  this[1] = v2 * this[1];
  this[2] = v2 * this[2];
}
