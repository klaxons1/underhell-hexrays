_DWORD *__thiscall sub_103FC8B0(_DWORD *this, char a2)
{
  _DWORD *v3; // ecx

  v3 = this + 200;
  *v3 = &CGrabController::`vftable';
  sub_103FA2C0(v3, 0);
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
