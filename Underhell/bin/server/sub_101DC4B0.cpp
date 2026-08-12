int __thiscall sub_101DC4B0(int this)
{
  int result; // eax

  sub_100E33C0((char *)this, 0);
  *(float *)(this + 808) = 150.0;
  *(_DWORD *)this = &CPhysicsSpring::`vftable';
  *(_DWORD *)(this + 800) = 0;
  *(float *)(this + 812) = 0.0;
  *(_BYTE *)(this + 804) = 0;
  *(_DWORD *)(this + 856) = -1;
  *(float *)(this + 816) = 2.0;
  result = this;
  *(float *)(this + 820) = 0.0099999998;
  return result;
}
