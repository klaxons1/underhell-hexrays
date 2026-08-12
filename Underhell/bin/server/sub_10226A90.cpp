int __thiscall sub_10226A90(_DWORD *this, char *String1)
{
  unsigned int v3; // eax
  int *v4; // ecx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  int result; // eax
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax

  v3 = this[382];
  if ( v3 != -1 )
  {
    v4 = &off_1061BE18[4 * (this[382] & 0xFFF) + 1];
    v5 = v3 >> 12;
    if ( v4[1] == v5 )
    {
      if ( *v4 )
      {
        if ( v4[1] == v5 )
          v6 = *v4;
        else
          v6 = 0;
        v7 = sub_100D7680(v6);
        if ( v7 )
        {
          result = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)v7 + 2000))(v7, String1, 0);
          goto LABEL_18;
        }
        v9 = this[382];
        if ( v9 == -1 || off_1061BE18[4 * (this[382] & 0xFFF) + 2] != v9 >> 12 )
          v10 = 0;
        else
          v10 = off_1061BE18[4 * (this[382] & 0xFFF) + 1];
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 288))(v10) )
        {
          v11 = this[382];
          if ( v11 == -1 || off_1061BE18[4 * (this[382] & 0xFFF) + 2] != v11 >> 12 )
            result = 0;
          else
            result = off_1061BE18[4 * (this[382] & 0xFFF) + 1];
LABEL_18:
          if ( result )
            return result;
        }
      }
    }
  }
  return sub_10226520((int)this, String1, 0, 0, 0);
}
