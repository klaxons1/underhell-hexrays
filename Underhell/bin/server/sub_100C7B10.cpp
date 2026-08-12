int __thiscall sub_100C7B10(void *this, _DWORD *a2)
{
  int v3; // eax

  if ( !*a2 )
    return (*(int (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 1044))(this, 0);
  v3 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 288))(*a2);
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 1044))(this, v3);
}
