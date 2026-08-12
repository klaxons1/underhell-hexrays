int __thiscall sub_10257100(unsigned int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int result; // eax

  v2 = *(_DWORD *)(this + 1144);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 1144) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  sub_1010DD80((_DWORD *)(this + 1148), __SPAIR64__(this, v4), 0.0);
  result = *(_DWORD *)(this + 248) >> 7;
  *(_BYTE *)(this + 1140) = 1;
  if ( (result & 1) != 0 )
  {
    sub_100EC3F0((_DWORD *)this, (int)sub_10246D70, 0.0, 0);
    return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  }
  return result;
}
