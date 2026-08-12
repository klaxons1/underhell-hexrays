int sub_1012CE60()
{
  int result; // eax
  int v1; // esi

  byte_1069E3B0 = 1;
  result = sub_101B9FE0();
  v1 = 0;
  for ( byte_106C8000 = 1; v1 < dword_1069E3C4; ++v1 )
    result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(dword_1069E3B8 + 4 * v1) + 16))(*(_DWORD *)(dword_1069E3B8 + 4 * v1));
  byte_106C8000 = 0;
  dword_1069E3C4 = 0;
  byte_1069E3B0 = 0;
  return result;
}
