float *__thiscall sub_1015B1B0(float *this, float *a2)
{
  float v4; // [esp+Ch] [ebp+8h]

  v4 = *a2 + *this;
  if ( *(_DWORD *)this != LODWORD(v4) )
  {
    (**((void (__thiscall ***)(int, float *))this - 25))((int)(this - 25), this);
    *this = v4;
  }
  return this;
}
