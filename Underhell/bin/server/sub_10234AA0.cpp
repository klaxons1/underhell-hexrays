char __thiscall sub_10234AA0(int this, int a2, float a3)
{
  if ( a2 )
  {
    *(_DWORD *)(this + 84) = a2;
    if ( !dword_106C4748 )
      Error("This game doesn't support server benchmarks (no CServerBenchmarkHook found).");
    *(_DWORD *)(this + 4) = 1;
    *(float *)(this + 12) = Plat_FloatTime();
    *(_DWORD *)(this + 40) = 0;
    *(float *)(this + 20) = a3;
    *(_DWORD *)(this + 28) = -1;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 428))(dword_106B31D0, 1);
    (**(void (__thiscall ***)(int))dword_106C4748)(dword_106C4748);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106C4748 + 8))(dword_106C4748, this + 64);
    return 1;
  }
  else
  {
    if ( *(_DWORD *)(this + 4) )
      sub_102349D0(this);
    return 0;
  }
}
