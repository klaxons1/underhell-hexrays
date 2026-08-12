int __thiscall sub_102550A0(_BYTE *this)
{
  int v2; // eax
  int (__thiscall ***v3)(void *, int *, _BYTE *); // ecx
  bool v4; // zf

  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)this + 1020))(this, 0);
  v2 = sub_102546C0((int)this);
  v4 = this[380] == 0;
  *((_DWORD *)this + 70) = v2;
  this[285] = 1;
  if ( !v4 )
  {
    if ( !this[341] && sub_10251F10(v3, v2) )
    {
      ++*((_DWORD *)this + 94);
      sub_10252FD0((int)this);
    }
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 976))(this);
  }
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 976))(this);
  (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 980))(this);
  return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 16))(this);
}
