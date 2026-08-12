_DWORD *__thiscall sub_101B3F00(_DWORD *this, int a2, char *Source)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi

  sub_10071310(this, a2, Source);
  *this = &CHudRadar::`vftable';
  if ( !byte_1044EF00 )
  {
    byte_1044EF00 = 1;
    v4 = sub_10242540("CHudRadar");
    *(_DWORD *)(v4 + 28) = sub_101B3860;
    *(_DWORD *)(v4 + 24) = sub_10242540("CVGuiScreenPanel");
  }
  if ( !byte_1044EF0C )
  {
    byte_1044EF0C = 1;
    v5 = sub_102484C0("CHudRadar");
    *(_DWORD *)(v5 + 24) = sub_101B3860;
    *(_DWORD *)(v5 + 20) = sub_102484C0("CVGuiScreenPanel");
  }
  if ( !byte_1044EF0D )
  {
    byte_1044EF0D = 1;
    v6 = sub_10242580("CHudRadar");
    *(_DWORD *)(v6 + 68) = sub_101B3860;
    *(_DWORD *)(v6 + 24) = sub_10242580("CVGuiScreenPanel");
  }
  this[190] = -1;
  this[191] = -1;
  this[192] = -1;
  this[193] = -1;
  this[194] = -1;
  this[195] = -1;
  this[189] = 0;
  return this;
}
