_DWORD *__thiscall sub_10248B80(_DWORD *this, int a2, int a3, int a4, int a5)
{
  char *v6; // eax
  _DWORD *result; // eax
  int i; // edi
  char *v9; // eax

  v6 = (char *)this[53];
  if ( !v6 )
    v6 = (char *)String;
  result = sub_1012BF20(&dword_1069E3E0, 0, v6, 0, a2, a3, 0);
  for ( i = (int)result; result; i = (int)result )
  {
    (*(void (__thiscall **)(int, const char *, _DWORD *, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)i + 148))(
      i,
      "TargetEntity",
      this,
      this,
      this[200],
      this[201],
      this[202],
      this[203],
      this[204],
      0);
    v9 = (char *)this[53];
    if ( !v9 )
      v9 = (char *)String;
    result = sub_1012BF20(&dword_1069E3E0, i, v9, 0, a2, a3, 0);
  }
  return result;
}
