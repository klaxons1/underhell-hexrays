_DWORD *__thiscall sub_1022B1A0(_DWORD *this, int a2, char *Str, int a4)
{
  int v5; // eax
  _DWORD *v6; // eax

  *this = -1;
  this[6] = 0;
  this[5] = 0;
  this[7] = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  this[4] = 0;
  v5 = KeyValuesSystem();
  *this = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v5 + 12))(v5, a2, 1);
  v6 = sub_1022A6A0(this, Str, 1);
  if ( v6 )
  {
    v6[3] = a4;
    *((_BYTE *)v6 + 16) = 2;
  }
  return this;
}
