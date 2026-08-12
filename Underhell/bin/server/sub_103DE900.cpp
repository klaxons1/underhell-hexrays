int __thiscall sub_103DE900(int this, int a2)
{
  int v2; // edx
  int v3; // edi
  _DWORD *v4; // esi
  int *v5; // ecx
  _DWORD *v6; // ebx
  int *v7; // ecx
  int v8; // edi
  float *v9; // esi
  int *v10; // ecx
  float *v11; // edi
  int *v12; // ecx
  int result; // eax

  v2 = this;
  if ( *(_DWORD *)(a2 + 24) == 5 )
    v3 = *(_DWORD *)(a2 + 8);
  else
    v3 = 0;
  v4 = (_DWORD *)(this + 852);
  if ( *(_DWORD *)(this + 852) != v3 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 852);
        v2 = this;
      }
    }
    *v4 = v3;
  }
  v6 = (_DWORD *)(v2 + 848);
  if ( *(_DWORD *)(v2 + 848) != *v4 )
  {
    if ( *(_BYTE *)(v2 + 84) )
    {
      *(_BYTE *)(v2 + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(v2 + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 848);
        v2 = this;
      }
    }
    *v6 = *v4;
  }
  v8 = dword_106B31C8;
  v9 = (float *)(v2 + 856);
  if ( *(_DWORD *)(v2 + 856) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(v2 + 84) )
    {
      *(_BYTE *)(v2 + 88) |= 1u;
    }
    else
    {
      v10 = *(int **)(v2 + 24);
      if ( v10 )
      {
        sub_100194B0(v10, 856);
        v2 = this;
      }
    }
    *v9 = *(float *)(v8 + 12);
  }
  v11 = (float *)(v2 + 860);
  if ( *(_DWORD *)(v2 + 860) != *(_DWORD *)v9 )
  {
    if ( *(_BYTE *)(v2 + 84) )
    {
      *(_BYTE *)(v2 + 88) |= 1u;
    }
    else
    {
      v12 = *(int **)(v2 + 24);
      if ( v12 )
      {
        sub_100194B0(v12, 860);
        v2 = this;
      }
    }
    *v11 = *v9;
  }
  *(_DWORD *)(v2 + 916) = -1;
  result = sub_100EC3F0((_DWORD *)v2, 0, *(float *)(dword_106B31C8 + 12), (int)"BlendComplete");
  if ( *(_DWORD *)(dword_106EDBC4 + 48) )
    return DevMsg(1, "%.2f INPUT: Blend mode set to %d\n", *(float *)(dword_106B31C8 + 12), *v6);
  return result;
}
