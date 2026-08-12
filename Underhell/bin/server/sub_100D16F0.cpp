int __thiscall sub_100D16F0(_DWORD *this)
{
  int result; // eax
  float v2; // [esp+0h] [ebp-Ch]

  this[49] = sub_100D1280;
  result = dword_106B31C8;
  if ( *(int *)(dword_106B31C8 + 20) > 1 && (this[62] & 0x40000000) != 0 )
  {
    sub_100EC3F0((int)sub_10246D70, 0.0, 0);
    v2 = *(float *)(dword_106B31C8 + 12) + 30.0;
    return sub_100EC4A0(v2, 0);
  }
  return result;
}
