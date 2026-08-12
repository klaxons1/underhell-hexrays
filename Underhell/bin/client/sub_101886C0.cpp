_DWORD *__thiscall sub_101886C0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  sub_10250100((int)this, 0, "nav_progress", 1);
  this[107] = &IViewPortPanel::`vftable';
  *this = &CNavProgress::`vftable';
  this[107] = &CNavProgress::`vftable';
  if ( !byte_104456F0 )
  {
    byte_104456F0 = 1;
    v3 = sub_10242540("CNavProgress");
    *(_DWORD *)(v3 + 28) = sub_101884D0;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Frame");
  }
  if ( !byte_104456FC )
  {
    byte_104456FC = 1;
    v4 = sub_102484C0("CNavProgress");
    *(_DWORD *)(v4 + 24) = sub_101884D0;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Frame");
  }
  if ( !byte_104456FD )
  {
    byte_104456FD = 1;
    v5 = sub_10242580("CNavProgress");
    *(_DWORD *)(v5 + 68) = sub_101884D0;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Frame");
  }
  this[109] = a2;
  sub_10236910("ClientScheme");
  sub_1024E300(0);
  sub_1024E310(0);
  sub_1023A780(1);
  sub_1024F400(0);
  if ( sub_100DDA40(284) )
    v6 = sub_1024B100((int)this, "TitleLabel", (int)Locale);
  else
    v6 = 0;
  this[112] = v6;
  if ( sub_100DDA40(284) )
    v7 = sub_1024B100((int)this, "TextLabel", (int)Locale);
  else
    v7 = 0;
  this[113] = v7;
  if ( sub_100DDA40(204) )
    v8 = sub_10243490((int)this, "ProgressBarBorder");
  else
    v8 = 0;
  this[114] = v8;
  if ( sub_100DDA40(204) )
    v9 = sub_10243490((int)this, "ProgressBar");
  else
    v9 = 0;
  this[115] = v9;
  if ( sub_100DDA40(204) )
    v10 = sub_10243490((int)this, "ProgressBarSizer");
  else
    v10 = 0;
  this[116] = v10;
  sub_1024F0F0("Resource/UI/NavProgress.res", 0, 0);
  return this;
}
