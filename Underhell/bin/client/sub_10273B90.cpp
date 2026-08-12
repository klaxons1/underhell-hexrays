int __thiscall sub_10273B90(_DWORD **this, int a2)
{
  int result; // eax
  int i; // edi

  if ( a2 )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this[63] + 912))(this[63], a2);
    (*(void (__thiscall **)(_DWORD *, int))(*this[64] + 128))(this[64], a2);
    result = ((int (__thiscall *)(_DWORD **, _DWORD, _DWORD))(*this)[61])(this, 0, 0);
    for ( i = 0; i < (int)this[58]; ++i )
      result = sub_10273B90(a2);
  }
  return result;
}
