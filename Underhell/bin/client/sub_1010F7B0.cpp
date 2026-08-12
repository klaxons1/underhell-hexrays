int __cdecl sub_1010F7B0(int a1, int a2, float *a3, int a4, int a5, int a6, int a7, float a8)
{
  int v8; // eax
  int v9; // esi

  v8 = sub_100DDA40(772);
  if ( v8 )
  {
    *(_DWORD *)v8 = &CRagdoll::`vftable';
    *(_DWORD *)(v8 + 4) = 0;
    *(float *)(v8 + 756) = 0.0;
    *(float *)(v8 + 760) = 0.0;
    v9 = v8;
    *(float *)(v8 + 764) = 0.0;
    *(float *)(v8 + 768) = -1.0;
  }
  else
  {
    v9 = 0;
  }
  sub_1010F1D0(v9, a1, a2, a3, a4, a5, a6, a7, a8);
  if ( *(int *)(v9 + 4) > 0 )
    return v9;
  Msg("Bad ragdoll for %s\n", (const char *)(*(_DWORD *)a2 + 12));
  (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  return 0;
}
