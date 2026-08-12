int __thiscall sub_101E8630(void *this)
{
  int result; // eax
  int *v3; // ecx

  result = *((_DWORD *)this + 870);
  *((_DWORD *)this + 854) &= ~8u;
  *((_BYTE *)this + 3508) = 0;
  if ( result )
  {
    if ( result > 1 )
      *((_DWORD *)this + 875) = result;
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 3480);
    }
    *((_DWORD *)this + 870) = 0;
    (*(void (__thiscall **)(void *, const char *, _DWORD, _DWORD))(*(_DWORD *)this + 1176))(this, "specmenu", 0, 0);
    (*(void (__thiscall **)(void *, const char *, _DWORD, _DWORD))(*(_DWORD *)this + 1176))(this, "specgui", 0, 0);
    return (*(int (__thiscall **)(void *, const char *, _DWORD, _DWORD))(*(_DWORD *)this + 1176))(
             this,
             "overview",
             0,
             0);
  }
  return result;
}
