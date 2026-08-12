const char **__thiscall sub_100A1250(const char **this, const char **a2)
{
  const char **v2; // edi
  const char **v3; // esi
  const char *v4; // ebx
  const char *v5; // eax
  unsigned int v6; // eax
  size_t v7; // esi
  void *v8; // edi
  const char *v9; // ebx
  const char *v10; // eax
  unsigned int v11; // eax
  size_t v12; // esi
  void *v13; // edi
  int v14; // ebx
  const char *v15; // edx
  const char *v16; // edi
  const char *v17; // eax
  const char *v18; // ecx
  int v19; // eax
  char *v20; // eax
  int v22; // [esp+8h] [ebp-Ch]
  const char *v23; // [esp+Ch] [ebp-8h]

  v2 = a2;
  v3 = this;
  if ( this != a2 )
  {
    v4 = *a2;
    if ( *a2 )
    {
      v6 = (unsigned int)&(*a2)[strlen(*a2) + 1];
      v7 = v6 - (_DWORD)(v4 + 1);
      v8 = (void *)sub_10184390(v6 - (_DWORD)v4);
      memcpy_0(v8, v4, v7);
      *((_BYTE *)v8 + v7) = 0;
      v3 = this;
      v5 = (const char *)v8;
      v2 = a2;
    }
    else
    {
      v5 = 0;
    }
    *v3 = v5;
    v9 = v2[1];
    if ( v9 )
    {
      v11 = (unsigned int)&v2[1][strlen(v2[1]) + 1];
      v12 = v11 - (_DWORD)(v9 + 1);
      v13 = (void *)sub_10184390(v11 - (_DWORD)v9);
      memcpy_0(v13, v9, v12);
      *((_BYTE *)v13 + v12) = 0;
      v3 = this;
      v10 = (const char *)v13;
      v2 = a2;
    }
    else
    {
      v10 = 0;
    }
    v3[1] = v10;
    *((_WORD *)v3 + 4) = *((_WORD *)v2 + 4);
    *((_BYTE *)v3 + 10) = *((_BYTE *)v2 + 10);
    sub_1009A6F0((_BYTE *)v3 + 11, (int)v2 + 11);
    v14 = 0;
    v22 = (int)v2[9];
    if ( v22 > 0 )
    {
      while ( 1 )
      {
        v15 = v2[6];
        v16 = v3[9];
        v23 = &v15[2 * v14];
        v17 = v3[7];
        if ( (int)(v16 + 1) > (int)v17 )
          sub_1009A780(v3 + 6, v16 - v17 + 1);
        ++v3[9];
        v18 = v3[6];
        v19 = v3[9] - v16 - 1;
        v3[10] = v18;
        if ( v19 > 0 )
          memcpy((void *)&v18[2 * (_DWORD)v16 + 2], &v18[2 * (_DWORD)v16], 2 * v19);
        v20 = (char *)&v3[6][2 * (_DWORD)v16];
        if ( v20 )
          *(_WORD *)v20 = *(_WORD *)v23;
        if ( ++v14 >= v22 )
          break;
        v2 = a2;
      }
      return this;
    }
  }
  return v3;
}
