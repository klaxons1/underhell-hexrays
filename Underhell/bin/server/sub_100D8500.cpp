int __thiscall sub_100D8500(_DWORD *this)
{
  int v1; // eax
  int result; // eax

  v1 = this[6];
  if ( *((_BYTE *)this + 304) )
  {
    if ( v1 )
      return *(_DWORD *)v1;
    else
      return 0;
  }
  else
  {
    ++dword_10697284;
    result = (*(int (__thiscall **)(_DWORD *))(*this + 84))(this);
    --dword_10697284;
  }
  return result;
}
