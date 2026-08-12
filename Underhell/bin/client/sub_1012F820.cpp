_DWORD *__thiscall sub_1012F820(_DWORD *this, int a2, char *Source, int a4)
{
  _DWORD *v5; // esi
  int i; // ebx

  sub_1025C5C0(a2, Source, a4, 0, 0);
  *this = &CBitmapButton::`vftable';
  v5 = this + 91;
  for ( i = 3; i >= 0; --i )
  {
    sub_1012F9B0(v5);
    v5 += 18;
  }
  sub_10239D10(0);
  this[163] = 0;
  return this;
}
