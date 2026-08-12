void __thiscall sub_103EC280(int this, int a2)
{
  int v3; // edi
  int *v4; // ecx
  double v5; // st7
  int *v6; // ecx
  int *v7; // ecx
  int v8; // eax
  float v9; // [esp+Ch] [ebp-4h]

  v3 = dword_106B31C8;
  if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
        sub_100194B0(v4, 124);
    }
    *(float *)(this + 124) = *(float *)(v3 + 12);
  }
  v5 = 0.0;
  if ( *(_DWORD *)(this + 864) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
      {
        sub_100194B0(v6, 864);
        v5 = 0.0;
      }
    }
    *(float *)(this + 864) = v5;
  }
  v9 = v5;
  if ( *(_DWORD *)(this + 904) != LODWORD(v9) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 904) = v5;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 904);
        v5 = 0.0;
      }
      *(float *)(this + 904) = v5;
    }
  }
  v8 = sub_100BDF40(this, "tau_levitate");
  sub_100C3330(this, v8);
  *(_BYTE *)(this + 1725) = 1;
}
