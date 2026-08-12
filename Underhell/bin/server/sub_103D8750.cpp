int __thiscall sub_103D8750(int *this)
{
  float v3; // [esp+0h] [ebp-Ch]

  if ( this[928] )
  {
    sub_1025FAC0(this[928]);
    this[928] = 0;
  }
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0(this, v3, 0);
  return sub_10021F20(this);
}
