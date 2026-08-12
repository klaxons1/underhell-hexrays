int __thiscall sub_102F0A00(int this)
{
  int v2; // edx
  int v3; // eax
  int v4; // edx
  int (__thiscall *v5)(int); // eax
  int result; // eax
  double v7; // st7
  int *v8; // ecx
  float v9; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)this + 100))(this);
  sub_100E0970(this, v2, 0, 0);
  sub_10112C00(this + 320, 6);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 584))(this);
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)this + 104))(
    this,
    "models/props_combine/health_charger001.mdl");
  sub_100EAB80((_DWORD *)this, 16);
  v3 = sub_100BDF40(this, "idle");
  sub_100C3330(this, v3);
  v4 = *(_DWORD *)this;
  *(_DWORD *)(this + 1128) = (int)*(float *)(dword_106E254C + 44);
  v5 = *(int (__thiscall **)(int))(v4 + 584);
  *(_DWORD *)(this + 1140) = 0;
  *(_DWORD *)(this + 1124) = 0;
  *(_DWORD *)(this + 1144) = 32;
  result = v5(this);
  v7 = (double)*(int *)(this + 1128);
  *(float *)(this + 1196) = v7;
  v9 = 1.0 - v7 / *(float *)(dword_106E254C + 44);
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
