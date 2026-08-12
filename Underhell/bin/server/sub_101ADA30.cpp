unsigned int __thiscall sub_101ADA30(_DWORD **this)
{
  unsigned int result; // eax

  result = sub_100E0780((int)this);
  if ( this[207] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this[207] + 4))(this[207], this + 208);
  return result;
}
