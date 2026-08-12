double __usercall sub_10038560@<st0>(_DWORD *a1@<eax>, float a2)
{
  _DWORD *v2; // esi
  double v3; // st7
  unsigned int v4; // eax
  _DWORD *v5; // eax

  v2 = a1;
  if ( *(float *)(dword_10404C14 + 44) <= 0.0 )
    return a2;
  v3 = (double)((int)(*(float *)(dword_10404C14 + 44) / *((float *)off_103DC81C + 7) + 0.5) + 1)
     * *((float *)off_103DC81C + 7);
  if ( v3 <= a2 || !a1 )
    return a2;
  while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v2 + 520))(v2) )
  {
    v4 = v2[81];
    if ( v4 == -1 || *((_DWORD *)off_103DCD74 + 4 * (v2[81] & 0xFFF) + 2) != v4 >> 12 )
      v5 = 0;
    else
      v5 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (v2[81] & 0xFFF) + 1);
    v2 = v5;
    if ( !v5 )
      return a2;
  }
  return (float)v3;
}
