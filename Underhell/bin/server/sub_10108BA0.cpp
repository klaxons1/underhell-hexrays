int __thiscall sub_10108BA0(int this)
{
  double v2; // st7
  float v4; // [esp+0h] [ebp-10h]

  v2 = sub_10108630(this, this + 728);
  if ( *(_BYTE *)(this + 1280) && v2 != *(float *)(this + 1124) )
  {
    v4 = v2;
    sub_10108AE0((int *)(this + 1124), SLOBYTE(v4), 0, this);
  }
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
