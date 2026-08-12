_DWORD *__thiscall sub_10205A50(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax

  sub_100EC3F0(this, 0, 0.0, 0);
  result = a2;
  if ( *a2 )
  {
    result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
    this[205] = *result;
  }
  else
  {
    this[205] = -1;
  }
  return result;
}
