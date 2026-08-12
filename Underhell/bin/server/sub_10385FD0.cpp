int __thiscall sub_10385FD0(int this)
{
  int *v2; // ecx
  int v3; // edi
  int *v4; // ecx
  int *v5; // ecx
  int v6; // edi
  int result; // eax
  int *v8; // ecx

  if ( *(_DWORD *)(this + 3916) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 3916);
    }
    *(_DWORD *)(this + 3916) = -1;
  }
  v3 = dword_106B31C8;
  if ( *(_DWORD *)(this + 3924) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 3924);
    }
    *(float *)(this + 3924) = *(float *)(v3 + 12);
  }
  if ( *(_DWORD *)(this + 3920) != -1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 3920);
    }
    *(_DWORD *)(this + 3920) = -1;
  }
  v6 = dword_106B31C8;
  result = *(_DWORD *)(this + 3928);
  if ( result != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 3928) = *(float *)(v6 + 12);
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        result = sub_100194B0(v8, 3928);
      *(float *)(this + 3928) = *(float *)(v6 + 12);
    }
  }
  return result;
}
