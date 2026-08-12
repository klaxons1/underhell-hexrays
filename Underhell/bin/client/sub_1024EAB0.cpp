_DWORD *__thiscall sub_1024EAB0(_DWORD *this, _DWORD *a2)
{
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // ebp
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _DWORD *result; // eax
  int v11; // [esp+10h] [ebp+4h]

  sub_1022ACA0(a2, "visible", -1);
  sub_1024BD30((int)this, a2);
  if ( !sub_1022A800(a2, "settitlebarvisible", 1) )
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 952))(this, 0);
  v4 = (_BYTE *)sub_1022B4C0(a2, "title", (int)Locale);
  if ( v4 && *v4 )
    (*(void (__thiscall **)(_DWORD *, _BYTE *, int))(*this + 868))(this, v4, 1);
  v5 = (_BYTE *)sub_1022B4C0(a2, "title_font", (int)Locale);
  v6 = v5;
  if ( v5 )
  {
    if ( *v5 )
    {
      v7 = dword_1047CA7C;
      v11 = *(_DWORD *)dword_1047CA7C;
      v8 = (*(int (__thiscall **)(_DWORD *))(*this + 80))(this);
      v9 = (*(int (__thiscall **)(int, int))(v11 + 32))(v7, v8);
      if ( v9 )
        this[102] = (*(int (__thiscall **)(int, _BYTE *, _DWORD))(*(_DWORD *)v9 + 12))(v9, v6, 0);
    }
  }
  result = sub_1022A6A0(a2, "clientinsetx_override", 0);
  if ( result )
  {
    result = (_DWORD *)sub_1022A800(result, 0, 0);
    this[93] = result;
    *((_BYTE *)this + 380) = 1;
  }
  return result;
}
