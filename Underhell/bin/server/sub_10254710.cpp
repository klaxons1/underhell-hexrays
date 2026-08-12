int __thiscall sub_10254710(_DWORD **this, _DWORD *a2)
{
  int result; // eax
  int v4; // esi

  result = ((int (__thiscall *)(_DWORD **, _DWORD *))(*this)[180])(this, a2);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(_DWORD *))(*a2 + 320))(a2);
    if ( !(_BYTE)result )
    {
      v4 = a2[106];
      if ( v4 )
      {
        (*(void (__thiscall **)(_DWORD *, int, _DWORD))(*this[214] + 8))(this[214], v4, 0);
        return (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 96))(v4);
      }
    }
  }
  return result;
}
