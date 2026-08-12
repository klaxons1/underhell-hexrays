int __thiscall sub_1007A700(void *this, int a2)
{
  int v2; // eax

  v2 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 8))(this, a2);
  if ( v2 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 24))(v2);
  else
    return 0;
}
