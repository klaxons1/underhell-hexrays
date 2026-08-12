_DWORD *__thiscall sub_102822B0(_DWORD *this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_10256110((int)this, a2, Source);
  *this = &CSmallTextEntry::`vftable';
  if ( !byte_10481A50 )
  {
    byte_10481A50 = 1;
    v4 = sub_10242540("CSmallTextEntry");
    v4[7] = (unsigned int)sub_10281770;
    v4[6] = (unsigned int)sub_10242540("TextEntry");
  }
  if ( !byte_10481A51 )
  {
    byte_10481A51 = 1;
    v5 = sub_102484C0((int)"CSmallTextEntry");
    *(_DWORD *)(v5 + 24) = sub_10281770;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"TextEntry");
  }
  if ( !byte_10481A52 )
  {
    byte_10481A52 = 1;
    v6 = sub_10242580("CSmallTextEntry");
    v6[17] = (unsigned int)sub_10281770;
    v6[6] = (unsigned int)sub_10242580("TextEntry");
  }
  return this;
}
