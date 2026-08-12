_DWORD *__thiscall sub_101A6980(_DWORD *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi

  sub_10181ED0((int)this);
  *this = &CHudViewport::`vftable';
  this[63] = &CHudViewport::`vftable';
  this[64] = &CHudViewport::`vftable';
  if ( !byte_1044C310 )
  {
    byte_1044C310 = 1;
    v2 = sub_10242540("CHudViewport");
    *(_DWORD *)(v2 + 28) = sub_101A6880;
    *(_DWORD *)(v2 + 24) = sub_10242540("CBaseViewport");
  }
  if ( !byte_1044C311 )
  {
    byte_1044C311 = 1;
    v3 = sub_102484C0("CHudViewport");
    *(_DWORD *)(v3 + 24) = sub_101A6880;
    *(_DWORD *)(v3 + 20) = sub_102484C0("CBaseViewport");
  }
  if ( !byte_1044C312 )
  {
    byte_1044C312 = 1;
    v4 = sub_10242580("CHudViewport");
    *(_DWORD *)(v4 + 68) = sub_101A6880;
    *(_DWORD *)(v4 + 24) = sub_10242580("CBaseViewport");
  }
  return this;
}
