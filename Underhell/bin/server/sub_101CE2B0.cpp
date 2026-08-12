void __thiscall sub_101CE2B0(int this)
{
  int v2; // edi
  int *v3; // ecx
  double v4; // st7
  int *v5; // ecx
  int *v6; // ecx
  int v7; // eax
  float v8; // [esp+Ch] [ebp-4h]

  v2 = dword_106B31C8;
  if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v3 = *(int **)(this + 24);
      if ( v3 )
        sub_100194B0(v3, 124);
    }
    *(float *)(this + 124) = *(float *)(v2 + 12);
  }
  v4 = 0.0;
  if ( *(_DWORD *)(this + 864) != COERCE_INT(0.0) )
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
        sub_100194B0(v5, 864);
        v4 = 0.0;
      }
    }
    *(float *)(this + 864) = v4;
  }
  v8 = v4;
  if ( *(_DWORD *)(this + 904) != LODWORD(v8) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 904) = v4;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 904);
        v4 = 0.0;
      }
      *(float *)(this + 904) = v4;
    }
  }
  v7 = sub_100BDCE0(this, 25);
  if ( v7 >= 0 )
    sub_100C3330(this, v7);
  else
    sub_100C3330(this, 0);
}
