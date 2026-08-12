int __thiscall sub_1026E8C0(_DWORD *this, char *String2, _DWORD *a3)
{
  int v4; // edi
  int v5; // ebx
  const char *v6; // ecx
  const char *v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // eax

  v4 = 0;
  if ( (int)this[9] <= 0 )
  {
LABEL_10:
    v8 = this[9];
    v9 = this[7];
    if ( v8 + 1 > v9 )
      sub_102E82B0(v8 - v9 + 1);
    ++this[9];
    v10 = this[6];
    v11 = this[9] - v8 - 1;
    this[10] = v10;
    if ( v11 > 0 )
      memcpy((void *)(v10 + 24 * v8 + 24), (const void *)(v10 + 24 * v8), 24 * v11);
    v12 = 24 * v8;
    v13 = (_DWORD *)(24 * v8 + this[6]);
    if ( v13 )
    {
      *v13 = 0;
      v13[1] = 0;
      v13[2] = 0;
      v13[3] = 0;
      v13[4] = 0;
      v13[5] = 0;
    }
    *(_DWORD *)(v12 + this[6]) = String2;
    if ( a3 )
      *a3 = v8;
    return v12 + this[6];
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = String2;
      if ( !String2 )
        v6 = String;
      v7 = *(const char **)(this[6] + v5);
      if ( !v7 )
        v7 = String;
      if ( v7 == v6 || !_stricmp(v7, v6) )
        break;
      ++v4;
      v5 += 24;
      if ( v4 >= this[9] )
        goto LABEL_10;
    }
    if ( a3 )
      *a3 = v4;
    return this[6] + 24 * v4;
  }
}
