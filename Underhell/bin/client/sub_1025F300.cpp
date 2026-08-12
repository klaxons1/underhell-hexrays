char __thiscall sub_1025F300(_DWORD **this, int a2, const char *Src, int a4)
{
  char result; // al
  int v6; // eax
  int v7; // eax

  result = (*(int (__thiscall **)(_DWORD *, int))(*this[238] + 880))(this[238], a2);
  if ( result )
  {
    v6 = sub_10229D00(32);
    if ( v6 )
      v7 = sub_1022B0E0(v6, (int)"SetText", "text", Src);
    else
      v7 = 0;
    (*(void (__thiscall **)(_DWORD *, int, const char *, int, int))(*this[238] + 872))(this[238], a2, Src, v7, a4);
    ((void (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*this)[61])(this, 0, 0);
    return 1;
  }
  return result;
}
