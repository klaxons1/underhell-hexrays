int __cdecl sub_10429D80(char *Source, int a2, int a3, _DWORD *a4)
{
  unsigned int v5; // ebx
  int v6; // esi
  char *v7; // eax
  unsigned int v8; // eax
  signed int v9; // esi
  char *v10; // ebx
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  char **v15; // esi
  int result; // eax
  unsigned int v17; // kr00_4
  char *v18; // ebx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  char **v22; // edi
  int v23; // [esp+Ch] [ebp-4h]
  unsigned int v24; // [esp+Ch] [ebp-4h]
  char *Sourcea; // [esp+18h] [ebp+8h]

  a4[3] = 0;
  if ( (int)a4[2] >= 0 )
  {
    if ( *a4 )
    {
      (*(void (__thiscall **)(_DWORD, _DWORD))(*g_pMemAlloc + 20))(g_pMemAlloc, *a4);
      *a4 = 0;
    }
    a4[1] = 0;
  }
  a4[4] = *a4;
  while ( 1 )
  {
    v5 = 0;
    v6 = 0;
    v23 = -1;
    Sourcea = 0;
    if ( a3 <= 0 )
      break;
    do
    {
      v7 = sub_10429530(Source, *(unsigned __int8 **)(a2 + 4 * v6));
      if ( v7 && (!v5 || (unsigned int)v7 < v5) )
      {
        v23 = v6;
        Sourcea = v7;
        v5 = (unsigned int)v7;
      }
      ++v6;
    }
    while ( v6 < a3 );
    if ( !v5 )
      break;
    v24 = strlen(*(const char **)(a2 + 4 * v23));
    if ( v5 > (unsigned int)Source )
    {
      if ( v5 - (_DWORD)Source == -1 )
      {
        v8 = strlen(Source);
      }
      else if ( (int)strlen(Source) >= (int)(v5 - (_DWORD)Source) )
      {
        v8 = v5 - (_DWORD)Source;
      }
      else
      {
        v8 = strlen(Source);
      }
      v9 = v8 + 1;
      v10 = (char *)sub_10184390(v8 + 1);
      AssertValidWritePtr(v10, v9);
      AssertValidStringPtr(Source, 0xFFFFFF);
      strncpy(v10, Source, v9);
      if ( v9 > 0 )
        v10[v9 - 1] = 0;
      v11 = a4[3];
      v12 = a4[1];
      if ( v11 + 1 > v12 )
        sub_102ABFC0(a4, v11 - v12 + 1);
      ++a4[3];
      v13 = *a4;
      v14 = a4[3] - v11 - 1;
      a4[4] = *a4;
      if ( v14 > 0 )
        memcpy((void *)(v13 + 4 * v11 + 4), (const void *)(v13 + 4 * v11), 4 * v14);
      v15 = (char **)(*a4 + 4 * v11);
      if ( v15 )
        *v15 = v10;
      v5 = (unsigned int)Sourcea;
    }
    Source = (char *)(v5 + v24);
  }
  result = strlen(Source);
  if ( result )
  {
    v17 = strlen(Source);
    v18 = (char *)sub_10184390(v17 + 1);
    AssertValidWritePtr(v18, v17 + 1);
    AssertValidStringPtr(Source, 0xFFFFFF);
    strncpy(v18, Source, v17 + 1);
    if ( (int)(v17 + 1) > 0 )
      v18[v17] = 0;
    v19 = a4[3];
    v20 = a4[1];
    if ( v19 + 1 > v20 )
      sub_102ABFC0(a4, v19 - v20 + 1);
    ++a4[3];
    v21 = *a4;
    result = a4[3] - v19 - 1;
    a4[4] = *a4;
    if ( result > 0 )
      result = (int)memcpy((void *)(v21 + 4 * v19 + 4), (const void *)(v21 + 4 * v19), 4 * result);
    v22 = (char **)(*a4 + 4 * v19);
    if ( v22 )
      *v22 = v18;
  }
  return result;
}
