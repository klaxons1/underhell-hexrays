int __thiscall sub_1021FF10(_DWORD **this, const char *a2, int a3, int a4)
{
  unsigned int v5; // esi
  int v6; // ecx
  const char *v7; // eax
  _DWORD **v9; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v6 = 0;
  v9 = this;
  if ( a4 > 0 )
  {
    do
    {
      v7 = *(const char **)(a3 + 4 * v6);
      if ( !v7 )
        v7 = String;
      ++v6;
      v5 += strlen(v7) + 1;
    }
    while ( v6 < a4 );
    this = v9;
  }
  sub_1021ED50(this, a2, v5);
  return ((int (__thiscall *)(_DWORD **, int, int))(*this)[22])(this, a3, a4);
}
