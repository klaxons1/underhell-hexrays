int __thiscall sub_103D7710(int this, int a2)
{
  int v3; // eax
  double v4; // st7
  int *v5; // ecx
  int *v6; // ecx
  int v7; // edi
  int result; // eax
  int *v9; // ecx
  float v10; // [esp+Ch] [ebp-Ch]
  float v11; // [esp+10h] [ebp-8h]

  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 == 3 || v3 == 15 )
  {
    v10 = *(float *)(a2 + 8);
    v4 = *(float *)(a2 + 12);
  }
  else
  {
    v10 = flt_106F1CA8;
    v4 = flt_106F1CAC;
  }
  v11 = v4;
  if ( *(_DWORD *)(this + 1124) != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 1124);
    }
    *(float *)(this + 1124) = v10;
  }
  if ( *(_DWORD *)(this + 1136) != LODWORD(v11) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 1136);
    }
    *(float *)(this + 1136) = v11;
  }
  v7 = dword_106B31C8;
  result = *(_DWORD *)(this + 1148);
  if ( result != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 1148) = *(float *)(v7 + 12);
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
        result = sub_100194B0(v9, 1148);
      *(float *)(this + 1148) = *(float *)(v7 + 12);
    }
  }
  return result;
}
