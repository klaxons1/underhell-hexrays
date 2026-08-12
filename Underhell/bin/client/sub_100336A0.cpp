_DWORD *__thiscall sub_100336A0(_DWORD *this)
{
  _DWORD *v2; // eax
  int v3; // edx

  sub_100408E0();
  *this = &C_BaseCombatCharacter::`vftable';
  this[1] = &C_BaseCombatCharacter::`vftable';
  this[2] = &C_BaseCombatCharacter::`vftable';
  this[3] = &C_BaseCombatCharacter::`vftable';
  memset(this + 788, 0xFFu, 0xC0u);
  this[836] = -1;
  v2 = this + 758;
  v3 = 8;
  do
  {
    if ( *(v2 - 2) )
      *(v2 - 2) = 0;
    if ( *(v2 - 1) )
      *(v2 - 1) = 0;
    if ( *v2 )
      *v2 = 0;
    if ( v2[1] )
      v2[1] = 0;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  return this;
}
