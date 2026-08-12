void __thiscall sub_103187C0(_BYTE *this, int a2, int a3)
{
  unsigned __int16 v4; // ax

  if ( a3 == 3 )
  {
    v4 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this - 420) + 92))(*((_DWORD *)this - 420));
    (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this - 420) + 88))(*((_DWORD *)this - 420), v4 | 8);
    *((_DWORD *)this - 477) = sub_10318670;
    this[41] = 1;
  }
}
