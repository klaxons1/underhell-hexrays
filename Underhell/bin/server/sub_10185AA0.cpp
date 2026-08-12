int __thiscall sub_10185AA0(unsigned int this, unsigned int a2)
{
  int v3; // eax
  int result; // eax

  v3 = *(_DWORD *)(this + 804);
  if ( v3 )
    *(_DWORD *)(a2 + 260) = v3;
  sub_1010DD80((_DWORD *)(this + 812), __SPAIR64__(this, a2), 0.0);
  result = dword_106B31C8;
  *(float *)(this + 808) = *(float *)(this + 800) + *(float *)(dword_106B31C8 + 12);
  return result;
}
