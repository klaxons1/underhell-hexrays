char __thiscall sub_102FB200(_DWORD *this, int a2)
{
  char result; // al

  result = (*(int (__thiscall **)(_DWORD *))(*this + 264))(this);
  if ( result )
    return sub_100457E0(this, 104);
  return result;
}
