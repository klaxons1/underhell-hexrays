int *__thiscall sub_1021B2B0(int this, int a2, __int16 a3)
{
  _WORD *v4; // ebx
  __int16 v5; // ax
  int *v6; // ecx
  int *v7; // ecx

  v4 = (_WORD *)(this + 872);
  v5 = this;
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v6 = *(int **)(this + 24);
    if ( v6 )
      sub_100194B0(v6, (_WORD)v4 - v5);
  }
  if ( *(_BYTE *)(this + 84) )
  {
    *(_BYTE *)(this + 88) |= 1u;
  }
  else
  {
    v7 = *(int **)(this + 24);
    if ( v7 )
      sub_100194B0(v7, 864);
  }
  return sub_1021B210((_DWORD *)this, (_DWORD *)(this + 864), v4, a2, a3);
}
