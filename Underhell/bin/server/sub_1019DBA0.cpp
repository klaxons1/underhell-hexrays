int __thiscall sub_1019DBA0(unsigned int *this, int a2, int a3)
{
  unsigned int *v4; // edi
  int result; // eax
  unsigned int v6; // edi

  v4 = this + 4;
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 4), 4, a2);
  (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, (int)(this + 1), 12, a2);
  result = (**(int (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(
             dword_106B31D8 + 4,
             (int)(this + 7),
             1,
             a2);
  v6 = *v4;
  if ( v6 >= dword_1063281C )
    dword_1063281C = v6 + 1;
  return result;
}
