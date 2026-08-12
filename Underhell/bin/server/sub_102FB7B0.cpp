bool __thiscall sub_102FB7B0(int this)
{
  int v1; // eax

  v1 = *(_DWORD *)(this + 2324);
  return (v1 == 1 || v1 == 2)
      && (*(_BYTE *)(this + 248) & 2) == 0
      && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 3660)
      && (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 20) == 0;
}
