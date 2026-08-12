int __thiscall sub_10044460(_BYTE *this)
{
  if ( (*(unsigned __int8 (__thiscall **)(_BYTE *, float *))(*(_DWORD *)this + 748))(this, &flt_106F1CA8) )
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)this + 1176))(this, 0, 1);
    return 54;
  }
  else if ( this[224] == 2 )
  {
    return 0;
  }
  else
  {
    (*(void (__thiscall **)(_BYTE *, _DWORD, int))(*(_DWORD *)this + 1176))(this, 0, 1);
    return 53;
  }
}
