int __thiscall sub_103D9070(int this)
{
  int result; // eax

  sub_100E33C0((char *)this, 0);
  *(_DWORD *)this = &CSniperBullet::`vftable';
  *(_BYTE *)(this + 857) = 0;
  *(float *)(this + 800) = 0.0;
  *(float *)(this + 804) = 0.0;
  result = this;
  *(float *)(this + 808) = 0.0;
  *(_DWORD *)(this + 844) = -1;
  *(_DWORD *)(this + 860) = 0;
  *(float *)(this + 840) = 1000000000.0;
  return result;
}
