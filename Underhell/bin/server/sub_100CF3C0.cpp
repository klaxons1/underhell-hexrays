_DWORD *__thiscall sub_100CF3C0(_DWORD *this, char a2)
{
  *this = &CBaseCombatCharacter::`vftable';
  sub_100CF150((int)this);
  sub_102375F0(this + 440);
  sub_100F1270(this);
  if ( (a2 & 1) != 0 )
    sub_100D6360(this);
  return this;
}
