void *__thiscall sub_10302150(_BYTE *this, int a2)
{
  int (__stdcall *v2)(_BYTE *); // edx
  _DWORD *v3; // eax
  void *result; // eax

  v2 = *(int (__stdcall **)(_BYTE *))(*(_DWORD *)this + 8);
  this[804] = 0;
  v3 = (_DWORD *)v2(this);
  result = (void *)sub_10319100(*v3);
  if ( result != (void *)-1 )
  {
    if ( dword_106E2DA0 - (int)result - 1 > 0 )
      result = memcpy(
                 (void *)(dword_106E2D94 + 4 * (_DWORD)result),
                 (const void *)(dword_106E2D94 + 4 * (_DWORD)result + 4),
                 4 * (dword_106E2DA0 - (_DWORD)result - 1));
    --dword_106E2DA0;
  }
  return result;
}
