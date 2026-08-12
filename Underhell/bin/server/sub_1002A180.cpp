int *__thiscall sub_1002A180(int *this, _DWORD *a2)
{
  int v3; // edi

  v3 = *this - *a2;
  if ( *this != v3 )
  {
    (*(void (__thiscall **)(int *, int *))(*(this - 54) + 456))(this - 54, this);
    *this = v3;
  }
  return this;
}
