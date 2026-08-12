_DWORD *__thiscall sub_10092440(_DWORD *this, int a2, char *Source)
{
  int v4; // edi
  int v5; // edi
  int v6; // edi

  sub_101803D0(a2, Source);
  *this = &CCommentaryModelPanel::`vftable';
  this[63] = &CCommentaryModelPanel::`vftable';
  if ( !byte_1042CAC8 )
  {
    byte_1042CAC8 = 1;
    v4 = sub_10242540("CCommentaryModelPanel");
    *(_DWORD *)(v4 + 28) = sub_100920B0;
    *(_DWORD *)(v4 + 24) = sub_10242540("CModelPanel");
  }
  if ( !byte_1042CAC9 )
  {
    byte_1042CAC9 = 1;
    v5 = sub_102484C0("CCommentaryModelPanel");
    *(_DWORD *)(v5 + 24) = sub_100920B0;
    *(_DWORD *)(v5 + 20) = sub_102484C0("CModelPanel");
  }
  if ( !byte_1042CACA )
  {
    byte_1042CACA = 1;
    v6 = sub_10242580("CCommentaryModelPanel");
    *(_DWORD *)(v6 + 68) = sub_100920B0;
    *(_DWORD *)(v6 + 24) = sub_10242580("CModelPanel");
  }
  return this;
}
