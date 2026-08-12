float *__thiscall sub_1026FC80(float *this, double *a2)
{
  float v4; // [esp+Ch] [ebp+8h]

  v4 = *a2;
  if ( *(_DWORD *)this != LODWORD(v4) )
  {
    (**((void (__thiscall ***)(int, float *))this - 6))((int)(this - 6), this);
    *this = v4;
  }
  return this;
}
