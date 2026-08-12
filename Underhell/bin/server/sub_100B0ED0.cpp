int __thiscall sub_100B0ED0(_DWORD *this)
{
  _DWORD *v1; // ecx
  int result; // eax

  v1 = (_DWORD *)*this;
  for ( result = 0; v1; ++result )
    v1 = (_DWORD *)*v1;
  return result;
}
