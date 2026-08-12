int __thiscall sub_102B6AD0(int this)
{
  int *v2; // ecx
  int v3; // ebx
  int result; // eax
  int *v5; // ecx

  if ( *(_DWORD *)(this + 804) != 2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 804);
    }
    *(_DWORD *)(this + 804) = 2;
  }
  v3 = dword_106B31C8;
  result = *(_DWORD *)(this + 812);
  if ( result != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 812) = *(float *)(v3 + 12);
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 812);
      *(float *)(this + 812) = *(float *)(v3 + 12);
    }
  }
  return result;
}
