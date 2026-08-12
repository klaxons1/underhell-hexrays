int __thiscall sub_10325150(int this, char a2)
{
  int v3; // edi
  int v4; // ebx
  double v5; // st7
  int result; // eax
  double v7; // st6
  long double v8; // st6
  int *v9; // ecx
  double v10; // st7
  double v11; // st3
  double v12; // st5
  double v13; // st3
  double v14; // st4
  double v15; // st5
  double v16; // st7
  float v17; // [esp+8h] [ebp-10h]
  float v18; // [esp+10h] [ebp-8h]
  float v19; // [esp+14h] [ebp-4h]

  v3 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) && *(_BYTE *)(v3 + 306) == 8 )
    return sub_103244B0(this, 0);
  v4 = dword_106B31C8;
  v5 = *(float *)(v4 + 12) - sub_100E92C0((_DWORD *)this, 0);
  result = *(_DWORD *)(this + 248) >> 17;
  v7 = *(float *)(this + 9932) + v5;
  *(float *)(this + 9932) = v7;
  v8 = fabs(sin(v7 * 5.0)) * (*(float *)(this + 9928) * v5);
  v19 = *(float *)(this + 3668) - v8;
  if ( (result & 1) == 0 && *(_DWORD *)(this + 3668) != LODWORD(v19) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v9 = *(int **)(this + 24);
      if ( v9 )
      {
        result = sub_100194B0(v9, 3668);
        v18 = v5;
        v5 = v18;
      }
    }
    *(float *)(this + 3668) = v19;
  }
  if ( a2 )
  {
    if ( *(float *)(this + 9948) <= 1.0 )
    {
      v16 = v5 + *(float *)(this + 9952);
    }
    else
    {
      v10 = *(float *)(this + 9948) - 1.0;
      if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
        sub_100DAE60(v3);
      v11 = *(float *)(v3 + 584) - *(float *)(this + 9940);
      v12 = v11 * v11;
      v13 = *(float *)(v3 + 580) - *(float *)(this + 9936);
      v14 = v12;
      v15 = *(float *)(v3 + 588) - *(float *)(this + 9944);
      if ( v13 * v13 + v14 + v15 * v15 < v10 * v10 )
      {
        if ( *(float *)(dword_106B31C8 + 12) - *(float *)(this + 9952) > -0.001 )
          return sub_103244B0(this, 0);
        goto LABEL_20;
      }
      v16 = *(float *)(dword_106B31C8 + 12) + 3.0;
    }
    *(float *)(this + 9952) = v16;
LABEL_20:
    result = *(_DWORD *)(v3 + 252) >> 11;
    if ( (*(_DWORD *)(v3 + 252) & 0x800) != 0 )
      result = sub_100DAE60(v3);
    *(float *)(this + 9936) = *(float *)(v3 + 580);
    *(float *)(this + 9940) = *(float *)(v3 + 584);
    *(float *)(this + 9944) = *(float *)(v3 + 588);
    v17 = v8;
    *(float *)(this + 9948) = v17;
    if ( (*(_BYTE *)(v3 + 256) & 1) != 0 )
    {
      *(float *)(v3 + 552) = 0.0;
      return sub_100EA9A0((int *)v3, 1);
    }
  }
  return result;
}
