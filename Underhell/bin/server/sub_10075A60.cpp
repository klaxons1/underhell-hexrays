unsigned __int8 *__thiscall sub_10075A60(_BYTE *this, int a2, unsigned __int8 *a3, _BYTE *a4)
{
  unsigned __int8 *result; // eax
  unsigned __int8 v6; // bl
  int v7; // esi
  int v8; // eax

  result = a3;
  v6 = this[16];
  *a3 = -1;
  *a4 = 0;
  while ( v6 != 0xFF )
  {
    *a3 = v6;
    v7 = 12 * v6;
    if ( (*(unsigned __int8 (__cdecl **)(int, int))this)(a2, v7 + *((_DWORD *)this + 1) + 4) )
    {
      *a4 = 1;
      if ( (dword_106931E0 & 1) == 0 )
      {
        dword_106931E0 |= 1u;
        dword_106931DC = 0x1FFFFFF;
      }
      v8 = *((_DWORD *)this + 1);
      v6 = *(_BYTE *)(v8 + 12 * v6);
      result = (unsigned __int8 *)(v7 + v8);
    }
    else
    {
      *a4 = 0;
      if ( (dword_106931E0 & 1) == 0 )
      {
        dword_106931E0 |= 1u;
        dword_106931DC = 0x1FFFFFF;
      }
      result = (unsigned __int8 *)(v7 + *((_DWORD *)this + 1));
      v6 = result[1];
    }
  }
  return result;
}
