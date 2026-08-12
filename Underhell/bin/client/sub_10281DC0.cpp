int __thiscall sub_10281DC0(void *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 127);
  if ( v2 )
  {
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 113) + 336))(*((_DWORD *)this + 113), v2);
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)this + 1032))(this, *((_DWORD *)this + 113));
    sub_1022AF00(*((void **)this + 127));
    *((_DWORD *)this + 127) = 0;
  }
  return (*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 119) + 200))(*((_DWORD *)this + 119), 1);
}
