int sub_1045E5D0()
{
  void (__thiscall *v0)(int *, int); // edx

  CUniformRandomStream::CUniformRandomStream((CUniformRandomStream *)dword_1064A540);
  v0 = *(void (__thiscall **)(int *, int))dword_1064A540[0];
  dword_1064A4EC = 0;
  v0(dword_1064A540, 1111);
  return atexit(sub_10473E60);
}
