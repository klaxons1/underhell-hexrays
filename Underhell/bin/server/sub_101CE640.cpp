int __thiscall sub_101CE640(int this, int a2)
{
  int result; // eax
  int v4; // edi
  int *v5; // ecx
  int *v6; // ecx

  result = sub_100BDCE0(this, a2);
  v4 = result;
  if ( result >= 0 )
  {
    if ( *(_DWORD *)(this + 5068) != result )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 5068) = v4;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          result = sub_100194B0(v6, 5068);
        *(_DWORD *)(this + 5068) = v4;
      }
    }
  }
  else if ( *(_DWORD *)(this + 5068) != -1 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 5068) = -1;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 5068);
      *(_DWORD *)(this + 5068) = -1;
    }
  }
  return result;
}
