char __userpurge sub_10061020@<al>(int a1@<ecx>, int a2@<ebx>, int a3, float *a4)
{
  unsigned int v5; // eax
  _DWORD *v6; // eax
  unsigned int v7; // eax
  _DWORD *v8; // ecx
  char result; // al

  if ( (*(_BYTE *)(a1 + 2073) & 1) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 1908);
    if ( v5 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1908) & 0xFFF) + 2) != v5 >> 12 )
      v6 = 0;
    else
      v6 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1908) & 0xFFF) + 1);
    sub_10060EB0(a1, a2, v6, *(__int16 *)(a1 + 1916), (float *)(a1 + 2024), 0);
    v7 = *(_DWORD *)(a1 + 1912);
    if ( v7 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1912) & 0xFFF) + 2) != v7 >> 12 )
      v8 = 0;
    else
      v8 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1912) & 0xFFF) + 1);
    sub_10060EB0(a1, a2, v8, *(__int16 *)(a1 + 1918), (float *)(a1 + 2036), 0);
    *(_BYTE *)(a1 + 2073) &= ~1u;
  }
  *a4 = *(float *)(a1 + 12 * a3 + 2024);
  a4[1] = *(float *)(a1 + 12 * a3 + 2028);
  result = 1;
  a4[2] = *(float *)(a1 + 12 * a3 + 2032);
  return result;
}
