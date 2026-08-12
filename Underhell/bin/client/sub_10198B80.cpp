int __thiscall sub_10198B80(int this, char a2)
{
  *(float *)(this + 80) = 0.0;
  *(_DWORD *)this = &C_StriderFX::`vftable';
  *(_DWORD *)(this + 4) = &C_StriderFX::`vftable';
  sub_10179170(this);
  sub_10179220((_DWORD *)this);
  if ( (a2 & 1) != 0 )
    sub_10034930(this);
  return this;
}
