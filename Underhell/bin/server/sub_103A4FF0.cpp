int __thiscall sub_103A4FF0(int this, float *a2, float a3)
{
  int result; // eax

  if ( *(_DWORD *)(this + 2336) != 4 )
    sub_100218B0((_DWORD *)this, 0);
  sub_10044830((_DWORD *)this, 5.0);
  *(float *)(this + 3856) = flt_106F1CA8;
  *(float *)(this + 3860) = flt_106F1CAC;
  *(float *)(this + 3864) = flt_106F1CB0;
  *(float *)(this + 3856) = *a2;
  *(float *)(this + 3860) = a2[1];
  *(float *)(this + 3864) = a2[2];
  result = dword_106B31C8;
  *(float *)(this + 3868) = *(float *)(dword_106B31C8 + 12) + a3;
  return result;
}
