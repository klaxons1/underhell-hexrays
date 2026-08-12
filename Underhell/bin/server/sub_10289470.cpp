int __thiscall sub_10289470(_DWORD *this, _BYTE *a2, float a3, int a4, int a5, int a6)
{
  int v7; // esi
  int result; // eax

  if ( (int)this[4] > 0 || !this[3] )
    return sub_1028F7A0((int)a2, a3, a4, a5, a6);
  if ( !sub_10219A90(a2) )
  {
    if ( (int)this[4] <= 0 )
      v7 = this[3];
    else
      v7 = 0;
    sub_10219DB0(v7);
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 12))(a2);
  if ( result )
    return sub_1028F7A0((int)a2, a3, a4, a5, a6);
  return result;
}
