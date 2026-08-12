int __thiscall sub_1015B290(_DWORD *this, int a2, int a3)
{
  int result; // eax
  int v4; // edx
  int (__thiscall *v5)(_DWORD *, _DWORD, float *, _DWORD, int); // edx
  float v6[2]; // [esp+0h] [ebp-8h] BYREF

  result = dword_1043E87C;
  if ( *(_DWORD *)(dword_1043E87C + 48) )
  {
    v4 = *(this - 490);
    v6[0] = -85.0;
    v5 = *(int (__thiscall **)(_DWORD *, _DWORD, float *, _DWORD, int))(v4 + 752);
    v6[1] = 25.0;
    return v5(this - 490, 0, v6, 0, a3 + 12);
  }
  return result;
}
