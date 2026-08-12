int __thiscall sub_10305CC0(int this, int a2)
{
  int v3; // eax
  double v4; // st7

  v3 = sub_100BDCE0(this, 62);
  sub_100C1170(this, v3);
  *(_DWORD *)(this + 1144) = 1;
  *(float *)(this + 1136) = *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v4 = *(float *)(a2 + 8);
  else
    v4 = 0.0;
  *(float *)(this + 1128) = v4 + *(float *)(dword_106B31C8 + 12);
  return sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
}
