int __thiscall sub_10185540(_DWORD *this, _BYTE *a2)
{
  int result; // eax
  int i; // esi
  char *v5; // eax

  if ( (a2[21] & 1) != 0 )
    result = sub_1042E0C0((int)a2, "%d", this[4]);
  else
    result = sub_10087920(a2, this[4]);
  for ( i = 0; i < this[4]; ++i )
  {
    v5 = (char *)(*(int (__stdcall **)(_DWORD))(*(_DWORD *)dword_106B3204 + 40))(*(unsigned __int16 *)(this[1] + 2 * i));
    result = sub_1042DFE0(v5);
  }
  return result;
}
