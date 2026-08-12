void __thiscall sub_1023DD00(void *this, int a2, float a3, char a4)
{
  if ( a4 && 0.0 == a3 )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 40))(this, a2);
  }
  else
  {
    *(_DWORD *)(a2 + 60) |= 1u;
    sub_1023DBC0((float *)(a2 + 16), 0.0, a3);
    if ( a4 )
      (*(void (__thiscall **)(void *, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this + 12))(
        this,
        a2,
        LODWORD(a3),
        3,
        0.0,
        0.0);
    else
      *(float *)(a2 + 36) = ((double (__thiscall *)(int (__stdcall ***)(char)))(*off_1061B7A0)[9])(off_1061B7A0) + a3;
  }
}
