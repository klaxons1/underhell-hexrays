int __thiscall sub_100FD350(int this, int a2)
{
  long double v2; // st7
  long double v3; // st6
  char v4; // al
  long double v5; // rt1
  long double v6; // st6
  long double v7; // st7
  long double v8; // st6
  float v10; // [esp+0h] [ebp-4h]
  float v11; // [esp+0h] [ebp-4h]

  *(_BYTE *)(this + 856) = 0;
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v2 = *(float *)(a2 + 8);
    v3 = 0.0;
    if ( v2 < 0.0 )
    {
      v4 = 1;
      goto LABEL_6;
    }
  }
  else
  {
    v3 = 0.0;
    v2 = 0.0;
  }
  v4 = 0;
LABEL_6:
  v5 = v3;
  v6 = v2;
  v7 = v5;
  *(_BYTE *)(this + 840) = v4;
  v8 = fabs(v6);
  if ( v8 > 1.0 )
  {
    v8 = 1.0;
LABEL_8:
    v10 = v8 * *(float *)(this + 828);
    return sub_100FD1D0(this, v10);
  }
  if ( v8 >= v7 )
    goto LABEL_8;
  v11 = v7 * *(float *)(this + 828);
  return sub_100FD1D0(this, v11);
}
