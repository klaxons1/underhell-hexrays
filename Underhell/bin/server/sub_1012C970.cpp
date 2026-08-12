int __thiscall sub_1012C970(_DWORD *this, int a2, int a3)
{
  int v3; // edi
  int result; // eax
  int v5; // esi
  unsigned __int16 *v6; // edx
  _DWORD *v7; // [esp+8h] [ebp-4h]

  v7 = this;
  v3 = a3;
  if ( a3 >= this[2052] )
    v3 = this[2052];
  result = 0;
  v5 = 0;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v6 = (unsigned __int16 *)(this[2049] + 8 * v5);
      if ( *((_DWORD *)v6 + 1) <= *(_DWORD *)(dword_106B31C8 + 24) )
        *(_DWORD *)(a2 + 4 * result++) = dword_1069E3E4[4 * *v6];
      if ( ++v5 >= v3 )
        break;
      this = v7;
    }
  }
  return result;
}
