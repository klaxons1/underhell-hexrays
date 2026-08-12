int __thiscall sub_10235360(int this)
{
  int result; // eax
  double v3; // st7
  int v4; // edi

  result = *(_DWORD *)(this + 4);
  if ( result )
  {
    if ( result == 1 )
    {
      if ( *(float *)(this + 20) > Plat_FloatTime() - *(float *)(this + 12) )
        return sub_10234BE0(this);
      Msg("Starting benchmark!\n");
      v3 = Plat_FloatTime();
      *(float *)(this + 12) = v3;
      *(float *)(this + 16) = v3;
      *(float *)(this + 8) = sub_10234990();
      *(_DWORD *)(this + 24) = *(_DWORD *)(dword_106B31C8 + 24);
      *(_DWORD *)(this + 36) = 0;
      *(_DWORD *)(this + 32) = 0;
      *(_DWORD *)(this + 4) = 2;
      sub_10234CA0();
      RandomSeed(0);
      (**(void (__thiscall ***)(int, _DWORD))(this + 88))(this + 88, 0);
    }
    v4 = *(_DWORD *)(dword_106B31C8 + 24) - *(_DWORD *)(this + 24);
    sub_10234D20(this);
    if ( v4 < *(_DWORD *)(dword_106C478C + 48) )
    {
      if ( *(_DWORD *)(this + 40) < dword_1064A4D4
        && !((*(_DWORD *)(dword_106B31C8 + 24) - *(_DWORD *)(this + 24)) % dword_1064A4D8) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_106C4748 + 12))(dword_106C4748);
        ++*(_DWORD *)(this + 40);
      }
      sub_10234EE0((float *)this);
      return (*(int (__thiscall **)(int))(*(_DWORD *)dword_106C4748 + 4))(dword_106C4748);
    }
    else
    {
      if ( *(_DWORD *)(dword_106C47D4 + 48) )
      {
        (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31D0 + 144))(
          dword_106B31D0,
          "vprof_record_stop\n");
        (*(void (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 148))(dword_106B31D0);
      }
      sub_10234E40((float *)this);
      return sub_102349D0(this);
    }
  }
  return result;
}
