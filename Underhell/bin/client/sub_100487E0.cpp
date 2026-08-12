_DWORD *__thiscall sub_100487E0(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[364];
  *this = &C_ColorCorrectionVolume::`vftable';
  this[1] = &C_ColorCorrectionVolume::`vftable';
  this[2] = &C_ColorCorrectionVolume::`vftable';
  this[3] = &C_ColorCorrectionVolume::`vftable';
  sub_10091F70(v3);
  sub_1003D350((int)this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
