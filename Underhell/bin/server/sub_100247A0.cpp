_DWORD *__thiscall sub_100247A0(_DWORD *this)
{
  int v2; // eax
  _DWORD *result; // eax

  v2 = this[602];
  if ( *(_DWORD *)(v2 + 16) )
  {
    *(_DWORD *)(v2 + 16) = 0;
    (*(void (__thiscall **)(_DWORD *))(*this + 1440))(this);
  }
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *, int))(*this + 1460))(this, 1048351);
  if ( result )
    return sub_1001FD50((_DWORD *)this[602], (int)result);
  return result;
}
