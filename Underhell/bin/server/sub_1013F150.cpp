int __thiscall sub_1013F150(int this)
{
  int result; // eax

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CFire::`vftable';
  *(_DWORD *)(this + 800) = -1;
  *(_DWORD *)(this + 804) = -1;
  *(_DWORD *)(this + 868) = -1;
  *(_DWORD *)(this + 856) = 0;
  *(_DWORD *)(this + 872) = 5;
  *(_DWORD *)(this + 892) = -1;
  *(_DWORD *)(this + 880) = 0;
  *(_DWORD *)(this + 896) = 5;
  *(float *)(this + 812) = 0.0;
  *(_DWORD *)(this + 252) |= 0x40000u;
  *(float *)(this + 848) = 0.0;
  *(float *)(this + 816) = 0.0;
  *(_DWORD *)(this + 808) = 0;
  *(float *)(this + 820) = 0.0;
  result = this;
  *(float *)(this + 832) = 8.0;
  *(float *)(this + 828) = 0.0;
  return result;
}
