int __thiscall sub_10430EC0(unsigned int *this)
{
  unsigned int v1; // ecx
  int v2; // edx

  v1 = *this;
  v2 = BYTE1(v1) ^ dword_1068E458[dword_1068E458[dword_1068E458[BYTE1(v1)] ^ HIBYTE(v1)] ^ BYTE2(v1)];
  return dword_1068E458[dword_1068E458[v2] ^ (unsigned __int8)v1] | (dword_1068E458[v2] << 8);
}
