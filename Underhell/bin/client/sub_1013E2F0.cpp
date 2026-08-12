int __thiscall sub_1013E2F0(_DWORD **this, int a2)
{
  int result; // eax

  if ( this[1] )
    result = (*(int (__thiscall **)(_DWORD *, float *, int))(*this[1] + 48))(this[1], &flt_1043A890, 4);
  if ( this[2] )
    result = (*(int (__thiscall **)(_DWORD *, float *, int))(*this[2] + 48))(this[2], &flt_1043A8A0, 4);
  if ( this[4] )
    result = (*(int (__thiscall **)(_DWORD *, float *, int))(*this[4] + 48))(this[4], &flt_1043A8B0, 4);
  if ( this[3] )
    return (*(int (__thiscall **)(_DWORD *, int))(*this[3] + 16))(this[3], dword_103E7CA0);
  return result;
}
