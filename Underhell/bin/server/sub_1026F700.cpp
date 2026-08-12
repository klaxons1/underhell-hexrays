float *__thiscall sub_1026F700(float *this, double *a2)
{
  float v4; // [esp+Ch] [ebp+8h]

  v4 = *a2;
  if ( *(_DWORD *)this != LODWORD(v4) )
  {
    (**((void (__thiscall ***)(int, float *))this - 9))((int)(this - 9), this);
    *this = v4;
  }
  return this;
}
