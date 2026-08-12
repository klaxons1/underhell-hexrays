int __thiscall sub_100C2520(int this, int a2, float a3)
{
  double v5; // st7
  double v6; // st7
  bool v7; // c0
  bool v8; // c3
  double v9; // st7
  double v10; // st5
  int *v11; // ecx
  int result; // eax
  float v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+28h] [ebp+Ch]

  v5 = a3 + *(float *)(this + 904);
  v14 = v5;
  if ( v5 < 0.0 || v5 >= 1.0 )
  {
    if ( *(_BYTE *)(this + 897) )
    {
      v9 = v5 - (double)(int)v5;
    }
    else
    {
      v10 = v5;
      v9 = 1.0;
      if ( v10 < 0.0 )
        v9 = 0.0;
    }
    v14 = v9;
  }
  else
  {
    v6 = sub_100C11C0(this, a2, *(_DWORD *)(this + 908));
    v7 = v14 < v6;
    v8 = v14 == v6;
    v9 = v14;
    if ( v7 || v8 )
      goto LABEL_11;
  }
  *(_BYTE *)(this + 896) = 1;
LABEL_11:
  v13 = v9;
  if ( *(_DWORD *)(this + 904) != LODWORD(v13) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 904) = v9;
    }
    else
    {
      v11 = *(int **)(this + 24);
      if ( v11 )
      {
        sub_100194B0(v11, 904);
        v9 = v14;
      }
      *(float *)(this + 904) = v9;
    }
  }
  *(float *)(this + 800) = ((double (__thiscall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)this + 740))(
                             this,
                             a2,
                             *(_DWORD *)(this + 908));
  sub_100E98A0(8);
  if ( !sub_10101E40(*(_DWORD *)(this + 1056)) )
    return sub_10101EB0(*(_DWORD *)(this + 1056));
  result = sub_100FE180(*(float *)(dword_106B31C8 + 12), 0.0);
  if ( !(_BYTE)result )
    return sub_10101EB0(*(_DWORD *)(this + 1056));
  return result;
}
