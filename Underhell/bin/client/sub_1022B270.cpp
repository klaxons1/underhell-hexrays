_DWORD *__thiscall sub_1022B270(_DWORD *this, int a2, char *Str, int a4, char *a5, int a6)
{
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax

  *this = -1;
  this[6] = 0;
  this[5] = 0;
  this[7] = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  v7 = KeyValuesSystem();
  *this = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 12))(v7, a2, 1);
  v8 = sub_1022A6A0(this, Str, 1);
  if ( v8 )
  {
    v8[3] = a4;
    *((_BYTE *)v8 + 16) = 2;
  }
  v9 = sub_1022A6A0(this, a5, 1);
  if ( v9 )
  {
    v9[3] = a6;
    *((_BYTE *)v9 + 16) = 2;
  }
  return this;
}
