char __stdcall sub_1021A950(int a1, int a2, float *a3)
{
  void *v4; // eax

  if ( !a1 )
    return 0;
  if ( a2 <= 0 )
  {
    if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
      sub_100DAE60(a1);
    *a3 = *(float *)(a1 + 580);
    a3[1] = *(float *)(a1 + 584);
    a3[2] = *(float *)(a1 + 588);
  }
  else
  {
    v4 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 208))(a1);
    if ( !v4 || !sub_100BD6D0(v4, a2, (int)a3, 0, 0, 0) )
      return 0;
  }
  return 1;
}
