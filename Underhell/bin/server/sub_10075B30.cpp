bool __thiscall sub_10075B30(_DWORD *this, unsigned __int8 a2)
{
  int v2; // edx
  int *v3; // eax
  unsigned __int8 v4; // al

  v2 = dword_106931E0;
  if ( (dword_106931E0 & 1) == 0 )
  {
    v2 = dword_106931E0 | 1;
    dword_106931E0 |= 1u;
    dword_106931DC = 0x1FFFFFF;
  }
  if ( a2 == 0xFF )
    v3 = &dword_106931DC;
  else
    v3 = (int *)(this[1] + 12 * a2);
  v4 = *((_BYTE *)v3 + 2);
  if ( (v2 & 1) == 0 )
  {
    dword_106931E0 = v2 | 1;
    dword_106931DC = 0x1FFFFFF;
  }
  if ( v4 == 0xFF )
    return (_BYTE)dword_106931DC == a2;
  else
    return *(_BYTE *)(this[1] + 12 * v4) == a2;
}
