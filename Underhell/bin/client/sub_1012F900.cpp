_DWORD *__thiscall sub_1012F900(_DWORD *this, char a2)
{
  _DWORD *v3; // esi
  int i; // edi

  *this = &CBitmapButton::`vftable';
  v3 = this + 163;
  for ( i = 3; i >= 0; --i )
  {
    v3 -= 18;
    sub_1025DD20(v3);
  }
  sub_1025AD60(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
