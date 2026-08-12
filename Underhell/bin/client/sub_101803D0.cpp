_DWORD *__thiscall sub_101803D0(_DWORD *this, int a2, char *Source)
{
  int savedregs; // [esp+Ch] [ebp+0h] BYREF
  char *Sourcea; // [esp+18h] [ebp+Ch]
  char *Sourceb; // [esp+18h] [ebp+Ch]
  char *Sourcec; // [esp+18h] [ebp+Ch]

  sub_1024C5C0(a2, Source);
  this[63] = &CGameEventListener::`vftable';
  *((_BYTE *)this + 256) = 0;
  *this = &CModelPanel::`vftable';
  this[63] = &CModelPanel::`vftable';
  if ( !byte_10445344 )
  {
    byte_10445344 = 1;
    Sourcea = (char *)sub_10242540("CModelPanel");
    *((_DWORD *)Sourcea + 7) = sub_1017E930;
    *((_DWORD *)Sourcea + 6) = sub_10242540("vgui::EditablePanel");
  }
  if ( !byte_10445345 )
  {
    byte_10445345 = 1;
    Sourceb = (char *)sub_102484C0("CModelPanel");
    *((_DWORD *)Sourceb + 6) = sub_1017E930;
    *((_DWORD *)Sourceb + 5) = sub_102484C0("vgui::EditablePanel");
  }
  if ( !byte_10445346 )
  {
    byte_10445346 = 1;
    Sourcec = (char *)sub_10242580("CModelPanel");
    *((_DWORD *)Sourcec + 17) = sub_1017E930;
    *((_DWORD *)Sourcec + 6) = sub_10242580("vgui::EditablePanel");
  }
  sub_10180290((int)&savedregs);
  sub_10180330((int)&savedregs);
  this[71] = -1;
  this[72] = 0;
  this[73] = 0;
  this[74] = 0;
  this[75] = 0;
  this[76] = 0;
  this[77] = -1;
  unknown_libname_2(this + 81);
  unknown_libname_2(this + 82);
  this[67] = 54;
  this[71] = -1;
  this[70] = 0;
  this[77] = -1;
  this[79] = 0;
  *((_BYTE *)this + 312) = 1;
  *((_BYTE *)this + 276) = 0;
  *((_BYTE *)this + 320) = 0;
  *((_BYTE *)this + 256) = 1;
  (*(void (__thiscall **)(int, _DWORD *, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 12))(
    dword_104131A8,
    this + 63,
    "game_newmap",
    0);
  return this;
}
