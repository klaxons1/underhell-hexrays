int __thiscall sub_102C7640(_DWORD *this)
{
  double v2; // st7

  if ( (this[62] & 0x2000) != 0 )
    v2 = *(float *)(dword_106DE20C + 44);
  else
    v2 = *(float *)(dword_106DE1C4 + 44);
  sub_102C7580(this, (int)v2);
  this[234] = 0;
  return sub_100EC3F0(this, (int)nullsub_4, 0.0, 0);
}
