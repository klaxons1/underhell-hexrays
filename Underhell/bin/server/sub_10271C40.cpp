int __thiscall sub_10271C40(int this, const char *a2)
{
  int result; // eax
  int v4; // edi
  int *v5; // ecx
  int *v6; // ecx

  result = sub_10154380(a2);
  v4 = result;
  if ( result )
  {
    if ( *(_DWORD *)(this + 820) != result )
    {
      result = this;
      if ( *(_BYTE *)(this + 84) )
      {
        *(_BYTE *)(this + 88) |= 1u;
        *(_DWORD *)(this + 820) = v4;
      }
      else
      {
        v6 = *(int **)(this + 24);
        if ( v6 )
          result = sub_100194B0(v6, 820);
        *(_DWORD *)(this + 820) = v4;
      }
    }
  }
  else if ( *(_DWORD *)(this + 820) != 1023 )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(_DWORD *)(this + 820) = 1023;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 820);
      *(_DWORD *)(this + 820) = 1023;
    }
  }
  return result;
}
