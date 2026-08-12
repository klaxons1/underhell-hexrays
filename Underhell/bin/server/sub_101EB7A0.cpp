int __thiscall sub_101EB7A0(int this, int a2)
{
  double v2; // st7
  int result; // eax
  float *v5; // esi
  float v6; // [esp+8h] [ebp-4h]
  float v7; // [esp+8h] [ebp-4h]

  v2 = -1.0;
  result = *(_DWORD *)(this + 2664);
  v5 = (float *)(this + 2664);
  if ( result != COERCE_INT(-1.0) )
  {
    result = (**(int (__thiscall ***)(int, float *))(this + 2648))(this + 2648, v5);
    v2 = -1.0;
    *v5 = -1.0;
  }
  v6 = v2;
  if ( *(_DWORD *)(this + 2668) != LODWORD(v6) )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 2648))(this + 2648, this + 2668);
    v2 = -1.0;
    *(float *)(this + 2668) = -1.0;
  }
  v7 = v2;
  if ( *(_DWORD *)(this + 2656) != LODWORD(v7) )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 2648))(this + 2648, this + 2656);
    *(float *)(this + 2656) = -1.0;
  }
  return result;
}
