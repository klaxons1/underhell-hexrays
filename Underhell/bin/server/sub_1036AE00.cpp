int __thiscall sub_1036AE00(float *this)
{
  float v3; // [esp+0h] [ebp-Ch]

  if ( this[911] < (double)*(float *)(dword_106B31C8 + 12) )
  {
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 1212))(this);
    this[911] = *(float *)(dword_106B31C8 + 12) + 0.1;
  }
  if ( ((_BYTE)this[64] & 1) == 0 )
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  sub_100EC3F0(this, (int)sub_10039730, 0.0, 0);
  v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC4A0((int *)this, v3, 0);
}
