unsigned int __thiscall sub_1013A940(_DWORD **this)
{
  unsigned int result; // eax

  result = sub_100E0780((int)this);
  if ( this[210] )
    return (*(int (__thiscall **)(_DWORD *, _DWORD **))(*this[210] + 4))(this[210], this + 211);
  return result;
}
