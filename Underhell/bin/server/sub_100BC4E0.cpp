int __thiscall sub_100BC4E0(_DWORD *this)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD *))(this[2] + 20))(this + 2);
  if ( !(_BYTE)result )
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)(this[26] + 20) + 16))(this[26] + 20, this[4]);
  return result;
}
