int __thiscall sub_1005BBA0(_DWORD *this)
{
  unsigned int v1; // eax
  int *v2; // ecx
  int v3; // eax

  v1 = this[200];
  if ( v1 == -1 || (v2 = &off_1061BE18[4 * (this[200] & 0xFFF) + 1], v2[1] != v1 >> 12) )
    v3 = 0;
  else
    v3 = *v2;
  sub_1025FAC0(v3);
  sub_100EC3F0((int)sub_10246D70, 0.0, 0);
  return sub_100EC4A0(*(float *)(dword_106B31C8 + 12), 0);
}
