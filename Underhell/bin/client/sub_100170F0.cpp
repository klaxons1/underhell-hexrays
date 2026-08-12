int __thiscall sub_100170F0(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *this;
  if ( v2 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    if ( *this )
      return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 4))(*this);
  }
  return result;
}
