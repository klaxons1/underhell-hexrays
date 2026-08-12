int __fastcall sub_1022D3F0(int a1)
{
  int v1; // edx

  v1 = BYTE1(a1) ^ dword_103FC360[dword_103FC360[dword_103FC360[BYTE1(a1)] ^ (a1 >> 24)] ^ BYTE2(a1)];
  return dword_103FC360[dword_103FC360[v1] ^ (unsigned __int8)a1] | (dword_103FC360[v1] << 8);
}
