int *__thiscall sub_101C80A0(unsigned __int16 *this, int a2)
{
  int *result; // eax
  int *v4; // ebx
  int v5; // edi
  int v6; // esi
  int v7; // [esp+8h] [ebp-8h]

  result = (int *)sub_101C5AA0(this, a2);
  if ( (_WORD)result == 0xFFFF )
  {
    if ( a2 )
      v7 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 8))(a2);
    else
      v7 = -1;
    result = (int *)__RTDynamicCast(
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                      (int)&IWatcherCallback `RTTI Type Descriptor',
                      0);
    v4 = result;
    if ( result )
    {
      v5 = *this;
      v6 = (unsigned __int16)sub_101C5660((int)dword_1063873C);
      sub_10431540(v5, 0xFFFF, v6);
      result = (int *)(dword_1063873C[0] + 12 * v6);
      if ( result )
      {
        *result = v7;
        result[1] = (int)v4;
      }
    }
  }
  return result;
}
