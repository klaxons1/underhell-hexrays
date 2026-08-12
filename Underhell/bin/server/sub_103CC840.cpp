_DWORD *__usercall sub_103CC840@<eax>(int a1@<edi>, float *a2, int a3, int a4)
{
  _DWORD *result; // eax
  _DWORD *v5; // esi
  void (__thiscall *v6)(_DWORD *); // eax
  int v7; // eax
  float *v8; // eax
  float v9[3]; // [esp+24h] [ebp-Ch] BYREF

  result = (_DWORD *)sub_101811E0("vort_charge_token", -1);
  v5 = result;
  if ( result )
  {
    sub_1025F370(result, a2, 0);
    (*(void (__thiscall **)(_DWORD *, int, int))(*v5 + 76))(v5, a3, a1);
    if ( a4 )
      v5[201] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 8))(a4);
    else
      v5[201] = -1;
    sub_100EC3F0(v5, (int)sub_103CC150, 0.0, 0);
    v6 = *(void (__thiscall **)(_DWORD *))(*v5 + 96);
    v5[49] = sub_103CA830;
    v6(v5);
    v7 = __RTDynamicCast(
           a3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CBaseAnimating `RTTI Type Descriptor',
           0);
    if ( v7 )
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 804))(v7);
    else
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a4 + 536))(a4);
    v9[0] = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    sub_100DD660((int)v5, v9);
    return v5;
  }
  return result;
}
