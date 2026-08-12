int __thiscall sub_104181E0(_DWORD **this)
{
  int result; // eax

  if ( this[4] )
    return (*(int (__thiscall **)(_DWORD *))(*this[4] + 24))(this[4]);
  return result;
}
