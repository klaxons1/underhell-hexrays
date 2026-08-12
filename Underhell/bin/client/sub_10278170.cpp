_DWORD *__thiscall sub_10278170(int this, int a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  _DWORD *v7; // ebx
  _DWORD *v8; // ebp
  int v10; // eax
  int v11; // edi
  int v12; // eax
  _DWORD *result; // eax
  _DWORD *v14; // edx
  int (__thiscall ***v15)(void *, int, int); // ecx
  struct Concurrency::details::ScheduleGroupBase *Group; // eax
  int v17; // eax
  _DWORD *v18; // edi
  _BYTE v19[4]; // [esp+10h] [ebp-4h] BYREF

  v7 = a4;
  v8 = a6;
  v10 = 20 * a2;
  *a4 = *(_DWORD *)(20 * a2 + *(_DWORD *)(this + 212) + 8);
  *v8 = *(_DWORD *)(v10 + *(_DWORD *)(this + 212) + 12);
  v11 = 0;
  v12 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 208) + 256))(*(_DWORD *)(this + 208));
  if ( v12 )
  {
    (*(void (__thiscall **)(int, _BYTE *, int *, _DWORD **, _DWORD **))(*(_DWORD *)v12 + 16))(v12, v19, &a2, &a6, &a4);
    v11 = a2;
  }
  if ( a3 == -1 )
  {
    result = a5;
    v14 = a7;
    *a5 = 1;
    *v14 = *(_DWORD *)(this + 236) - 2;
  }
  else
  {
    v15 = *(int (__thiscall ****)(void *, int, int))(this + 208);
    if ( v15 )
    {
      sub_10236170(v15, (int)&a4, (int)&a2);
      Group = Concurrency::details::ScheduleGroupSegmentBase::GetGroup(*(Concurrency::details::ScheduleGroupSegmentBase **)(this + 208));
      v17 = v11 + *(_DWORD *)(this + 236) + a3 * (_DWORD)Group;
      v18 = a5;
      *a5 = v17;
      result = (_DWORD *)((char *)Concurrency::details::ScheduleGroupSegmentBase::GetGroup(*(Concurrency::details::ScheduleGroupSegmentBase **)(this + 208))
                        + *v18);
      *a7 = result;
    }
    else
    {
      result = a5;
      *a7 = 0;
      *v8 = 0;
      *result = 0;
      *v7 = 0;
    }
  }
  return result;
}
