int __thiscall sub_101FEE30(int *this)
{
  float v3; // [esp+0h] [ebp-Ch]

  nullsub_4();
  this[63] |= 0x80u;
  sub_100D8500(this);
  sub_100EC3F0(this, (int)sub_103D79E0, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 1.0;
  return sub_100EC4A0(this, v3, 0);
}
