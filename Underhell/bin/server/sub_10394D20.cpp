void __thiscall sub_10394D20(_DWORD *this, _DWORD *a2)
{
  if ( a2 )
  {
    if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, a2[6]) )
      this[31] = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 8))(a2);
  }
  else
  {
    this[31] = -1;
  }
}
