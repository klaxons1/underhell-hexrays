int *__thiscall sub_10125F80(int *this, _DWORD *a2)
{
  int v3; // edi

  v3 = *this - *a2;
  if ( *this != v3 )
  {
    (*(void (__thiscall **)(int *, int *))(*(this - 55) + 464))(this - 55, this);
    *this = v3;
  }
  return this;
}
