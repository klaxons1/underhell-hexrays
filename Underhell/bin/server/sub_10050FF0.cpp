char __thiscall sub_10050FF0(_DWORD **this)
{
  char result; // al

  result = (*(int (__thiscall **)(_DWORD *))(*this[1] + 1268))(this[1]);
  if ( result )
    return ((unsigned __int8 (__thiscall *)(_DWORD **))(*this)[73])(this) != 0;
  return result;
}
