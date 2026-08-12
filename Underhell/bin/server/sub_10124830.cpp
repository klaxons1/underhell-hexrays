int __thiscall sub_10124830(int this)
{
  float v3; // [esp+8h] [ebp-Ch]

  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  sub_102651C0(this + 580, this + 800, 0, -1, 0.0, 0, 0, 0);
  v3 = *(float *)(this + 812) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v3, 0);
}
