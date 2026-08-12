_DWORD *__thiscall sub_1025EFE0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 204))(this) )
  {
    sub_1025BC00((int)this, a2);
    return a2;
  }
  else
  {
    result = a2;
    *a2 = this[91];
  }
  return result;
}
