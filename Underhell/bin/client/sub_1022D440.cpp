int __thiscall sub_1022D440(unsigned int *this)
{
  unsigned int v1; // ecx
  int v2; // edx

  v1 = *this;
  v2 = BYTE1(v1) ^ dword_103FC360[dword_103FC360[dword_103FC360[BYTE1(v1)] ^ HIBYTE(v1)] ^ BYTE2(v1)];
  return dword_103FC360[dword_103FC360[v2] ^ (unsigned __int8)v1] | (dword_103FC360[v2] << 8);
}
