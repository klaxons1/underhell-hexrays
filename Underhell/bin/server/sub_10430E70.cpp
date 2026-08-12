int __fastcall sub_10430E70(int a1)
{
  int v1; // edx

  v1 = BYTE1(a1) ^ dword_1068E458[dword_1068E458[dword_1068E458[BYTE1(a1)] ^ (a1 >> 24)] ^ BYTE2(a1)];
  return dword_1068E458[dword_1068E458[v1] ^ (unsigned __int8)a1] | (dword_1068E458[v1] << 8);
}
