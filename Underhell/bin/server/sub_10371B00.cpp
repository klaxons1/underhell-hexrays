int __thiscall sub_10371B00(int this)
{
  float v3; // [esp+0h] [ebp-Ch]

  *(_BYTE *)(this + 4230) = 1;
  sub_101AAE70("blood_drip_synth_01", 4, this, dword_10674304, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC3F0((_DWORD *)this, (int)sub_103717B0, v3, off_10674250);
}
