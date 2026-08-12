char __userpurge sub_10061100@<al>(int a1@<ecx>, int a2@<ebx>, int a3, float *a4, float *a5)
{
  unsigned int v6; // eax
  _DWORD *v7; // eax
  unsigned int v8; // eax
  _DWORD *v9; // ecx
  float *v10; // eax
  double v11; // st7
  char result; // al

  if ( (*(_BYTE *)(a1 + 2073) & 3) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 1908);
    if ( v6 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1908) & 0xFFF) + 2) != v6 >> 12 )
      v7 = 0;
    else
      v7 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1908) & 0xFFF) + 1);
    sub_10060EB0(a1, a2, v7, *(__int16 *)(a1 + 1916), (float *)(a1 + 2024), (float *)(a1 + 2048));
    v8 = *(_DWORD *)(a1 + 1912);
    if ( v8 == -1 || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1912) & 0xFFF) + 2) != v8 >> 12 )
      v9 = 0;
    else
      v9 = (_DWORD *)*((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 1912) & 0xFFF) + 1);
    sub_10060EB0(a1, a2, v9, *(__int16 *)(a1 + 1918), (float *)(a1 + 2036), (float *)(a1 + 2060));
    *(_BYTE *)(a1 + 2073) &= 0xFCu;
  }
  v10 = (float *)(a1 + 12 * a3);
  *a4 = v10[506];
  a4[1] = v10[507];
  a4[2] = v10[508];
  *a5 = v10[512];
  a5[1] = v10[513];
  v11 = v10[514];
  result = 1;
  a5[2] = v11;
  return result;
}
