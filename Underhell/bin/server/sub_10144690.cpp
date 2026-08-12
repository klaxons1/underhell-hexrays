int __thiscall sub_10144690(int this, int a2)
{
  double v2; // st7
  int result; // eax
  float *v4; // esi
  float v5; // [esp+8h] [ebp+8h]

  *(_DWORD *)(this + 872) |= 4u;
  if ( *(_DWORD *)(a2 + 24) == 1 )
    v2 = *(float *)(a2 + 8);
  else
    v2 = 0.0;
  result = *(_DWORD *)(this + 848);
  v5 = v2;
  v4 = (float *)(this + 848);
  if ( result != LODWORD(v5) )
  {
    result = (**(int (__thiscall ***)(int, float *))(this + 800))(this + 800, v4);
    *v4 = v5;
  }
  return result;
}
