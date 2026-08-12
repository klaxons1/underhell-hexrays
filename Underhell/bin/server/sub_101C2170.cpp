int __thiscall sub_101C2170(float *this)
{
  int result; // eax
  double v3; // st7
  float v4[3]; // [esp+8h] [ebp-Ch] BYREF

  result = sub_101C8820((int)this, 0);
  if ( (_BYTE)result )
  {
    sub_101C5210(*(float *)(dword_106B31C8 + 16));
    v3 = *(float *)(dword_106B31C8 + 16);
    v4[0] = this[148] * v3 + this[179];
    v4[1] = this[149] * v3 + this[180];
    v4[2] = v3 * this[150] + this[181];
    return sub_100E10C0((int)this, v4);
  }
  return result;
}
