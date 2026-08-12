int __thiscall sub_103BF0F0(int this)
{
  bool v3; // zf
  float v4; // [esp+0h] [ebp-Ch]
  float v5; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(this + 3631) )
  {
    *(_BYTE *)(this + 3631) = 0;
    *(_BYTE *)(this + 3628) = 0;
    sub_100285C0((_DWORD *)this, 0, 1);
    sub_100EC3F0((_DWORD *)this, (int)sub_103BEE80, 0.0, 0);
    v4 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0((int *)this, v4, 0);
  }
  else
  {
    v3 = (*(_BYTE *)(this + 248) & 0x20) == 0;
    *(_BYTE *)(this + 3631) = 1;
    if ( !v3 )
      *(_BYTE *)(this + 3628) = 1;
    sub_100EC3F0((_DWORD *)this, (int)sub_103BE7A0, 0.0, 0);
    v5 = *(float *)(dword_106B31C8 + 12) + 0.050000001;
    return sub_100EC4A0((int *)this, v5, 0);
  }
}
