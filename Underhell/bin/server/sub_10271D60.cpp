int __thiscall sub_10271D60(int this, float a2, float a3)
{
  double v3; // st7
  int *v5; // ecx
  double v6; // st6
  int *v7; // ecx
  float v9; // [esp+0h] [ebp-18h] BYREF
  float v10; // [esp+4h] [ebp-14h]
  float v11; // [esp+8h] [ebp-10h]
  float v12; // [esp+Ch] [ebp-Ch] BYREF
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+14h] [ebp-4h]

  v3 = a2;
  if ( *(_DWORD *)(this + 804) != LODWORD(a2) )
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
        sub_100194B0(v5, 804);
        v3 = a2;
      }
    }
    *(float *)(this + 804) = v3;
  }
  v6 = a3;
  if ( *(_DWORD *)(this + 808) != LODWORD(a3) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v7 = *(int **)(this + 24);
      if ( v7 )
      {
        sub_100194B0(v7, 808);
        v3 = a2;
        v6 = a3;
      }
    }
    *(float *)(this + 808) = v6;
  }
  v9 = 0.0;
  v10 = 0.0;
  v11 = -0.1;
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.1;
  if ( v3 <= 0.0 )
    v9 = v3;
  else
    v12 = v3;
  if ( v6 <= 0.0 )
    v10 = v6;
  else
    v13 = v6;
  return sub_1025F360((_DWORD *)this, (int)&v9, (int)&v12);
}
