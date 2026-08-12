int __thiscall sub_101F4450(void *this, int a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // eax

  if ( a2 )
  {
    v3 = sub_101F4280();
    v4 = (*(unsigned __int16 (__thiscall **)(int, int))(*(_DWORD *)v3 + 24))(v3, a2);
  }
  else
  {
    v4 = 0xFFFF;
  }
  v5 = sub_101F4280();
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v5 + 80))(v5, v4) )
    v4 = 0xFFFF;
  return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 876))(this, v4);
}
