int __thiscall sub_1011E780(_DWORD *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *this;
  if ( v2 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 12))(v2);
    if ( *this )
      result = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*this + 4))(*this);
  }
  *this = 0;
  return result;
}
