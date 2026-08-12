float *__thiscall sub_10147800(float *this, float *a2)
{
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    (**((void (__thiscall ***)(int, float *))this - 8))((int)(this - 8), this);
    *this = *a2;
  }
  return this;
}
