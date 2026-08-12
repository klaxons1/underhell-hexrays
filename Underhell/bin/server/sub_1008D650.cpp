bool __thiscall sub_1008D650(_DWORD **this)
{
  bool result; // al

  result = sub_10023500();
  if ( result )
    return (*(int (__thiscall **)(_DWORD *))(*this[1] + 220))(this[1]) != 3;
  return result;
}
