int __thiscall sub_103CA0A0(int this, int a2)
{
  int v3; // eax
  double v4; // st7
  int *v5; // ecx
  int result; // eax
  int *v7; // ecx
  float v8; // [esp+8h] [ebp-Ch]
  float v9; // [esp+Ch] [ebp-8h]

  v3 = *(_DWORD *)(a2 + 24);
  if ( v3 == 3 || v3 == 15 )
  {
    v8 = *(float *)(a2 + 8);
    v4 = *(float *)(a2 + 12);
  }
  else
  {
    v8 = flt_106F1CA8;
    v4 = flt_106F1CAC;
  }
  v9 = v4;
  if ( *(_DWORD *)(this + 800) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
        sub_100194B0(v5, 800);
    }
    *(float *)(this + 800) = v8;
  }
  result = *(_DWORD *)(this + 804);
  if ( result != LODWORD(v9) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 804) = v9;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
        result = sub_100194B0(v7, 804);
      *(float *)(this + 804) = v9;
    }
  }
  return result;
}
