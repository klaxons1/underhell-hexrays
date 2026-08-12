_DWORD *__thiscall sub_10184280(_DWORD *this, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int savedregs; // [esp+Ch] [ebp+0h] BYREF

  sub_1024C5C0(0, "scores");
  this[63] = &IViewPortPanel::`vftable';
  this[64] = &CGameEventListener::`vftable';
  *((_BYTE *)this + 260) = 0;
  *this = &CClientScoreBoardDialog::`vftable';
  this[63] = &CClientScoreBoardDialog::`vftable';
  this[64] = &CClientScoreBoardDialog::`vftable';
  if ( !byte_104454B0 )
  {
    byte_104454B0 = 1;
    v3 = sub_10242540("CClientScoreBoardDialog");
    *(_DWORD *)(v3 + 28) = sub_10182330;
    *(_DWORD *)(v3 + 24) = sub_10242540("vgui::EditablePanel");
  }
  if ( !byte_104454B1 )
  {
    byte_104454B1 = 1;
    v4 = sub_102484C0("CClientScoreBoardDialog");
    *(_DWORD *)(v4 + 24) = sub_10182330;
    *(_DWORD *)(v4 + 20) = sub_102484C0("vgui::EditablePanel");
  }
  if ( !byte_104454B2 )
  {
    byte_104454B2 = 1;
    v5 = sub_10242580("CClientScoreBoardDialog");
    *(_DWORD *)(v5 + 68) = sub_10182330;
    *(_DWORD *)(v5 + 24) = sub_10242580("vgui::EditablePanel");
  }
  sub_10183DC0((int)&savedregs);
  this[97] = 0;
  this[98] = 0;
  this[99] = 0;
  this[100] = 0;
  v6 = this[98];
  this[101] = 0xFFFF;
  this[102] = -1;
  this[103] = v6;
  sub_10183E60();
  sub_10183EC0();
  sub_10183F20();
  sub_10183F80();
  sub_10183FE0();
  sub_10184040();
  v7 = KeyValuesSystem();
  v8 = (*(int (__thiscall **)(int, const char *, int))(*(_DWORD *)v7 + 12))(v7, "playerIndex", 1);
  this[118] = a2;
  this[116] = v8;
  this[119] = -1;
  this[75] = 0;
  sub_1023A780(1);
  sub_10237D40(0);
  sub_10237E50(0);
  sub_10236910("ClientScheme");
  v9 = sub_100DDA40(360);
  if ( v9 )
    v10 = sub_1027C840(v9, (int)this, "PlayerList");
  else
    v10 = 0;
  this[68] = v10;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 916))(v10, 0);
  sub_1024C300("Resource/UI/ScoreBoard.res", 0, 0);
  v11 = sub_102374F0(this);
  v12 = this[68];
  this[117] = v11;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 124))(v12, 0);
  this[76] = 0;
  *((_BYTE *)this + 260) = 1;
  (*(void (__thiscall **)(int, _DWORD *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 64,
    "hltv_status",
    0);
  *((_BYTE *)this + 260) = 1;
  (*(void (__thiscall **)(int, _DWORD *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 64,
    "server_spawn",
    0);
  this[78] = 0;
  if ( !this[97] )
    this[97] = sub_10182380;
  sub_10183620((int)(this + 97));
  memset(this + 79, 0, 0x48u);
  return this;
}
