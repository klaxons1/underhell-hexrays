int __thiscall sub_1036A410(int this, float *a2)
{
  sub_10247F40(a2, this, this, *(float *)(dword_106E8284 + 44), 4, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  if ( (*(_DWORD *)(this + 252) & 0x1000) != 0 )
    sub_100DAFD0(this);
  sub_10248690(a2, (float *)(this + 476), (float *)(this + 580), 1.0);
  return (int)a2[13];
}
