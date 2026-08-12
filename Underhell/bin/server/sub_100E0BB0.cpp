int __thiscall sub_100E0BB0(int this, int a2)
{
  int result; // eax
  char v3; // bl
  _BYTE *v4; // esi
  int *v5; // ecx

  result = a2;
  if ( *(_DWORD *)(a2 + 24) == 6 )
    v3 = *(_BYTE *)(a2 + 8);
  else
    v3 = 0;
  v4 = (_BYTE *)(this + 607);
  if ( v3 != *(_BYTE *)(this + 607) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *v4 = v3;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        result = sub_100194B0(v5, 607);
      *v4 = v3;
    }
  }
  return result;
}
