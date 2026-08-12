_DWORD *__userpurge sub_102E6DE0@<eax>(int a1@<ecx>, int a2@<edi>, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  float *v8; // eax
  _DWORD *result; // eax
  int v10; // [esp-4h] [ebp-10h]
  float v11; // [esp+8h] [ebp-4h] BYREF

  sub_102587A0((_DWORD *)a1, a3);
  *(float *)(a1 + 1136) = 0.0;
  if ( a3 )
    v11 = *(float *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 8))(a3);
  else
    v11 = NAN;
  if ( sub_10319100(&v11) != -1 )
  {
    v10 = a2;
    (*(void (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3);
    v4 = *(_DWORD *)(a1 + 1124);
    v5 = *(_DWORD *)(a1 + 1116);
    v11 = *(float *)(dword_106B31C8 + 12) + 0.3;
    if ( v4 + 1 > v5 )
      sub_102ABFC0((_DWORD *)(a1 + 1112), v4 - v5 + 1);
    ++*(_DWORD *)(a1 + 1124);
    v6 = *(_DWORD *)(a1 + 1112);
    v7 = *(_DWORD *)(a1 + 1124) - v4 - 1;
    *(_DWORD *)(a1 + 1128) = v6;
    if ( v7 > 0 )
      memcpy((void *)(v6 + 4 * v4 + 4), (const void *)(v6 + 4 * v4), 4 * v7);
    v8 = (float *)(*(_DWORD *)(a1 + 1112) + 4 * v4);
    if ( v8 )
      *v8 = v11;
    a2 = v10;
  }
  result = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3);
  if ( (_BYTE)result )
  {
    sub_102E6CA0((_DWORD *)a1, a2, a3);
    result = (_DWORD *)__RTDynamicCast(
                         a3,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                         (int)&CHL2_Player `RTTI Type Descriptor',
                         0);
    if ( result )
      return (_DWORD *)sub_102DB780(result);
  }
  return result;
}
