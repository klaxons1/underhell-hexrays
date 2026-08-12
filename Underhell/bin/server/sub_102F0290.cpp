int __thiscall sub_102F0290(int this)
{
  int v2; // eax
  int v4; // [esp+Ch] [ebp-4h]

  sub_1023C380((_DWORD *)this, (int)"WallHealth.Recharge", 0.0, 0);
  v4 = (int)*(float *)(dword_106E254C + 44);
  *(_DWORD *)(this + 1128) = v4;
  *(float *)(this + 1196) = (float)v4;
  *(_DWORD *)(this + 1140) = 0;
  v2 = sub_100BDF40(this, "idle");
  sub_100C3330(this, v2);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  *(_DWORD *)(this + 1124) = 0;
  return sub_100EC3F0((_DWORD *)this, 0, 0.0, 0);
}
