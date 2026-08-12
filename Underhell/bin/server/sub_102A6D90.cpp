int __thiscall sub_102A6D90(_DWORD **this)
{
  int v3; // eax
  int v4; // eax

  if ( sub_10023D10(this[1], 21) )
    return 100010;
  if ( sub_10023D10(this[1], 23) )
    return 41;
  v3 = ((int (__thiscall *)(_DWORD **))(*this)[13])(this);
  v4 = sub_1007DB30((_DWORD *)(v3 + 52), 100011);
  return 100012 - sub_10023D10(this[1], v4);
}
