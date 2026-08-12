int __thiscall sub_10047BD0(_DWORD *this)
{
  int result; // eax

  result = this[28] >> 3;
  if ( (this[28] & 8) != 0 )
    return (*(int (__thiscall **)(_DWORD *))(*this + 376))(this);
  return result;
}
