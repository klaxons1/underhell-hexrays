int __thiscall sub_1020D700(int this, int a2)
{
  float *v3; // edx
  int *v4; // ecx
  int v5; // ebx
  int *v6; // ecx
  double v7; // st7
  int *v8; // ecx
  double v9; // st7
  int result; // eax
  int *v11; // ecx
  float *v12; // [esp+Ch] [ebp-4h]
  float v13; // [esp+18h] [ebp+8h]
  float v14; // [esp+18h] [ebp+8h]

  v3 = (float *)(this + 904);
  v12 = (float *)(this + 904);
  if ( *(_DWORD *)(this + 904) != COERCE_INT(0.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v4 = *(int **)(this + 24);
      if ( v4 )
      {
        sub_100194B0(v4, 904);
        v3 = v12;
      }
    }
    *v3 = 0.0;
  }
  v5 = dword_106B31C8;
  if ( *(_DWORD *)(this + 124) != *(_DWORD *)(dword_106B31C8 + 12) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v6 = *(int **)(this + 24);
      if ( v6 )
        sub_100194B0(v6, 124);
    }
    *(float *)(this + 124) = *(float *)(v5 + 12);
  }
  sub_100C3330(this, a2);
  sub_100C1A10(this);
  sub_100EA9A0((int *)this, 0x40000);
  if ( *(int *)(this + 1528) <= 0 )
    v7 = -1.0;
  else
    v7 = 1.0;
  v13 = v7;
  if ( *(_DWORD *)(this + 864) != LODWORD(v13) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        sub_100194B0(v8, 864);
    }
    *(float *)(this + 864) = v13;
  }
  if ( *(int *)(this + 1528) <= 0 )
    v9 = 0.99900001;
  else
    v9 = 0.0;
  v14 = v9;
  result = *(_DWORD *)v12;
  if ( *(_DWORD *)v12 != LODWORD(v14) )
  {
    result = (int)(v12 - 226);
    if ( *((_BYTE *)v12 - 820) )
    {
      *(_BYTE *)(result + 88) |= 1u;
      *v12 = v14;
    }
    else
    {
      v11 = *(int **)(result + 24);
      if ( v11 )
        result = sub_100194B0(v11, 904);
      *v12 = v14;
    }
  }
  return result;
}
