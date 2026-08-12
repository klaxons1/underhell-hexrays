int __thiscall sub_1025B3F0(int this)
{
  int result; // eax

  sub_102585C0((_DWORD *)this);
  *(_DWORD *)this = &CTriggerHurt::`vftable';
  *(_DWORD *)(this + 1140) = -1;
  *(_DWORD *)(this + 1128) = 0;
  *(_DWORD *)(this + 1144) = 5;
  *(_DWORD *)(this + 1164) = -1;
  *(_DWORD *)(this + 1152) = 0;
  *(_DWORD *)(this + 1168) = 5;
  *(_DWORD *)(this + 1176) = 0;
  *(_DWORD *)(this + 1180) = 0;
  *(_DWORD *)(this + 1184) = 0;
  *(_DWORD *)(this + 1188) = 0;
  *(_DWORD *)(this + 1192) = 0;
  *(float *)(this + 1104) = 20.0;
  result = this;
  *(float *)(this + 1100) = 0.5;
  return result;
}
