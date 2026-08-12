int __thiscall sub_101EB830(int this, int a2)
{
  int result; // eax
  float *v3; // esi

  result = *(_DWORD *)(this + 2660);
  v3 = (float *)(this + 2660);
  if ( result != COERCE_INT(-1.0) )
  {
    result = (**(int (__thiscall ***)(int, float *))(this + 2648))(this + 2648, v3);
    *v3 = -1.0;
  }
  return result;
}
