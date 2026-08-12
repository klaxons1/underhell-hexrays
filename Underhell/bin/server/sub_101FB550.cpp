float *__cdecl sub_101FB550(float *a1, int a2, float *a3, int a4)
{
  float *result; // eax
  int v5; // edi
  int v6; // esi
  int v7; // ebx
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+8h] [ebp-Ch]

  if ( a2 )
  {
    v5 = *(_DWORD *)(a2 + 424);
    if ( v5 )
    {
      v6 = __RTDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&IPlayerPickupVPhysics `RTTI Type Descriptor',
             0);
      if ( v6 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 32))(v6, a4) )
      {
        v7 = *(_DWORD *)v6;
        v8 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 116))(v5);
        (*(void (__thiscall **)(int, float *, float *, _DWORD))(v7 + 36))(v6, a1, a3, LODWORD(v8));
        return a1;
      }
      else
      {
        v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v5 + 116))(v5);
        sub_101FB4C0(a1, a3, v9);
        return a1;
      }
    }
    else
    {
      result = a1;
      *a1 = flt_106F1CA8;
      a1[1] = flt_106F1CAC;
      a1[2] = flt_106F1CB0;
    }
  }
  else
  {
    result = a1;
    *a1 = flt_106F1CA8;
    a1[1] = flt_106F1CAC;
    a1[2] = flt_106F1CB0;
  }
  return result;
}
