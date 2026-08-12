int __thiscall sub_10028580(_BYTE *this)
{
  float v3; // [esp+0h] [ebp-Ch]

  if ( (this[256] & 1) != 0 )
  {
    sub_100EC3F0(0, 0.0, 0);
    return sub_100BF5F0(this);
  }
  else
  {
    v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
    return sub_100EC4A0(v3, 0);
  }
}
