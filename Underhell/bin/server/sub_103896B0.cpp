char __thiscall sub_103896B0(int this, int a2)
{
  if ( *(_DWORD *)(this + 4184) == a2 && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4188) > -0.001
    || !sub_1004AFF0((_DWORD *)this, a2) )
  {
    return 0;
  }
  if ( *(_DWORD *)(this + 4184) != a2 )
  {
    sub_10050BE0((float *)(this + 4188));
    *(_DWORD *)(this + 4184) = a2;
  }
  return 1;
}
