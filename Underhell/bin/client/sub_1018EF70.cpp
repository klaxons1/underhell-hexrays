char **__thiscall sub_1018EF70(_DWORD *this, const char *a2)
{
  int v2; // edi
  int v3; // esi
  const char **v4; // ebx
  char **result; // eax
  char *v6; // ebx
  int v7; // edi
  int v8; // eax
  int v9; // ecx
  int v10; // eax

  v2 = this[1261];
  v3 = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    v6 = (char *)sub_100DDA40(strlen(a2) + 1);
    strcpy(v6, a2);
    v7 = this[1261];
    v8 = this[1259];
    if ( v7 + 1 > v8 )
      sub_1010AFF0(this + 1258, v7 - v8 + 1);
    ++this[1261];
    v9 = this[1258];
    v10 = this[1261] - v7 - 1;
    this[1262] = v9;
    if ( v10 > 0 )
      memcpy((void *)(v9 + 4 * v7 + 4), (const void *)(v9 + 4 * v7), 4 * v10);
    result = (char **)(this[1258] + 4 * v7);
    if ( result )
      *result = v6;
  }
  else
  {
    v4 = (const char **)this[1258];
    while ( 1 )
    {
      result = (char **)strcmp(a2, *v4);
      if ( !result )
        break;
      ++v3;
      ++v4;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
  }
  return result;
}
