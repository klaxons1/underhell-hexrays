void __thiscall std::exception::_Tidy(std::exception *this)
{
  if ( *((_BYTE *)this + 8) )
    sub_10034930(*((_DWORD *)this + 1));
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 8) = 0;
}
