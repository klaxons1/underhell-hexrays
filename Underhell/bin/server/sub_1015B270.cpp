float *__thiscall sub_1015B270(float *this, float *a2)
{
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    (**((void (__thiscall ***)(int, float *))this - 21))((int)(this - 21), this);
    *this = *a2;
  }
  return this;
}
