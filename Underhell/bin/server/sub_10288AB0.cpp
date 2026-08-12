int __thiscall sub_10288AB0(_DWORD *this, _BYTE *a2, float a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // esi
  int result; // eax

  if ( (int)this[4] > 0 || !this[3] )
    return sub_1028D880((int)a2, a3, a4, a5, a6, a7, a8, a9);
  if ( !sub_10219A90(a2) )
  {
    if ( (int)this[4] <= 0 )
      v10 = this[3];
    else
      v10 = 0;
    sub_10219DB0(v10);
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 12))(a2);
  if ( result )
    return sub_1028D880((int)a2, a3, a4, a5, a6, a7, a8, a9);
  return result;
}
