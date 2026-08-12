int __thiscall sub_102B6A00(int this, float a2)
{
  int *v3; // ecx
  int *v4; // ecx
  int v5; // edi
  int result; // eax
  int *v7; // ecx

  if ( *(_DWORD *)(this + 804) != 1 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 804);
    }
    *(_DWORD *)(this + 804) = 1;
  }
  if ( *(_DWORD *)(this + 808) != LODWORD(a2) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 808);
    }
    *(float *)(this + 808) = a2;
  }
  v5 = dword_106B31C8;
  result = *(_DWORD *)(this + 812);
  if ( result != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 812) = *(float *)(v5 + 12);
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        result = sub_100194B0(v7, 812);
      *(float *)(this + 812) = *(float *)(v5 + 12);
    }
  }
  return result;
}
