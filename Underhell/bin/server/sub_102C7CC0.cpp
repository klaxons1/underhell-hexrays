int __thiscall sub_102C7CC0(int this)
{
  int v2; // edx
  int v3; // eax
  double v4; // st7
  int (__thiscall *v5)(int); // eax
  int result; // eax
  double v7; // st7
  int *v8; // ecx
  float v9; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_100E0970(this, v2, 0, 0);
  sub_10112C00(this + 320, 6);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(this, "models/props_combine/suit_charger001.mdl");
  sub_100EAB80((_DWORD *)this, 16);
  v3 = sub_100BDF40(this, "idle");
  sub_100C3330(this, v3);
  if ( (*(_DWORD *)(this + 248) & 0x4000) != 0 )
  {
    *(_DWORD *)(this + 1148) = 25;
  }
  else
  {
    if ( (*(_DWORD *)(this + 248) & 0x2000) != 0 )
      v4 = *(float *)(dword_106DE20C + 44);
    else
      v4 = *(float *)(dword_106DE1C4 + 44);
    *(_DWORD *)(this + 1148) = (int)v4;
  }
  sub_102C73D0((_DWORD *)this, (int)(double)*(int *)(this + 1148));
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)this + 584);
  *(_DWORD *)(this + 1140) = 0;
  *(_DWORD *)(this + 1144) = 32;
  result = v5(this);
  v7 = (double)*(int *)(this + 1128);
  *(_DWORD *)(this + 1124) = 0;
  *(float *)(this + 1272) = v7;
  v9 = 1.0 - v7 / (double)*(int *)(this + 1148);
  if ( *(_DWORD *)(this + 904) != LODWORD(v9) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
      *(float *)(this + 904) = v9;
    }
    else
    {
      v8 = *(int **)(this + 24);
      if ( v8 )
        result = sub_100194B0(v8, 904);
      *(float *)(this + 904) = v9;
    }
  }
  return result;
}
