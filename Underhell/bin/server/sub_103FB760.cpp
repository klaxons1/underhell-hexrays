int __thiscall sub_103FB760(_DWORD **this)
{
  int result; // eax

  result = (int)(this + 200);
  if ( this[2280] )
    return (*(int (__thiscall **)(_DWORD *, int))(*this[2280] + 4))(this[2280], result);
  return result;
}
