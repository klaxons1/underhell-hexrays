int __thiscall sub_1019D380(int this, int a2)
{
  int v3; // eax
  int result; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  _BYTE v8[12]; // [esp+8h] [ebp-18h] BYREF
  float v9; // [esp+14h] [ebp-Ch] BYREF
  float v10; // [esp+18h] [ebp-8h]
  float v11; // [esp+1Ch] [ebp-4h]

  v3 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)(this + 4) + 140))(this + 4, "vehicle_driver_eyes");
  result = (*(int (__thiscall **)(int, int, float *, _BYTE *))(*(_DWORD *)(this + 4) + 148))(this + 4, v3, &v9, v8);
  v5 = v9;
  *(float *)(this + 2244) = v9;
  v6 = v10;
  *(float *)(this + 2248) = v10;
  v7 = v11;
  *(float *)(this + 2252) = v11;
  *(float *)(this + 2240) = v7;
  *(float *)(this + 2232) = v5;
  *(float *)(this + 2236) = v6;
  *(float *)(this + 2256) = flt_10459240;
  *(_QWORD *)(this + 2260) = qword_10459244;
  return result;
}
