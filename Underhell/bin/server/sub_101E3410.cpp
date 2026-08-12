void __thiscall sub_101E3410(float *this, int a2)
{
  float v3; // [esp+4h] [ebp-4h]

  v3 = this[426];
  this[426] = v3 * 0.125;
  sub_100C8250((int)this, a2, 1);
  this[426] = v3;
}
