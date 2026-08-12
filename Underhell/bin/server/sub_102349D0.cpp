int __thiscall sub_102349D0(int this)
{
  int v2; // esi
  double v4; // [esp+1Ch] [ebp-Ch]
  char v5; // [esp+24h] [ebp-4h]
  float v6; // [esp+24h] [ebp-4h]

  v5 = Plat_IsInBenchmarkMode();
  Plat_SetBenchmarkMode(0);
  v4 = Plat_FloatTime();
  Plat_SetBenchmarkMode(v5);
  v6 = v4 - *(float *)(this + 8);
  if ( *(_DWORD *)(this + 84) == 2 )
  {
    v2 = (*(int (__thiscall **)(int, const char *, void *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
           dword_106B31D8 + 4,
           "sv_benchmark_results.txt",
           &unk_104A928C,
           "DEFAULT_WRITE_PATH");
    if ( v2 )
      (*(void (**)(int, int, const char *, ...))(*(_DWORD *)dword_106B31D8 + 96))(
        dword_106B31D8,
        v2,
        "sv_benchmark := %.2f\n",
        v6);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, v2);
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, "quit\n");
  }
  *(_DWORD *)(this + 4) = 0;
  return (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 428))(dword_106B31D0, 0);
}
