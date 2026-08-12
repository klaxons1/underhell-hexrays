_DWORD *__thiscall sub_1017DCE0(_DWORD *this, char a2)
{
  _DWORD *v3; // esi
  int i; // edi

  v3 = this + 318;
  sub_1010BB10(this + 318);
  for ( i = 15; i >= 0; --i )
  {
    v3 -= 6;
    sub_1010BB10(v3);
  }
  sub_100DF1D0(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360((int)this);
  return this;
}
