unsigned int __thiscall sub_1006F810(int this, int a2)
{
  unsigned int v3; // eax
  unsigned int result; // eax
  int v5; // eax
  char *v6; // ecx
  int v7; // edi
  char v8; // dl

  sub_1002F9F0(this, a2);
  v3 = *(_DWORD *)(this + 1988);
  if ( v3 == -1
    || (result = v3 >> 12, *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1988) & 0xFFF) + 2) != result)
    || !*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1988) & 0xFFF) + 1) )
  {
    result = *(_DWORD *)(this + 1992);
    if ( result != -1 )
    {
      result >>= 12;
      if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1992) & 0xFFF) + 2) == result )
      {
        if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1992) & 0xFFF) + 1) )
        {
          *(_BYTE *)(this + 2078) = 0;
          v5 = *(_DWORD *)(this + 1992);
          if ( v5 == -1
            || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1992) & 0xFFF) + 2) != *(_DWORD *)(this + 1992) >> 12 )
          {
            v6 = 0;
          }
          else
          {
            v6 = (char *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1992) & 0xFFF) + 1);
          }
          if ( v5 == -1
            || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1992) & 0xFFF) + 2) != *(_DWORD *)(this + 1992) >> 12 )
          {
            v7 = 0;
          }
          else
          {
            v7 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(this + 1992) & 0xFFF) + 1);
          }
          result = (unsigned int)sub_10034A00(v6);
          *(float *)(v7 + 4312) = *(float *)(result + 8);
        }
      }
    }
  }
  v8 = *(_BYTE *)(this + 2140);
  *(float *)(this + 2040) = *(float *)(this + 2160);
  *(_BYTE *)(this + 2020) = v8;
  return result;
}
