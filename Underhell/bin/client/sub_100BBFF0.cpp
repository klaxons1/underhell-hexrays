_DWORD *__thiscall sub_100BBFF0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *result; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  if ( this[82] )
    return (_DWORD *)this[82];
  v2 = (_DWORD *)sub_100DDA40(256);
  if ( v2 )
    result = sub_100BBDC0(v2, (int)(this + 11), "HudChatFilterPanel");
  else
    result = 0;
  this[82] = result;
  if ( result )
  {
    v4 = dword_1047CA7C;
    v5 = *(_DWORD *)dword_1047CA7C;
    v6 = (*(int (__thiscall **)(int, int, const char *, const char *))(*(_DWORD *)dword_1041317C + 4))(
           dword_1041317C,
           2,
           "resource/ChatScheme.res",
           "ChatScheme");
    v7 = (*(int (__thiscall **)(int, int))(v5 + 48))(v4, v6);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[82] + 316))(this[82], v7);
    (*(void (__thiscall **)(_DWORD, int, int))(*(_DWORD *)this[82] + 244))(this[82], 1, 1);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[82] + 520))(this[82], 1);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[82] + 276))(this[82], 2);
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)this[82] + 260))(this[82], 1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)this[82] + 124))(this[82], 0);
    return (_DWORD *)this[82];
  }
  return result;
}
