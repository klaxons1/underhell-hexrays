int __thiscall sub_1029E020(int this)
{
  bool v2; // zf
  unsigned int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v8; // eax
  __int64 v9; // [esp-8h] [ebp-14h]

  v2 = !sub_1029DB10((int *)this);
  v3 = *(_DWORD *)(this + 20);
  if ( v2 )
  {
    v4 = *(_DWORD *)(this + 4);
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != *(_DWORD *)(this + 20) >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    v6 = __RTDynamicCast(
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CAI_OperatorGoal `RTTI Type Descriptor',
           0);
    HIDWORD(v9) = v4;
    LODWORD(v9) = v4;
    sub_1010DD80((_DWORD *)(v6 + 852), v9, 0.0);
    return 100000;
  }
  else
  {
    if ( v3 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 2] != v3 >> 12 )
      v8 = 0;
    else
      v8 = off_1061BE18[4 * (*(_DWORD *)(this + 20) & 0xFFF) + 1];
    if ( !__RTDynamicCast(
            v8,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CAI_OperatorGoal `RTTI Type Descriptor',
            0)
      || *(_DWORD *)(sub_1029D7B0((_DWORD *)this) + 948) == 2 )
    {
      return sub_1004B430((_DWORD **)this);
    }
    else if ( !sub_100CF460(*(_DWORD **)(this + 4)) || sub_10027B80(*(void **)(this + 4)) )
    {
      return 100002;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(this + 4) + 2792) = 1;
      return 100003;
    }
  }
}
