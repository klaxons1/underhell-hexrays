char *__thiscall sub_101DFFA0(int this)
{
  float v3; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(this + 800) )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_101DF390, 0.0, 0);
    v3 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    sub_100EC4A0((int *)this, v3, 0);
  }
  return sub_100E38F0((float *)this);
}
