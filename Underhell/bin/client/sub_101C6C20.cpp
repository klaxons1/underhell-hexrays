int __thiscall sub_101C6C20(_DWORD *this)
{
  int result; // eax

  result = this[5];
  *this = &off_103528C0;
  if ( result )
  {
    if ( !*((_BYTE *)this + 16) )
    {
      result = sub_10034930(result);
      this[5] = 0;
    }
  }
  return result;
}
