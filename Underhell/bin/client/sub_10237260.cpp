void __thiscall sub_10237260(void *this, int a2, int a3)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  v4 = (_DWORD *)sub_10229D00(32);
  if ( v4 )
  {
    v5 = sub_1022B270(v4, (int)"OnRequestFocus", "subFocus", a2, "defaultPanel", a3);
    sub_10236860(this, v5);
  }
  else
  {
    sub_10236860(this, 0);
  }
}
