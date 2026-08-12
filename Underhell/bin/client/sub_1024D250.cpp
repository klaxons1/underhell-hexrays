int __thiscall sub_1024D250(_BYTE *this, char a2)
{
  this[392] = a2;
  if ( a2 )
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 992))(
      this,
      *((_DWORD *)this + 96),
      *((_DWORD *)this + 97));
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 996))(
      this,
      *((_DWORD *)this + 96),
      *((_DWORD *)this + 97));
    return (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 1000))(
             this,
             *((_DWORD *)this + 96),
             *((_DWORD *)this + 97));
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 992))(
      this,
      *((_DWORD *)this + 94),
      *((_DWORD *)this + 95));
    (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 996))(
      this,
      *((_DWORD *)this + 94),
      *((_DWORD *)this + 95));
    return (*(int (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)this + 1000))(
             this,
             *((_DWORD *)this + 94),
             *((_DWORD *)this + 95));
  }
}
