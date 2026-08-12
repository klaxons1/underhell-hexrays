int __thiscall sub_10287A60(int this)
{
  double v2; // st7
  int *v3; // ecx
  int *v4; // ecx
  int result; // eax
  int *v6; // ecx
  float v7; // [esp+0h] [ebp-18h]
  float v8; // [esp+4h] [ebp-14h]
  float v9; // [esp+8h] [ebp-10h]

  sub_102425D0(this);
  v2 = 0.0;
  *(_DWORD *)this = &CSpriteTrail::`vftable';
  if ( *(_DWORD *)(this + 892) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
      {
        sub_100194B0(v3, 892);
        v2 = 0.0;
      }
    }
    *(float *)(this + 892) = v2;
  }
  v9 = v2;
  v8 = v2;
  v7 = v2;
  sub_10287990((float *)(this + 904), v7, v8, v9);
  if ( *(_DWORD *)(this + 916) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 916);
    }
    *(float *)(this + 916) = 1.0;
  }
  result = this;
  if ( *(_DWORD *)(this + 888) != COERCE_INT(-1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 888) = -1.0;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 888);
      result = this;
      *(float *)(this + 888) = -1.0;
    }
  }
  return result;
}
