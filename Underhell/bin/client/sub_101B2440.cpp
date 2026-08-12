bool sub_101B2440()
{
  int v0; // eax
  int v1; // esi
  bool result; // al
  unsigned int v3; // eax
  int v4; // ecx

  v0 = sub_100422D0();
  v1 = v0;
  result = v0
        && ((v3 = *(_DWORD *)(v0 + 4128), v3 == -1)
         || *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v1 + 4128) & 0xFFF) + 2) != v3 >> 12
         || (v4 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(v1 + 4128) & 0xFFF) + 1)) == 0
         || !(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 332))(v4))
        && (*(float *)(v1 + 5216) != flt_103EE008
         || *(float *)(v1 + 5220) != flt_103EE00C
         || *(float *)(v1 + 5224) != flt_103EE010);
  return result;
}
