DName *__thiscall DName::operator+=(DName *this, int a2)
{
  if ( *((char *)this + 4) <= 1 )
  {
    if ( *(_DWORD *)a2 )
    {
      if ( *(_DWORD *)this )
      {
        DName::append(this, *(struct DNameNode **)a2);
      }
      else
      {
        *(_DWORD *)this = *(_DWORD *)a2;
        *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
      }
    }
    else
    {
      DName::operator+=((int **)this, *(char *)(a2 + 4));
    }
  }
  return this;
}
