std::exception *__thiscall std::exception::operator=(std::exception *this, int a2)
{
  if ( this != (std::exception *)a2 )
  {
    std::exception::_Tidy(this);
    if ( *(_BYTE *)(a2 + 8) )
      std::exception::_Copy_str(this, *(char **)(a2 + 4));
    else
      *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 4);
  }
  return this;
}
