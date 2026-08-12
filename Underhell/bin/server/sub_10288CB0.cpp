int __thiscall sub_10288CB0(
        _DWORD *this,
        _BYTE *a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17)
{
  int v18; // esi
  int result; // eax

  if ( (int)this[4] > 0 || !this[3] )
    return sub_1028FD30((int)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
  if ( !sub_10219A90(a2) )
  {
    if ( (int)this[4] <= 0 )
      v18 = this[3];
    else
      v18 = 0;
    sub_10219DB0(v18);
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 12))(a2);
  if ( result )
    return sub_1028FD30((int)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
  return result;
}
