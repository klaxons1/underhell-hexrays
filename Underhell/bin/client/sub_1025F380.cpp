char __thiscall sub_1025F380(_DWORD **this, int a2, const unsigned __int16 *Src, int a4)
{
  char result; // al
  _DWORD *v6; // eax
  _DWORD *v7; // edi

  result = (*(int (__thiscall **)(_DWORD *, int))(*this[238] + 880))(this[238], a2);
  if ( result )
  {
    v6 = (_DWORD *)sub_10229D00(32);
    if ( v6 )
      v7 = sub_10229D20(v6, (int)"SetText");
    else
      v7 = 0;
    sub_1022AC10(v7, "text", Src);
    (*(void (__thiscall **)(_DWORD *, int, const unsigned __int16 *, _DWORD *, int))(*this[238] + 868))(
      this[238],
      a2,
      Src,
      v7,
      a4);
    ((void (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*this)[61])(this, 0, 0);
    return 1;
  }
  return result;
}
