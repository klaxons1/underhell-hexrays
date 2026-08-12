int __thiscall sub_10327A60(_DWORD *this)
{
  int result; // eax

  sub_10397340();
  result = this[581];
  if ( result == 1 || result == 2 || result == 3 || result == 4 && *((_BYTE *)this + 4413) )
    return (*(int (__thiscall **)(_DWORD *))(*this + 2364))(this);
  return result;
}
