_DWORD *__thiscall sub_10271130(_DWORD *this, int (__thiscall ***a2)(_DWORD), char *Source)
{
  unsigned int *v4; // edi
  int v5; // edi
  unsigned int *v6; // edi

  sub_10270FF0((int)this, a2, Source);
  *this = &vgui::ContinuousProgressBar::`vftable';
  if ( !byte_10480A60 )
  {
    byte_10480A60 = 1;
    v4 = sub_10242540("ContinuousProgressBar");
    v4[7] = (unsigned int)sub_10270800;
    v4[6] = (unsigned int)sub_10242540("ProgressBar");
  }
  if ( !byte_10480A61 )
  {
    byte_10480A61 = 1;
    v5 = sub_102484C0((int)"ContinuousProgressBar");
    *(_DWORD *)(v5 + 24) = sub_10270800;
    *(_DWORD *)(v5 + 20) = sub_102484C0((int)"ProgressBar");
  }
  if ( !byte_10480A62 )
  {
    byte_10480A62 = 1;
    v6 = sub_10242580("ContinuousProgressBar");
    v6[17] = (unsigned int)sub_10270800;
    v6[6] = (unsigned int)sub_10242580("ProgressBar");
  }
  return this;
}
