int __thiscall sub_100FB160(int this, const char *a2, float a3)
{
  int *v4; // ecx
  double v5; // st7
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  const char *v9; // eax
  int *v10; // ecx
  int v11; // eax
  int *v12; // ecx
  int v13; // esi
  int v14; // edi
  int v15; // ebx
  int v16; // eax
  int *v17; // ecx
  int v18; // eax
  int *v19; // ecx
  int *v20; // ecx
  int result; // eax
  int *v22; // ecx
  int *v23; // ecx
  int *v24; // ecx
  float v26; // [esp+18h] [ebp-4h]
  float v27; // [esp+18h] [ebp-4h]

  sub_1005C620((_BYTE *)(this + 116), 255, 255, 255, HIBYTE(*(_DWORD *)(this + 116)));
  if ( *(_BYTE *)(this + 119) != 0xFF )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 116);
    }
    *(_BYTE *)(this + 119) = -1;
  }
  v5 = 0.0;
  if ( *(_DWORD *)(this + 928) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 928);
        v5 = 0.0;
      }
    }
    *(float *)(this + 928) = v5;
  }
  v26 = v5;
  if ( *(_DWORD *)(this + 932) != LODWORD(v26) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 932);
        v5 = 0.0;
      }
    }
    *(float *)(this + 932) = v5;
  }
  v27 = v5;
  if ( *(_DWORD *)(this + 936) != LODWORD(v27) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 936) = v5;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
      {
        sub_100194B0(v8, 936);
        v5 = 0.0;
      }
      *(float *)(this + 936) = v5;
    }
  }
  if ( a2 && *a2 )
    v9 = a2;
  else
    v9 = 0;
  *(_DWORD *)(this + 460) = v9;
  sub_100D8500((_DWORD *)this);
  if ( *(_BYTE *)(this + 113) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(this + 24);
      if ( v10 )
        sub_100194B0(v10, 113);
    }
    *(_BYTE *)(this + 113) = 2;
  }
  v11 = sub_100E8220((int)a2, a2);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 32))(this, v11);
  sub_1005C3A0(this, a3);
  sub_1005C410(this, a3);
  if ( *(_DWORD *)(this + 920) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(this + 24);
      if ( v12 )
        sub_100194B0(v12, 920);
    }
    *(float *)(this + 920) = 0.0;
  }
  v13 = 0;
  v14 = this + 832;
  v15 = this + 872;
  do
  {
    if ( *(_DWORD *)(v14 + 4 * v13) != -1 )
    {
      v16 = v14 - 832;
      if ( *(_BYTE *)(v14 - 748) )
      {
        *(_BYTE *)(v16 + 88) |= 1u;
      }
      else
      {
        v17 = *(int **)(v16 + 24);
        if ( v17 )
          sub_100194B0(v17, 4 * v13 + 832);
      }
      *(_DWORD *)(v14 + 4 * v13) = -1;
    }
    if ( *(_DWORD *)(v15 + 4 * v13) )
    {
      v18 = v15 - 872;
      if ( *(_BYTE *)(v15 - 788) )
      {
        *(_BYTE *)(v18 + 88) |= 1u;
      }
      else
      {
        v19 = *(int **)(v18 + 24);
        if ( v19 )
          sub_100194B0(v19, 4 * v13 + 872);
      }
      *(_DWORD *)(v15 + 4 * v13) = 0;
    }
    ++v13;
  }
  while ( v13 < 10 );
  if ( *(_DWORD *)(this + 820) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v20 = *(int **)(this + 24);
      if ( v20 )
        sub_100194B0(v20, 820);
    }
    *(_DWORD *)(this + 820) = 0;
  }
  result = *(_DWORD *)(this + 924);
  if ( result != COERCE_INT(10.0) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v22 = *(int **)(this + 24);
      if ( v22 )
        result = sub_100194B0(v22, 924);
    }
    *(float *)(this + 924) = 10.0;
  }
  if ( *(_DWORD *)(this + 824) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v23 = *(int **)(this + 24);
      if ( v23 )
        result = sub_100194B0(v23, 824);
    }
    *(_DWORD *)(this + 824) = 0;
  }
  if ( *(_DWORD *)(this + 828) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 828) = 0;
    }
    else
    {
      v24 = *(int **)(this + 24);
      if ( v24 )
        result = sub_100194B0(v24, 828);
      *(_DWORD *)(this + 828) = 0;
    }
  }
  return result;
}
