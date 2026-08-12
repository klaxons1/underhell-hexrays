_DWORD *__thiscall sub_100210D0(_DWORD *this, _DWORD *a2, int a3)
{
  _DWORD *result; // eax

  if ( ((*(int (__thiscall **)(_DWORD *))(*this + 1672))(this) & 0x8000000) != 0
    && (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 2184))(this, a3)
    || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 2168))(this) )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 2188))(this, a2);
    return a2;
  }
  else
  {
    result = a2;
    *a2 = this[655];
    a2[1] = this[656];
    a2[2] = this[657];
  }
  return result;
}
