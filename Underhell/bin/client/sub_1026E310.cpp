int __thiscall sub_1026E310(int this)
{
  int result; // eax

  if ( *(_DWORD *)(this + 372) )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 372) + 124))(*(_DWORD *)(this + 372), 0);
    sub_1025B720((_BYTE *)this, 0);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 16))(this);
    return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 1056))(this, *(_DWORD *)(this + 372));
  }
  return result;
}
