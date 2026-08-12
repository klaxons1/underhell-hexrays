void __thiscall sub_103F2C00(void *this, _DWORD *a2, int a3, int a4, float a5)
{
  int v6; // eax

  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
    {
      a2[824] &= ~0x20u;
      v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 340))(this);
      (*(void (__thiscall **)(int, _DWORD *, bool))(*(_DWORD *)v6 + 68))(v6, a2, a5 > 0.0);
    }
  }
}
