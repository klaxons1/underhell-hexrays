int __thiscall sub_100D0500(int this, int a2)
{
  int v2; // edi
  _DWORD *v3; // esi
  int result; // eax
  int *v5; // ecx

  if ( *(_DWORD *)(a2 + 24) == 5 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  v3 = (_DWORD *)(this + 1200);
  result = this;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
    *v3 = v2;
  }
  else
  {
    v5 = *(int **)(this + 24);
    if ( v5 )
      result = sub_100194B0(v5, (_WORD)v3 - result);
    *v3 = v2;
  }
  return result;
}
