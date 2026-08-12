int *__thiscall sub_101E9DD0(int *this, float *a2)
{
  int v3; // edi

  v3 = *this - (int)*a2;
  if ( *this != v3 )
  {
    (*(void (__thiscall **)(int *, int *))(*(this - 1002) + 1628))(this - 1002, this);
    *this = v3;
  }
  return this;
}
