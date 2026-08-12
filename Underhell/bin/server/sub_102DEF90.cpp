void __thiscall sub_102DEF90(int this, float a2)
{
  float *v2; // esi
  float v3; // [esp+8h] [ebp+8h]

  v2 = (float *)(this + 5084);
  v3 = a2 + *(float *)(this + 5084);
  if ( *(_DWORD *)(this + 5084) != LODWORD(v3) )
  {
    (**(void (__thiscall ***)(int, float *))(this + 5080))(this + 5080, v2);
    *v2 = v3;
  }
  if ( *v2 > 100.0 && *(_DWORD *)v2 != COERCE_INT(100.0) )
  {
    (**((void (__thiscall ***)(int, float *))v2 - 1))((int)(v2 - 1), v2);
    *v2 = 100.0;
  }
}
