int __thiscall sub_10228D10(_DWORD *this)
{
  int result; // eax

  result = this[9];
  *this = &ConVar::`vftable';
  this[6] = &ConVar::`vftable';
  if ( result )
  {
    result = sub_10034930(result);
    this[9] = 0;
  }
  *this = &ConCommandBase::`vftable';
  return result;
}
