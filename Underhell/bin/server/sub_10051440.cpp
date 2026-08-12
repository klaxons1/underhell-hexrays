bool __thiscall sub_10051440(_DWORD *this)
{
  int *v2; // eax
  int v3; // edi
  bool result; // al

  v2 = *(int **)(this[1] + 2124);
  if ( v2 )
    v3 = *v2;
  else
    v3 = 0;
  (*(void (__thiscall **)(_DWORD *))(*this + 52))(this);
  result = 0;
  if ( v3 >= sub_1007DB30(100000) )
  {
    (*(void (__thiscall **)(_DWORD *))(*this + 52))(this);
    if ( v3 <= sub_1007DB30(100008) )
      return 1;
  }
  return result;
}
