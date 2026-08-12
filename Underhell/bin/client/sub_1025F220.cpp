int __thiscall sub_1025F220(_DWORD **this, const char *Src, int a3)
{
  int v4; // eax
  int v5; // eax

  v4 = sub_10229D00(32);
  if ( v4 )
    v5 = sub_1022B0E0(v4, (int)"SetText", "text", Src);
  else
    v5 = 0;
  return (*(int (__thiscall **)(_DWORD *, const char *, int, _DWORD **, int))(*this[238] + 780))(
           this[238],
           Src,
           v5,
           this,
           a3);
}
