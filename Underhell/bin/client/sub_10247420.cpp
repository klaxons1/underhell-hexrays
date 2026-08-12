int (__thiscall ***__thiscall sub_10247420(int this, __int16 a2, int a3, int (__thiscall ***a4)(_DWORD)))(_DWORD)
{
  int v6; // eax

  if ( !*(_DWORD *)a3 )
    return (int (__thiscall ***)(_DWORD))sub_102471E0((void *)this, a2, (unsigned __int16 *)(a3 + 4), a4);
  v6 = *(_DWORD *)(this + 252) + 20 * sub_102465A0((int *)(this + 252), *(_DWORD *)(this + 264));
  *(_WORD *)(v6 + 4) = a2;
  *(_DWORD *)v6 = *(_DWORD *)a3;
  *(_WORD *)(v6 + 6) = *(_WORD *)(a3 + 4);
  *(_WORD *)(v6 + 8) = *(_WORD *)(a3 + 6);
  *(_WORD *)(v6 + 10) = *(_WORD *)(a3 + 8);
  *(float *)(v6 + 12) = *(float *)(this + 208) + *(float *)(a3 + 12);
  return sub_102393F0((_DWORD *)(v6 + 16), a4);
}
