int __thiscall sub_10253020(int (__thiscall ***this)(void *, int *, _BYTE *))
{
  bool v2; // zf
  int v3; // eax

  ((void (__thiscall *)(int (__thiscall ***)(void *, int *, _BYTE *), _DWORD))(*this)[255])(this, 0);
  v2 = *((_BYTE *)this + 380) == 0;
  v3 = (int)this[58];
  this[70] = (int (__thiscall **)(void *, int *, _BYTE *))v3;
  *((_BYTE *)this + 285) = 1;
  if ( !v2 )
  {
    if ( !*((_BYTE *)this + 341) && sub_10251F10(this, v3) )
    {
      this[94] = (int (__thiscall **)(void *, int *, _BYTE *))((char *)this[94] + 1);
      sub_10252FD0((int)this);
    }
    ((void (__thiscall *)(int (__thiscall ***)(void *, int *, _BYTE *)))(*this)[244])(this);
  }
  ((void (__thiscall *)(int (__thiscall ***)(void *, int *, _BYTE *)))(*this)[244])(this);
  ((void (__thiscall *)(int (__thiscall ***)(void *, int *, _BYTE *)))(*this)[245])(this);
  return ((int (__thiscall *)(int (__thiscall ***)(void *, int *, _BYTE *)))(*this)[4])(this);
}
