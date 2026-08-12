int __thiscall sub_10035130(int this, int *a2)
{
  int result; // eax
  int *v3; // esi
  int *v4; // ecx

  result = *(_DWORD *)(this + 2396);
  v3 = (int *)(this + 2396);
  if ( result != *a2 )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      result = *a2;
      *v3 = *a2;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 2396);
      result = *a2;
      *v3 = *a2;
    }
  }
  return result;
}
