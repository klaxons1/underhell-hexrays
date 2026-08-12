int __thiscall sub_1024BFC0(int this, int a2)
{
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+4h] [ebp-8h]

  v5 = *(float *)(this + 844);
  *(_BYTE *)(this + 848) = 1;
  v4 = RandomFloat(*(float *)(this + 840), LODWORD(v5)) + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, v4, 0);
}
