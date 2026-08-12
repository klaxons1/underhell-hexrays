int __thiscall sub_102F69F0(int *this, _DWORD *a2)
{
  int v3; // ecx
  int result; // eax

  v3 = this[906];
  if ( v3 )
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v3 + 184))(v3, a2);
  else
    sub_100246E0(this, a2);
  result = (*(int (__thiscall **)(_DWORD *))(*a2 + 320))(a2);
  if ( (_BYTE)result )
  {
    result = a2[63] >> 20;
    if ( (a2[63] & 0x100000) != 0 )
      return (*(int (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
               this,
               "TLK_ALLY_IN_BARNACLE",
               0,
               0,
               0,
               0);
  }
  return result;
}
