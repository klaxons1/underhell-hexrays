int __thiscall sub_100C8790(_DWORD *this, int a2, int *a3)
{
  int result; // eax
  int *v4; // esi

  result = a2;
  v4 = &this[a2];
  if ( *v4 != *a3 )
  {
    (*(void (__thiscall **)(_DWORD *, int *))(*(this - 445) + 1140))(this - 445, v4);
    result = *a3;
    *v4 = *a3;
  }
  return result;
}
