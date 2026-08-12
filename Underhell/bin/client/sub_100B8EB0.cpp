_DWORD *__thiscall sub_100B8EB0(_DWORD *this, int a2, char *Source)
{
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // esi
  _DWORD *v7; // ecx

  if ( a2 )
    v4 = a2 + 44;
  else
    v4 = 0;
  sub_10243490(v4, Source);
  *this = &CBaseHudChatInputLine::`vftable';
  sub_10237E50(0);
  if ( sub_100DDA40(284) )
    v5 = sub_1024B320((int)this, "ChatInputPrompt", (int)L"Enter text:");
  else
    v5 = 0;
  this[51] = v5;
  v6 = (_DWORD *)sub_100DDA40(948);
  if ( v6 )
  {
    sub_10256110((int)this, "ChatInput");
    *v6 = &CBaseHudChatEntry::`vftable';
    sub_10251240(1);
    sub_10252590(1);
    sub_10252B50(1);
    v6[236] = a2;
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  this[52] = v7;
  (*(void (__thiscall **)(_DWORD *, int))(*v7 + 956))(v7, 127);
  return this;
}
