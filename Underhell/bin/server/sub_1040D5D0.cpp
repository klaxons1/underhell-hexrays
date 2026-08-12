void __thiscall sub_1040D5D0(float *this, int a2, int a3)
{
  this[145] = *(float *)(dword_106B31C8 + 12);
  this[152] = 45.0;
  this[153] = 0.0;
  this[154] = 0.0;
  if ( a3 )
  {
    if ( a3 == 1 )
      sub_1040D3A0((int)(this - 281), a2);
  }
  else if ( (*(_DWORD *)(this - 219) & 0x800000) == 0 )
  {
    sub_10163300((_DWORD *)this - 281);
    sub_10211780((int)this, a2, 0);
    return;
  }
  sub_10211780((int)this, a2, a3);
}
