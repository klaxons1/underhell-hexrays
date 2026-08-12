int __thiscall sub_101BE410(int *this)
{
  int v2; // esi
  int *v3; // ecx
  int v4; // esi
  int *v5; // ecx

  sub_1010C7F0((float *)dword_10614CA8, this[539], "kill", 5.0, 0, 0, 0);
  v2 = this[539];
  if ( *(_DWORD *)(v2 + 824) )
  {
    if ( *(_BYTE *)(v2 + 84) )
    {
      *(_BYTE *)(v2 + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(v2 + 24);
      if ( v3 )
        sub_100194B0(v3, 824);
    }
    *(_DWORD *)(v2 + 824) = 0;
  }
  v4 = this[539];
  if ( *(_DWORD *)(v4 + 816) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(v4 + 84) )
    {
      *(_BYTE *)(v4 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(v4 + 24);
      if ( v5 )
        sub_100194B0(v5, 816);
    }
    *(float *)(v4 + 816) = 0.0;
  }
  this[539] = 0;
  return sub_100EC4A0(this, -1.0, 0);
}
