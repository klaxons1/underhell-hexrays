void __thiscall sub_10121A50(void *this, int a2, float a3, char a4)
{
  if ( a4 && 0.0 == a3 )
  {
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 40))(this, a2);
  }
  else
  {
    *(_DWORD *)(a2 + 60) |= 1u;
    sub_10121910((float *)(a2 + 16), 0.0, a3);
    if ( a4 )
      (*(void (__thiscall **)(void *, int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)this + 12))(
        this,
        a2,
        LODWORD(a3),
        3,
        0.0,
        0.0);
    else
      *(float *)(a2 + 36) = ((double (__thiscall *)(int (__stdcall ***)(char)))(*off_103DFD80)[9])(off_103DFD80) + a3;
  }
}
