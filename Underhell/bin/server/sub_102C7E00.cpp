void __thiscall sub_102C7E00(int this)
{
  int *v2; // ecx
  int *v3; // ecx
  float *v4; // esi
  int v5; // edi
  float *v6; // eax
  int *v7; // ecx
  float v8; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(this + 864) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 864);
    }
    *(float *)(this + 864) = 0.0;
  }
  v8 = 1.0 - *(float *)(this + 1272) / ((double)*(int *)(this + 1148) + 0.1);
  if ( *(_DWORD *)(this + 904) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 904);
    }
    *(float *)(this + 904) = v8;
  }
  if ( 0.0 == *(float *)(this + 120) )
    *(float *)(this + 120) = *(float *)(dword_106B31C8 + 12);
  v4 = (float *)(this + 124);
  *(float *)(this + 120) = *(float *)(this + 124);
  v5 = dword_106B31C8;
  if ( *(_DWORD *)v4 != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    v6 = v4 - 31;
    if ( *((_BYTE *)v4 - 40) )
    {
      *((_BYTE *)v6 + 88) |= 1u;
      *v4 = *(float *)(v5 + 12);
    }
    else
    {
      v7 = (int *)*((_DWORD *)v6 + 6);
      if ( v7 )
        sub_100194B0(v7, 124);
      *v4 = *(float *)(v5 + 12);
    }
  }
}
