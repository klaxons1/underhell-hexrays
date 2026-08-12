_DWORD *__thiscall sub_10189F00(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // edi
  _DWORD *v18; // ecx
  _DWORD *v19; // edi
  _DWORD *v20; // ecx
  _DWORD *v21; // eax
  _DWORD *v22; // edi
  _DWORD *v23; // eax
  _DWORD *v24; // edi
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  sub_10250100((int)this, 0, "specmenu", 1);
  this[107] = &IViewPortPanel::`vftable';
  this[108] = &CGameEventListener::`vftable';
  *((_BYTE *)this + 436) = 0;
  *this = &CSpectatorMenu::`vftable';
  this[107] = &CSpectatorMenu::`vftable';
  this[108] = &CSpectatorMenu::`vftable';
  if ( !byte_10445844 )
  {
    byte_10445844 = 1;
    v3 = sub_10242540("CSpectatorMenu");
    *(_DWORD *)(v3 + 28) = sub_10188A10;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::Frame");
  }
  if ( !byte_10445845 )
  {
    byte_10445845 = 1;
    v4 = sub_102484C0("CSpectatorMenu");
    *(_DWORD *)(v4 + 24) = sub_10188A10;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::Frame");
  }
  if ( !byte_10445846 )
  {
    byte_10445846 = 1;
    v5 = sub_10242580("CSpectatorMenu");
    *(_DWORD *)(v5 + 68) = sub_10188A10;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::Frame");
  }
  sub_10189E60((int)&savedregs);
  this[117] = -1;
  this[116] = a2;
  sub_10237E50(1);
  sub_10237D40(1);
  sub_1024F400(0);
  sub_1024E300(0);
  sub_1024E310(0);
  sub_1023A780(1);
  sub_10236910("ClientScheme");
  v6 = sub_100DDA40(972);
  if ( v6 )
    v7 = sub_102602A0(v6, (int)this, "playercombo", 10, 0);
  else
    v7 = 0;
  this[111] = v7;
  v8 = dword_1047CA7C;
  v9 = *(_DWORD *)dword_1047CA7C;
  v10 = sub_102368C0(this);
  v11 = (*(int (__thiscall **)(int, int))(v9 + 32))(v8, v10);
  v12 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v11 + 12))(v11, "DefaultVerySmallFallBack", 0);
  if ( v12 )
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)this[111] + 1144))(this[111], 1, v12);
  v13 = sub_100DDA40(972);
  if ( v13 )
    v14 = sub_102602A0(v13, (int)this, "viewcombo", 10, 0);
  else
    v14 = 0;
  this[112] = v14;
  v15 = sub_100DDA40(972);
  if ( v15 )
    v16 = sub_102602A0(v15, (int)this, "settingscombo", 10, 0);
  else
    v16 = 0;
  this[113] = v16;
  v17 = (_DWORD *)sub_100DDA40(364);
  if ( v17 )
  {
    sub_1025C5C0((int)this, "specprev", (int)Locale, 0, 0);
    *v17 = &CSpecButton::`vftable';
    v18 = v17;
  }
  else
  {
    v18 = 0;
  }
  this[114] = v18;
  (*(void (__thiscall **)(_DWORD *, const char *))(*v18 + 772))(v18, "3");
  v19 = (_DWORD *)sub_100DDA40(364);
  if ( v19 )
  {
    sub_1025C5C0((int)this, "specnext", (int)Locale, 0, 0);
    *v19 = &CSpecButton::`vftable';
    v20 = v19;
  }
  else
  {
    v20 = 0;
  }
  this[115] = v20;
  (*(void (__thiscall **)(_DWORD *, const char *))(*v20 + 772))(v20, "4");
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)this[111] + 768))(this[111], Locale);
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)this[112] + 768))(this[112], "#Spec_Modes");
  (*(void (__thiscall **)(_DWORD, const char *))(*(_DWORD *)this[113] + 768))(this[113], "#Spec_Options");
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[111] + 1140))(this[111], 2);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[112] + 1140))(this[112], 2);
  (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[113] + 1140))(this[113], 2);
  v21 = (_DWORD *)sub_100DDA40(708);
  if ( v21 )
    v22 = sub_10184B50(v21, this[112], "spectatormenu", dword_104453A8);
  else
    v22 = 0;
  sub_101851D0(v22, "Resource/spectatormenu.res");
  (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[113] + 1116))(this[113], v22);
  v23 = (_DWORD *)sub_100DDA40(708);
  if ( v23 )
    v24 = sub_10184B50(v23, this[112], "spectatormodes", dword_104453A8);
  else
    v24 = 0;
  sub_101851D0(v24, "Resource/spectatormodes.res");
  (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[112] + 1116))(this[112], v24);
  sub_1024F0F0("Resource/UI/BottomSpectator.res", 0, 0);
  *((_BYTE *)this + 436) = 1;
  (*(void (__thiscall **)(int, _DWORD *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 108,
    "spec_target_updated",
    0);
  return this;
}
