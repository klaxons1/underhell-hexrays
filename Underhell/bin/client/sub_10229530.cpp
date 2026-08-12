_DWORD *__thiscall sub_10229530(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[9];
  *this = &ConVar::`vftable';
  this[6] = &ConVar::`vftable';
  if ( v3 )
  {
    sub_10034930(v3);
    this[9] = 0;
  }
  *this = &ConCommandBase::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
