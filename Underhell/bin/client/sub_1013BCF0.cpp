int __thiscall sub_1013BCF0(int this, float a2, float a3, float a4)
{
  int v5; // eax
  double v6; // st7
  double v7; // st7
  double v8; // st6
  bool v9; // c0
  bool v10; // c3
  float v12[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 1232) & 1) != 0 )
  {
    a2 = *(float *)(this + 1220) + a2;
    a3 = *(float *)(this + 1224) + a3;
    a4 = *(float *)(this + 1228) + a4;
  }
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v12);
  v5 = *(_DWORD *)(this + 1232);
  if ( (v5 & 2) != 0 )
  {
    v6 = v12[0];
  }
  else
  {
    v6 = a2;
    v12[0] = a2;
  }
  if ( (v5 & 4) == 0 )
    v12[1] = a3;
  if ( (v5 & 8) == 0 )
    v12[2] = a4;
  if ( v6 <= *(float *)(dword_10432834 + 44) )
  {
    v8 = -*(float *)(dword_1043287C + 44);
    v9 = v8 < v6;
    v10 = v8 == v6;
    v7 = v8;
    if ( v9 || v10 )
      return (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v12);
  }
  else
  {
    v7 = *(float *)(dword_10432834 + 44);
  }
  v12[0] = v7;
  return (*(int (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 80))(dword_1041315C, v12);
}
