_DWORD *__thiscall sub_1018B610(_DWORD *this, char a2)
{
  *this = &CTextWindow::`vftable';
  this[107] = &CTextWindow::`vftable';
  (*(void (__thiscall **)(int, const char *, const char *))(*(_DWORD *)dword_1047C968 + 60))(
    dword_1047C968,
    "textwindow_temp.html",
    "DEFAULT_WRITE_PATH");
  this[107] = &IViewPortPanel::`vftable';
  sub_1024D540(this);
  if ( (a2 & 1) != 0 )
    sub_10034930((int)this);
  return this;
}
