int __thiscall sub_103BEA70(int this, int a2)
{
  bool v3; // zf
  float v5; // [esp+0h] [ebp-Ch]

  v3 = (*(_BYTE *)(this + 248) & 0x20) == 0;
  *(_BYTE *)(this + 3631) = 1;
  if ( !v3 )
    *(_BYTE *)(this + 3628) = 1;
  sub_100EC3F0((_DWORD *)this, (int)sub_103BE7A0, 0.0, 0);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
  return sub_100EC4A0((int *)this, v5, 0);
}
