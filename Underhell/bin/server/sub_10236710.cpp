char __thiscall sub_10236710(void *this, int a2, int a3)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)this + 108))(this, a2, a3);
  if ( v3 )
    return (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)a2 + 964))(a2, v3, 0);
  else
    return 0;
}
