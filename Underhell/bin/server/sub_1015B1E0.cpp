float *__thiscall sub_1015B1E0(float *this, float *a2)
{
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    (**((void (__thiscall ***)(int, float *))this - 25))((int)(this - 25), this);
    *this = *a2;
  }
  return this;
}
