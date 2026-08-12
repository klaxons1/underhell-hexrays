int __thiscall sub_10180DE0(int this)
{
  int result; // eax
  float v3; // [esp+0h] [ebp-Ch]

  sub_100E38F0((float *)this);
  result = sub_1010BBC0((_DWORD *)(this + 824));
  if ( result > 0 )
  {
    v3 = *(float *)(dword_106B31C8 + 12) + 0.01;
    return sub_100EC4A0((int *)this, v3, 0);
  }
  return result;
}
