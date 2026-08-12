float *__thiscall sub_1015B180(float *this, int *a2)
{
  float v3; // ecx
  float v5; // [esp+Ch] [ebp+8h]

  v3 = *this;
  v5 = v3 - (double)*a2;
  if ( LODWORD(v3) != LODWORD(v5) )
  {
    (**((void (__thiscall ***)(int, float *))this - 25))((int)(this - 25), this);
    *this = v5;
  }
  return this;
}
