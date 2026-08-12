int __thiscall sub_102893F0(_DWORD *this, _BYTE *a2, float a3, float *a4, float *a5, int a6, int a7)
{
  int v8; // esi
  int result; // eax

  if ( (int)this[4] > 0 || !this[3] )
    return sub_1014E740((int)a2, a3, a4, a5, a6, a7);
  if ( !sub_10219A90(a2) )
  {
    if ( (int)this[4] <= 0 )
      v8 = this[3];
    else
      v8 = 0;
    sub_10219DB0(v8);
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 12))(a2);
  if ( result )
    return sub_1014E740((int)a2, a3, a4, a5, a6, a7);
  return result;
}
