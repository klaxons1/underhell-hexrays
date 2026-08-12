int __thiscall sub_1026BFD0(_DWORD *this, int a2)
{
  int result; // eax
  int i; // esi
  int v5; // esi
  unsigned int v6; // eax

  result = sub_10237590(this, a2);
  for ( i = this[61]; i != -1; i = *(_DWORD *)(v5 + this[58] + 8) )
  {
    v5 = 12 * i;
    result = sub_1026EFD0(*(_DWORD *)(this[58] + v5));
    if ( (_BYTE)result )
    {
      v6 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase **)(this[58] + v5));
      result = (*(int (__thiscall **)(unsigned int, int))(*(_DWORD *)v6 + 220))(v6, a2);
    }
  }
  return result;
}
