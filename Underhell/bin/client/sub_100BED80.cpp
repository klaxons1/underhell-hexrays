_DWORD *__thiscall sub_100BED80(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi

  sub_100BC500((int)this, a2);
  *this = &CHudChat::`vftable';
  this[11] = &CHudChat::`vftable';
  if ( !byte_10430124 )
  {
    byte_10430124 = 1;
    v3 = sub_10242540("CHudChat");
    *(_DWORD *)(v3 + 28) = sub_100BEC90;
    *(_DWORD *)(v3 + 24) = sub_10242540("CBaseHudChat");
  }
  if ( !byte_10430125 )
  {
    byte_10430125 = 1;
    v4 = sub_102484C0("CHudChat");
    *(_DWORD *)(v4 + 24) = sub_100BEC90;
    *(_DWORD *)(v4 + 20) = sub_102484C0("CBaseHudChat");
  }
  if ( !byte_10430126 )
  {
    byte_10430126 = 1;
    v5 = sub_10242580("CHudChat");
    *(_DWORD *)(v5 + 68) = sub_100BEC90;
    *(_DWORD *)(v5 + 24) = sub_10242580("CBaseHudChat");
  }
  return this;
}
