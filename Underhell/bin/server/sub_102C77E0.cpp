int __thiscall sub_102C77E0(_DWORD *this, int a2)
{
  double v3; // st7

  if ( (this[62] & 0x2000) != 0 )
    v3 = *(float *)(dword_106DE20C + 44);
  else
    v3 = *(float *)(dword_106DE1C4 + 44);
  sub_102C7580(this, (int)v3);
  this[234] = 0;
  return sub_100EC3F0(this, (int)nullsub_4, 0.0, 0);
}
