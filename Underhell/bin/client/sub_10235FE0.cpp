_DWORD *__thiscall sub_10235FE0(_DWORD *this, int a2)
{
  int v3; // ecx
  bool v4; // zf
  char *v5; // edi
  char *v6; // ebx
  int v7; // esi

  v3 = a2;
  v4 = *(_BYTE *)a2 == 0;
  *(_BYTE *)this = *(_BYTE *)a2;
  if ( v4 )
  {
    v6 = *(char **)(a2 + 4);
    if ( v6 )
    {
      v7 = strlen(*(const char **)(a2 + 4)) + 1;
      v5 = (char *)sub_100DDA40(v7);
      sub_102282F0(v5, v6, v7);
      v3 = a2;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *(char **)(a2 + 4);
  }
  this[1] = v5;
  this[2] = *(_DWORD *)(v3 + 8);
  this[3] = *(_DWORD *)(v3 + 12);
  return this;
}
