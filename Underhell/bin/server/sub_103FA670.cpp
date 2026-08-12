float *__stdcall sub_103FA670(int a1, float *a2, float *a3, int a4)
{
  float *result; // eax
  int v5; // edi
  float *v6; // ebx
  int v7; // edx
  float v8; // eax
  int v9; // ecx
  int (__thiscall *v10)(int, float *, _DWORD *); // edx
  int v11; // esi
  _DWORD *v12; // edi
  float v13[3]; // [esp+8h] [ebp-24h] BYREF
  float v14[3]; // [esp+14h] [ebp-18h] BYREF
  _DWORD v15[2]; // [esp+20h] [ebp-Ch] BYREF
  float v16; // [esp+28h] [ebp-4h]

  sub_101FB550(v14, a1, a2, a4);
  result = sub_101FB400(v13, a1, a4);
  v5 = *(_DWORD *)(a1 + 424);
  if ( v5 )
  {
    result = (float *)__RTDynamicCast(
                        a1,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                        (int)&CRagdollProp `RTTI Type Descriptor',
                        0);
    v6 = result;
    if ( result )
    {
      v11 = 0;
      if ( *((int *)result + 283) > 0 )
      {
        v12 = result + 289;
        do
        {
          result = (float *)(*(int (__thiscall **)(_DWORD, float *, float *))(*(_DWORD *)*v12 + 208))(*v12, v14, v13);
          ++v11;
          v12 += 6;
        }
        while ( v11 < *((_DWORD *)v6 + 283) );
      }
    }
    else if ( a4 == 2 && (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 340))(a1) )
    {
      v7 = *((_DWORD *)a3 + 1);
      v8 = a3[2];
      *(float *)v15 = *a3;
      v9 = *(_DWORD *)(a1 + 252) >> 11;
      v15[1] = v7;
      v16 = v8;
      if ( (v9 & 1) != 0 )
        sub_100DAE60(a1);
      v10 = *(int (__thiscall **)(int, float *, _DWORD *))(*(_DWORD *)v5 + 240);
      v16 = *(float *)(a1 + 588);
      return (float *)v10(v5, v14, v15);
    }
    else
    {
      return (float *)(*(int (__thiscall **)(int, float *, float *))(*(_DWORD *)v5 + 208))(v5, v14, v13);
    }
  }
  return result;
}
