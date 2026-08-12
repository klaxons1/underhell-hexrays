int __thiscall sub_100BFC50(_DWORD *this)
{
  int v1; // esi
  int v2; // ebx
  int v4; // eax
  int v5; // esi
  int result; // eax

  v1 = dword_1047CA7C;
  v2 = *(_DWORD *)dword_1047CA7C;
  v4 = (*(int (__thiscall **)(_DWORD *))(this[11] + 80))(this + 11);
  v5 = (*(int (__thiscall **)(int, int))(v2 + 32))(v1, v4);
  this[84] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v5 + 12))(v5, "CloseCaption_Normal", 0);
  this[86] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v5 + 12))(v5, "CloseCaption_Bold", 0);
  this[85] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v5 + 12))(v5, "CloseCaption_Italic", 0);
  this[87] = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v5 + 12))(v5, "CloseCaption_BoldItalic", 0);
  if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, this[84]) >= 6 )
  {
    result = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, this[84]);
    this[89] = result;
  }
  else
  {
    result = 6;
    this[89] = 6;
  }
  return result;
}
