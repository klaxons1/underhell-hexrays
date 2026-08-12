void *__thiscall sub_1044E990(_DWORD *this, char a2)
{
  void *result; // eax
  SIZE_T v4; // ecx

  result = (void *)this[3];
  if ( result )
  {
    v4 = this[1] - (_DWORD)result;
    if ( this[1] - (int)result > 0 )
    {
      if ( a2 )
      {
        VirtualFree(result, v4, 0x4000u);
        result = (void *)this[3];
        this[1] = result;
      }
      *this = result;
    }
  }
  return result;
}
