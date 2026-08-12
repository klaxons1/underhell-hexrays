void __thiscall sub_1024FF80(Concurrency::details::SchedulerBase *this, int a2)
{
  int (__thiscall ***v3)(_DWORD); // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // edi
  int v7; // eax

  if ( *((_BYTE *)this + 416) )
  {
    if ( a2 == 107 )
    {
      v3 = (int (__thiscall ***)(_DWORD))Concurrency::details::SchedulerBase::Id(this);
      if ( v3 )
      {
        if ( sub_10239950(v3, "Close", 0) )
        {
          v4 = (_DWORD *)sub_10229D00(32);
          if ( v4 )
            v5 = sub_10229D20(v4, (int)"CloseFrameButtonPressed");
          else
            v5 = 0;
          v6 = *(_DWORD *)this;
          v7 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *, _DWORD *, _DWORD))(*(_DWORD *)this + 148))(
                 this,
                 v5,
                 0.0);
          (*(void (__thiscall **)(Concurrency::details::SchedulerBase *, int))(v6 + 136))(this, v7);
        }
      }
    }
  }
}
