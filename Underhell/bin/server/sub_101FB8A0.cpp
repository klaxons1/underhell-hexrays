int __thiscall sub_101FB8A0(int this)
{
  int v2; // esi
  int v3; // ebx
  int v4; // eax
  int *v5; // ecx
  int *v6; // ecx
  int *v7; // ecx
  int *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  int result; // eax

  v2 = 0;
  v3 = this + 800;
  do
  {
    if ( *(_DWORD *)(v3 + 4 * v2) )
    {
      v4 = v3 - 800;
      if ( *(_BYTE *)(v3 - 716) )
      {
        *(_BYTE *)(v4 + 88) |= 1u;
      }
      else
      {
        v5 = *(int **)(v4 + 24);
        if ( v5 )
          sub_100194B0(v5, 4 * v2 + 800);
      }
      *(_DWORD *)(v3 + 4 * v2) = 0;
    }
    if ( *(_DWORD *)(this + 4 * v2 + 872) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          sub_100194B0(v6, 4 * v2 + 872);
      }
      *(_DWORD *)(this + 4 * v2 + 872) = 0;
    }
    if ( *(_DWORD *)(this + 4 * v2 + 944) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v7 = *(int **)(this + 24);
        if ( v7 )
          sub_100194B0(v7, 4 * v2 + 944);
      }
      *(_DWORD *)(this + 4 * v2 + 944) = 0;
    }
    if ( *(_DWORD *)(this + 4 * v2 + 1016) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v8 = *(int **)(this + 24);
        if ( v8 )
          sub_100194B0(v8, 4 * v2 + 1016);
      }
      *(_DWORD *)(this + 4 * v2 + 1016) = 0;
    }
    if ( *(_DWORD *)(this + 4 * v2 + 1088) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v9 = *(int **)(this + 24);
        if ( v9 )
          sub_100194B0(v9, 4 * v2 + 1088);
      }
      *(_DWORD *)(this + 4 * v2 + 1088) = 0;
    }
    if ( *(_DWORD *)(this + 4 * v2 + 1160) )
    {
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
      }
      else
      {
        v10 = *(int **)(this + 24);
        if ( v10 )
          sub_100194B0(v10, 4 * v2 + 1160);
      }
      *(_DWORD *)(this + 4 * v2 + 1160) = 0;
    }
    ++v2;
  }
  while ( v2 < 18 );
  sub_100EC3F0((_DWORD *)this, (int)sub_1029D7A0, 0.0, 0);
  result = sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
  *(_DWORD *)(this + 1304) = 0;
  return result;
}
