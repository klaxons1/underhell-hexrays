_DWORD *__thiscall sub_1042CB50(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[9];
  *this = &ConVar::`vftable';
  this[6] = &ConVar::`vftable';
  if ( v3 )
  {
    sub_10184660(v3);
    this[9] = 0;
  }
  *this = &ConCommandBase::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10184660((int)this);
  return this;
}
