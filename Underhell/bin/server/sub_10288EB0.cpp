int __thiscall sub_10288EB0(_DWORD *this, _BYTE *a2, float a3, int a4)
{
  int v5; // esi
  int result; // eax

  if ( (int)this[4] > 0 || !this[3] )
    return sub_102907A0((int)a2, a3, a4);
  if ( !sub_10219A90(a2) )
  {
    if ( (int)this[4] <= 0 )
      v5 = this[3];
    else
      v5 = 0;
    sub_10219DB0(v5);
  }
  result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 12))(a2);
  if ( result )
    return sub_102907A0((int)a2, a3, a4);
  return result;
}
