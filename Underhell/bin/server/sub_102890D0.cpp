int __thiscall sub_102890D0(_DWORD *this, _BYTE *a2, float a3, int a4, int a5)
{
  int v6; // esi
  int result; // eax

  if ( (int)this[4] > 0 || !this[3] )
    return sub_10291E90((int)a2, a3, a4, a5);
  if ( !sub_10219A90(a2) )
  {
    if ( (int)this[4] <= 0 )
      v6 = this[3];
    else
      v6 = 0;
    sub_10219DB0(v6);
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 12))(a2);
  if ( result )
    return sub_10291E90((int)a2, a3, a4, a5);
  return result;
}
