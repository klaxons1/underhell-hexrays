int __thiscall sub_1026E2C0(_DWORD *this, int a2)
{
  int result; // eax

  this[93] = a2;
  if ( a2 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 124))(a2, 0);
    (*(void (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[93] + 172))(this[93], this);
    return (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)this[93] + 156))(this[93], this);
  }
  return result;
}
