void __thiscall sub_101FF7D0(int this, float a2)
{
  double v2; // st7
  int v3; // edx
  float *v4; // edi
  int *v5; // ecx
  _BYTE *v6; // esi
  char v7; // bl
  int *v8; // ecx
  float v10; // [esp+1Ch] [ebp+8h]

  v2 = 1.0;
  v3 = this;
  if ( a2 <= 1.0 )
  {
    v2 = a2;
    if ( a2 < 0.0 )
      v2 = 0.0;
  }
  v10 = v2;
  v4 = (float *)(this + 832);
  if ( *(_DWORD *)(this + 832) != LODWORD(v10) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(this + 24);
      if ( v5 )
      {
        sub_100194B0(v5, 832);
        v3 = this;
      }
    }
    *v4 = v10;
  }
  v6 = (_BYTE *)(v3 + 821);
  v7 = *(_BYTE *)(v3 + 821) == 0;
  if ( v7 != *(_BYTE *)(v3 + 821) )
  {
    if ( *(_BYTE *)(v3 + 84) )
    {
      *(_BYTE *)(v3 + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(v3 + 24);
      if ( v8 )
      {
        sub_100194B0(v8, 821);
        v3 = this;
      }
    }
    *v6 = v7;
  }
  sub_101FF140((_DWORD *)v3, *v4);
}
