int __thiscall sub_101EB580(int this)
{
  double v1; // st7
  int result; // eax
  float *v4; // esi
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+8h] [ebp-4h]
  float v7; // [esp+8h] [ebp-4h]
  float v8; // [esp+8h] [ebp-4h]

  v1 = -1.0;
  result = *(_DWORD *)(this + 2664);
  v4 = (float *)(this + 2664);
  if ( result != COERCE_INT(-1.0) )
  {
    result = (**(int (__thiscall ***)(int, float *))(this + 2648))(this + 2648, v4);
    v1 = -1.0;
    *v4 = -1.0;
  }
  v5 = v1;
  if ( *(_DWORD *)(this + 2668) != LODWORD(v5) )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 2648))(this + 2648, this + 2668);
    v1 = -1.0;
    *(float *)(this + 2668) = -1.0;
  }
  v6 = v1;
  if ( *(_DWORD *)(this + 2652) != LODWORD(v6) )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 2648))(this + 2648, this + 2652);
    v1 = -1.0;
    *(float *)(this + 2652) = -1.0;
  }
  v7 = v1;
  if ( *(_DWORD *)(this + 2660) != LODWORD(v7) )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 2648))(this + 2648, this + 2660);
    v1 = -1.0;
    *(float *)(this + 2660) = -1.0;
  }
  v8 = v1;
  if ( *(_DWORD *)(this + 2656) != LODWORD(v8) )
  {
    result = (**(int (__thiscall ***)(int, int))(this + 2648))(this + 2648, this + 2656);
    *(float *)(this + 2656) = -1.0;
  }
  return result;
}
