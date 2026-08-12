_DWORD *__thiscall sub_102EEA50(void *this, int a2, char **a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  int v8; // ecx
  _DWORD *result; // eax
  _DWORD *v10; // esi
  float *v11; // edi
  float *v12; // eax
  double v13; // st4
  double v14; // st6
  double v15; // st4
  double v16; // st5
  double v17; // st6
  int v18; // edi
  char **v19; // ebx
  float *v20; // eax
  const char **v21; // esi
  int v22; // ebx
  _DWORD *v23; // edi
  float *v24; // [esp-14h] [ebp-28h]

  v5 = a2;
  v6 = (int)this;
  if ( a2 > 0 )
  {
    v7 = (_DWORD *)(a5 + 12);
    v8 = a2;
    do
    {
      *v7 = 0;
      v7 += 4;
      --v8;
    }
    while ( v8 );
  }
  result = sub_102625A0(v6, 0);
  v10 = result;
  if ( result )
  {
    do
    {
      v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 576))(v6);
      v12 = (float *)(*(int (__thiscall **)(_DWORD *))(*v10 + 576))(v10);
      v13 = v12[1] - v11[1];
      v14 = v13 * v13;
      v15 = *v12 - *v11;
      v16 = v14;
      v17 = v12[2] - v11[2];
      if ( v15 * v15 + v16 + v17 * v17 <= 1048576.0 )
      {
        v18 = 0;
        if ( a2 > 0 )
        {
          v19 = a3;
          while ( (char *)v10[23] != *v19 && !sub_100D6240(v10, *v19) )
          {
            ++v18;
            v19 += 4;
            if ( v18 >= a2 )
              goto LABEL_15;
          }
          if ( a4 == 2 )
          {
            v24 = (float *)(*(int (__thiscall **)(_DWORD *))(*v10 + 576))(v10);
            v20 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 576))(this);
            sub_1011BC50(v20, v24, 0, 255, 0, 1, 20.0);
          }
          ++*(_DWORD *)(a5 + 16 * v18 + 12);
LABEL_15:
          v6 = (int)this;
        }
      }
      result = sub_102625A0(v6, (int)v10);
      v10 = result;
    }
    while ( result );
    v5 = a2;
  }
  if ( a4 )
  {
    result = (_DWORD *)Msg("Searching the PVS:\n");
    if ( v5 > 0 )
    {
      v21 = (const char **)a3;
      v22 = a2;
      v23 = (_DWORD *)(a5 + 12);
      do
      {
        result = (_DWORD *)Msg("   Found %d '%s' in the PVS.\n", *v23, *v21);
        v21 += 4;
        v23 += 4;
        --v22;
      }
      while ( v22 );
    }
  }
  return result;
}
