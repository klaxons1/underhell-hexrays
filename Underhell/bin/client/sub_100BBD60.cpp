_DWORD *__thiscall sub_100BBD60(_DWORD *this, char a2)
{
  int v3; // eax

  v3 = this[114];
  *this = &CBaseHudChatLine::`vftable';
  if ( v3 )
  {
    sub_10034930(v3);
    this[114] = 0;
  }
  sub_1011A810(this + 109);
  sub_10258CC0(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
