int __thiscall sub_10207A20(_DWORD *this, _DWORD *a2)
{
  if ( *a2 == 1004 )
  {
    sub_1023C380(a2[1], 0.0, 0);
  }
  else if ( *a2 == 1100 )
  {
    return (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD *, _DWORD *, _DWORD))(*this + 148))(
             this,
             a2[1],
             this,
             this,
             0);
  }
  return sub_100C3960(this, (int)a2);
}
