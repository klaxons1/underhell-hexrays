int __thiscall sub_102C7F00(int this)
{
  int *v2; // ecx
  bool v3; // zf
  int result; // eax
  double (*v5)(void); // eax
  double v6; // st7
  double v7; // st7
  float v8; // [esp+0h] [ebp-10h]

  if ( *(int *)(this + 1132) > 1 )
    sub_1023B860((_DWORD *)this, (int)"SuitRecharge.ChargingLoop");
  if ( *(_DWORD *)(this + 1140) == 1 && *(_DWORD *)(this + 904) != COERCE_INT(1.0) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v2 = *(int **)(this + 24);
      if ( v2 )
        sub_100194B0(v2, 904);
    }
    *(float *)(this + 904) = 1.0;
  }
  v3 = *(_DWORD *)(this + 1124) == 0;
  result = *(_DWORD *)(this + 1128);
  *(_DWORD *)(this + 1132) = 0;
  *(float *)(this + 1272) = (float)result;
  if ( v3 )
  {
    if ( result || ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B3CDC + 392))(dword_106B3CDC) <= 0.0 )
    {
      return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
    }
    else
    {
      v5 = *(double (**)(void))(*(_DWORD *)dword_106B3CDC + 392);
      if ( (*(_DWORD *)(this + 248) & 0x2000) != 0 )
      {
        v6 = v5();
        v7 = v6 + v6;
      }
      else
      {
        v7 = v5();
      }
      *(_DWORD *)(this + 1124) = (int)v7;
      v8 = (double)*(int *)(this + 1124) + *(float *)(dword_106B31C8 + 12);
      sub_100EC4A0((int *)this, v8, 0);
      return sub_100EC3F0((_DWORD *)this, (int)sub_102C7450, 0.0, 0);
    }
  }
  return result;
}
