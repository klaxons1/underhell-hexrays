char __thiscall sub_102DEF10(int this, float a2)
{
  float *v3; // esi
  float v4; // [esp+8h] [ebp+8h]

  if ( *(_DWORD *)(dword_106E08E4 + 48) )
    return 1;
  v3 = (float *)(this + 5084);
  v4 = *(float *)(this + 5084) - a2;
  if ( *(_DWORD *)(this + 5084) != LODWORD(v4) )
  {
    (**(void (__thiscall ***)(int, int))(this + 5080))(this + 5080, this + 5084);
    *v3 = v4;
  }
  if ( *v3 >= 0.0 )
    return 1;
  if ( *(_DWORD *)v3 != COERCE_INT(0.0) )
  {
    (**((void (__thiscall ***)(int, float *))v3 - 1))((int)(v3 - 1), v3);
    *v3 = 0.0;
  }
  return 0;
}
