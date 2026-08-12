int __thiscall sub_1027DC30(_DWORD **this)
{
  int result; // eax

  nullsub_4();
  result = ((int (__thiscall *)(_DWORD **))(*this)[4])(this);
  if ( *((_BYTE *)this + 273) )
  {
    result = (*(int (__thiscall **)(_DWORD *, int))(*this[53] + 52))(this[53], 1);
    *((_BYTE *)this + 273) = 0;
  }
  return result;
}
