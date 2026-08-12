int __thiscall sub_1017D560(int this, int a2, float a3)
{
  int *v5; // ecx

  if ( *(float *)(this + 804) == a3 )
    return sub_10108AE0((int *)(this + 832), SLOBYTE(a3), a2, this);
  sub_10108AE0((int *)(this + 856), SLOBYTE(a3), a2, this);
  v5 = (int *)(this + 880);
  if ( a3 <= (double)*(float *)(this + 804) )
    v5 = (int *)(this + 808);
  return sub_10108AE0(v5, SLOBYTE(a3), a2, this);
}
