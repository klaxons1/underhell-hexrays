_DWORD *__thiscall sub_1018A6F0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax

  sub_10250100((int)this, 0, "team", 1);
  this[107] = &IViewPortPanel::`vftable';
  *this = &CTeamMenu::`vftable';
  this[107] = &CTeamMenu::`vftable';
  if ( !byte_10445858 )
  {
    byte_10445858 = 1;
    v3 = sub_10242540("CTeamMenu");
    *(_DWORD *)(v3 + 28) = sub_1018A430;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Frame");
  }
  if ( !byte_10445864 )
  {
    byte_10445864 = 1;
    v4 = sub_102484C0("CTeamMenu");
    *(_DWORD *)(v4 + 24) = sub_1018A430;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Frame");
  }
  if ( !byte_10445865 )
  {
    byte_10445865 = 1;
    v5 = sub_10242580("CTeamMenu");
    *(_DWORD *)(v5 + 68) = sub_1018A430;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Frame");
  }
  this[109] = a2;
  this[112] = -1;
  this[113] = -1;
  sub_1024E170(Locale, 1);
  sub_10236910("ClientScheme");
  sub_1024E300(0);
  sub_1024E310(0);
  sub_1024F400(0);
  sub_1023A780(1);
  v6 = sub_100DDA40(416);
  if ( v6 )
    v7 = sub_10259F80(v6, (int)this, "MapInfo");
  else
    v7 = 0;
  this[110] = v7;
  sub_1024F0F0("Resource/UI/TeamMenu.res", 0, 0);
  sub_10239DD0(0, 0);
  *((_BYTE *)this + 456) = 0;
  return this;
}
