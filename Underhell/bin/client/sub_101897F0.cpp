_DWORD *__thiscall sub_101897F0(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax

  sub_1024C5C0(0, "specgui");
  this[63] = &IViewPortPanel::`vftable';
  *this = &CSpectatorGUI::`vftable';
  this[63] = &CSpectatorGUI::`vftable';
  if ( !byte_1044582C )
  {
    byte_1044582C = 1;
    v3 = sub_10242540("CSpectatorGUI");
    *(_DWORD *)(v3 + 28) = sub_10188A00;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::EditablePanel");
  }
  if ( !byte_10445838 )
  {
    byte_10445838 = 1;
    v4 = sub_102484C0("CSpectatorGUI");
    *(_DWORD *)(v4 + 24) = sub_10188A00;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::EditablePanel");
  }
  if ( !byte_10445839 )
  {
    byte_10445839 = 1;
    v5 = sub_10242580("CSpectatorGUI");
    *(_DWORD *)(v5 + 68) = sub_10188A00;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::EditablePanel");
  }
  *((_BYTE *)this + 280) = 0;
  this[69] = a2;
  dword_10445708 = (int)this;
  sub_10236310(0);
  sub_1023A780(1);
  sub_10236910("ClientScheme");
  sub_10237E50(0);
  sub_10237D40(0);
  if ( sub_100DDA40(204) )
    v6 = sub_10243490((int)this, "topbar");
  else
    v6 = 0;
  this[65] = v6;
  if ( sub_100DDA40(204) )
    v7 = sub_10243490((int)this, "bottombarblank");
  else
    v7 = 0;
  this[66] = v7;
  if ( sub_100DDA40(284) )
    v8 = sub_1024B100((int)this, "playerlabel", (int)Locale);
  else
    v8 = 0;
  this[68] = v8;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 124))(v8, 0);
  if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[68] + 864))(this[68]) )
  {
    v9 = dword_1047CA7C;
    v10 = *(_DWORD *)dword_1047CA7C;
    v11 = sub_102368C0(this);
    v12 = (*(int (__thiscall **)(int, int))(v10 + 32))(v9, v11);
    v13 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v12 + 12))(v12, "DefaultVerySmallFallBack", 0);
    if ( v13 )
      sub_1027D090(1, v13);
  }
  sub_10239CF0(0);
  sub_10239D10(0);
  sub_10239DD0(0, 0);
  return this;
}
