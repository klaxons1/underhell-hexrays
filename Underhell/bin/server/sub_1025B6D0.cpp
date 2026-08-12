int __thiscall sub_1025B6D0(char *this)
{
  int result; // eax
  _DWORD *i; // esi
  const char *v4; // [esp-24h] [ebp-44h]
  char *v5; // [esp-20h] [ebp-40h]
  char *v6; // [esp-1Ch] [ebp-3Ch]

  result = sub_1012BC10(&dword_1069E3E0, 0);
  for ( i = (_DWORD *)result; result; i = (_DWORD *)result )
  {
    if ( ((*(int (__thiscall **)(_DWORD *))(*i + 144))(i) & 8) != 0 )
    {
      if ( ((*(int (__thiscall **)(_DWORD *))(*i + 144))(i) & 6) != 0 && sub_1025B610(this, i) )
      {
        v6 = this;
        v5 = this;
        v4 = "InsideTransition";
      }
      else
      {
        v6 = this;
        v5 = this;
        v4 = "OutsideTransition";
      }
      (*(void (__thiscall **)(_DWORD *, const char *, char *, char *, _DWORD))(*i + 148))(i, v4, v5, v6, 0);
    }
    result = sub_1012BC10(&dword_1069E3E0, (int)i);
  }
  return result;
}
