float *__thiscall sub_101440E0(float *this, float *a2)
{
  if ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    (**((void (__thiscall ***)(int, float *))this - 9))((int)(this - 9), this);
    *this = *a2;
  }
  return this;
}
