int *__thiscall sub_10151D40(int *this, _DWORD *a2)
{
  int v3; // edi

  v3 = *this & *a2;
  if ( *this != v3 )
  {
    (*(void (__thiscall **)(int *, int *))*(this - 15))(this - 15, this);
    *this = v3;
  }
  return this;
}
