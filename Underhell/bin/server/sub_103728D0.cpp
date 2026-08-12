int __thiscall sub_103728D0(int this, float *a2, char a3)
{
  float v5; // [esp+0h] [ebp-Ch]

  if ( a3 )
    sub_101AAE70("hunter_flechette_trail_striderbuster", 1, this, -1, 0);
  else
    sub_101AAE70("hunter_flechette_trail", 1, this, -1, 0);
  if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
    sub_100DAE60(this);
  *(float *)(this + 1692) = *(float *)(this + 580);
  *(float *)(this + 1696) = *(float *)(this + 584);
  *(float *)(this + 1700) = *(float *)(this + 588);
  sub_100DD660(this, a2);
  sub_100EC3F0((_DWORD *)this, (int)sub_103709D0, 0.0, 0);
  sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  v5 = *(float *)(dword_106B31C8 + 12) + 0.1;
  return sub_100EC3F0((_DWORD *)this, (int)sub_103727F0, v5, off_1067425C);
}
