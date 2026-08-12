void *__thiscall sub_1022E180(_DWORD *this)
{
  void *result; // eax
  signed int v3; // ecx

  result = (void *)this[3];
  if ( result )
  {
    v3 = this[1] - (_DWORD)result;
    if ( v3 > 0 )
    {
      VirtualFree(result, v3, 0x4000u);
      result = (void *)this[3];
      this[1] = result;
      *this = result;
    }
    if ( result )
    {
      result = (void *)VirtualFree(result, 0, 0x8000u);
      this[3] = 0;
    }
  }
  return result;
}
