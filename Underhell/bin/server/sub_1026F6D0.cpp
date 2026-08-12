float *__thiscall sub_1026F6D0(float *this, double *a2)
{
  float v4; // [esp+Ch] [ebp+8h]

  v4 = *a2;
  if ( *(_DWORD *)this != LODWORD(v4) )
  {
    (**((void (__thiscall ***)(int, float *))this - 8))((int)(this - 8), this);
    *this = v4;
  }
  return this;
}
