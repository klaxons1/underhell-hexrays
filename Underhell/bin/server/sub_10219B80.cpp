int __thiscall sub_10219B80(_DWORD *this, int a2)
{
  if ( a2 < 0 || a2 >= (*(int (__thiscall **)(_DWORD *))(*this + 12))(this) )
    return -1;
  else
    return *(_DWORD *)(this[2] + 4 * a2);
}
