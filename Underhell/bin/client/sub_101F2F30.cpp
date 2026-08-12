int __usercall sub_101F2F30@<eax>(unsigned int a1@<ecx>, _DWORD *a2@<edi>)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ecx

  v2 = HIWORD(a1) & 0x3FF | __ROR4__(a1, 14) & 0xFFC00;
  v3 = a2[2] & (v2 ^ (a1 & 0x3FF | (4 * (a1 & 0x3FF00))));
  v4 = a2[1] ^ (a1 & 0x3FF | (4 * (a1 & 0x3FF00))) ^ v3;
  return dword_10461F88[(v2 ^ v3 ^ *a2) & 0x3FF]
       | dword_10463F88[v4 & 0x3FF]
       | dword_10460F88[(v2 ^ (unsigned int)v3 ^ *a2) >> 10]
       | dword_10462F88[v4 >> 10];
}
