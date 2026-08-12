int __thiscall sub_101195D0(_DWORD **this, const char *a2, int a3, int a4)
{
  unsigned int v5; // esi
  int v6; // ecx
  unsigned int v7; // kr00_4
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD **v11; // [esp+Ch] [ebp-4h]
  __int16 v12; // [esp+18h] [ebp+8h]

  v5 = 0;
  v6 = 0;
  v11 = this;
  if ( a4 > 0 )
  {
    do
    {
      v7 = strlen(*(const char **)(a3 + 4 * v6++));
      v5 += v7 + 1;
    }
    while ( v6 < a4 );
    this = v11;
  }
  v12 = sub_10118170(this[6], a2);
  if ( v5 >= 0x8000 )
    Warning("CSave::WriteHeader() size parameter exceeds 'short'!\n");
  v8 = this[6];
  if ( v8 )
  {
    if ( v8[3] - v8[2] >= 2 )
    {
      *(_WORD *)v8[1] = v5;
      v8[1] += 2;
      v8[2] += 2;
    }
    else
    {
      v8[2] = v8[3];
      Warning("Save/Restore overflow!\n");
    }
  }
  v9 = this[6];
  if ( v9 )
  {
    if ( v9[3] - v9[2] >= 2 )
    {
      *(_WORD *)v9[1] = v12;
      v9[1] += 2;
      v9[2] += 2;
    }
    else
    {
      v9[2] = v9[3];
      Warning("Save/Restore overflow!\n");
    }
  }
  return ((int (__thiscall *)(_DWORD **, int, int))(*this)[22])(this, a3, a4);
}
