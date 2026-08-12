int __thiscall sub_102886B0(
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
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20)
{
  int v21; // esi
  int result; // eax

  if ( (int)this[4] > 0 || !this[3] )
    return sub_1028B670((int)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
  if ( !sub_10219A90(a2) )
  {
    if ( (int)this[4] <= 0 )
      v21 = this[3];
    else
      v21 = 0;
    sub_10219DB0(v21);
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 12))(a2);
  if ( result )
    return sub_1028B670((int)a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20);
  return result;
}
