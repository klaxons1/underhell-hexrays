int __cdecl sub_10407E90(int a1, float a2, float a3)
{
  int v3; // esi
  _DWORD *v4; // edi
  int result; // eax

  v3 = 12 * sub_10406E50(&dword_106F06A4, dword_106F06B0);
  v4 = (_DWORD *)(v3 + dword_106F06A4);
  if ( a1 )
    *v4 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
  else
    *v4 = -1;
  *(float *)(v3 + dword_106F06A4 + 4) = a2 * a2;
  result = dword_106F06A4;
  *(float *)(v3 + dword_106F06A4 + 8) = a3 * 0.5;
  return result;
}
