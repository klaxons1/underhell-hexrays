char __thiscall sub_100EC930(_DWORD *this, _DWORD *a2, char a3, char a4)
{
  int v6; // ebx
  void *NumExternalThreads; // eax
  double v8; // st7
  char v9; // al
  int v10; // eax
  int v11; // eax
  void *v12; // eax
  float v13; // [esp+Ch] [ebp-Ch]

  switch ( sub_10418360(*a2) )
  {
    case 2:
    case 3:
    case 8:
    case 10:
    case 16:
      return 1;
    case 4:
      v6 = sub_100D7680((int)this);
      if ( v6 && (*(unsigned __int8 (__thiscall **)(_DWORD *))(*this + 296))(this) && (a4 || sub_10418680(*a2) > 0.0) )
      {
        if ( !*((_BYTE *)a2 + 41) )
        {
          if ( a2[1] )
          {
            NumExternalThreads = (void *)Concurrency::details::SchedulerProxy::GetNumExternalThreads((Concurrency::details::SchedulerProxy *)*a2);
            sub_10018D60(NumExternalThreads);
            v8 = sub_1041CA40(a2[1]);
            v9 = sub_1041CAF0(a2[1], LODWORD(v8));
            sub_1022F660("%s : %8.2f: MOVETO canceled but actor %s not at goal\n", v9);
          }
        }
        sub_10082A70(*(float **)(v6 + 2588), 0);
      }
      return 1;
    case 5:
      if ( a4 )
      {
        v10 = sub_104183D0(*a2);
        sub_1023B860(v10);
        v11 = __RTDynamicCast(
                (int)this,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseFlex `RTTI Type Descriptor',
                (int)&CAI_BaseActor `RTTI Type Descriptor',
                0);
        if ( v11 )
        {
          v12 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 1656))(v11);
          sub_100AD9B0(v12);
        }
      }
      return 1;
    case 6:
    case 7:
      if ( (int)a2[4] < 0 )
        return 1;
      if ( a3 )
      {
        sub_100C6520(this, a2[4]);
        return 1;
      }
      else
      {
        v13 = 0.0;
        if ( sub_10418360(*a2) == 6 )
        {
          if ( a4 )
            sub_100C4FB0(this, a2[4], 0.5, v13);
          else
            sub_100C4FB0(this, a2[4], 0.1, v13);
          return 1;
        }
        else
        {
          sub_100C4FB0(this, a2[4], 0.30000001, v13);
          return 1;
        }
      }
    default:
      return 0;
  }
}
