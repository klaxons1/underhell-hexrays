float *__thiscall sub_1015B120(float *this, float *a2)
{
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    (**((void (__thiscall ***)(int, float *))this - 23))((int)(this - 23), this);
    *this = *a2;
  }
  return this;
}
