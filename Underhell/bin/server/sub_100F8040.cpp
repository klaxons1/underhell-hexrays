char __thiscall sub_100F8040(int this, int a2, int a3, float a4, int a5)
{
  char result; // al
  unsigned int v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  int v10; // edx
  int v11; // ecx
  unsigned int v12; // eax
  int *v13; // ecx
  int v14; // edi
  int *v15; // ecx
  int v16; // edi
  int *v17; // ecx

  if ( !a2 )
    return 0;
  v7 = *(_DWORD *)(this + 3512);
  if ( v7 == -1
    || (v8 = &off_1061BE18[4 * (*(_DWORD *)(this + 3512) & 0xFFF) + 1], v9 = v7 >> 12, v8[1] != v9)
    || !*v8
    || (v8[1] != v9 ? (v10 = 0) : (v10 = *v8), v10 == a2) )
  {
    if ( a3 )
    {
      sub_100F6A40((unsigned int *)(this + 3512), a2);
    }
    else
    {
      v12 = *(_DWORD *)(this + 3512);
      if ( v12 != -1
        && off_1061BE18[4 * (*(_DWORD *)(this + 3512) & 0xFFF) + 2] == v12 >> 12
        && off_1061BE18[4 * (*(_DWORD *)(this + 3512) & 0xFFF) + 1] )
      {
        if ( *(_BYTE *)(this + 84) )
        {
          *(_BYTE *)(this + 88) |= 1u;
          *(_DWORD *)(this + 3512) = -1;
        }
        else
        {
          v13 = *(int **)(this + 24);
          if ( v13 )
            sub_100194B0(v13, 3512);
          *(_DWORD *)(this + 3512) = -1;
        }
      }
    }
  }
  else
  {
    if ( v8[1] == v9 )
      v11 = *v8;
    else
      v11 = 0;
    result = sub_10135A60(v11);
    if ( !result )
      return result;
  }
  if ( a5 <= 0 )
  {
    a2 = sub_101EE630(this);
    sub_100F7C10((_DWORD *)(this + 3492), &a2);
  }
  else
  {
    sub_100F7C10((_DWORD *)(this + 3492), &a5);
  }
  v14 = dword_106B31C8;
  if ( *(_DWORD *)(this + 3496) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v15 = *(int **)(this + 24);
      if ( v15 )
        sub_100194B0(v15, 3496);
    }
    *(float *)(this + 3496) = *(float *)(v14 + 12);
  }
  v16 = a3;
  if ( *(_DWORD *)(this + 3484) != a3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v17 = *(int **)(this + 24);
      if ( v17 )
        sub_100194B0(v17, 3484);
    }
    *(_DWORD *)(this + 3484) = v16;
  }
  if ( *(_DWORD *)(this + 2256) != LODWORD(a4) )
  {
    (**(void (__thiscall ***)(int, int))(this + 2192))(this + 2192, this + 2256);
    *(float *)(this + 2256) = a4;
  }
  return 1;
}
