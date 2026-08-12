double __usercall sub_100458F0@<st0>(int a1@<ecx>, double result@<st0>)
{
  int v3; // eax
  int v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st7
  float v9; // [esp+0h] [ebp-24h]
  float v10; // [esp+Ch] [ebp-18h]
  float v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]
  float v13; // [esp+20h] [ebp-4h]

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 844))(a1) == 4
    && (v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 848))(a1),
        (v4 = __RTDynamicCast(
                v3,
                0,
                (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
                (int)&C_BasePlayer `RTTI Type Descriptor',
                0)) != 0)
    && !(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 844))(v4) )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 952))(v4);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 4128);
    if ( v5 != -1
      && *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 4128) & 0xFFF) + 2) == v5 >> 12
      && (v6 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a1 + 4128) & 0xFFF) + 1)) != 0
      && (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 332))(v6)
      && (sub_100131D0((_DWORD *)a1), 0.0 != *(float *)(a1 + 4344)) )
    {
      v7 = *(float *)(a1 + 4344);
    }
    else
    {
      v7 = (double)sub_10012950((_DWORD *)a1);
    }
    v12 = *(_DWORD *)(a1 + 3980);
    if ( v12 )
      v7 = (double)v12;
    v13 = v7;
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)off_103ED0FC + 56))(off_103ED0FC)
      || dword_10407394 != a1 )
    {
      return v13;
    }
    else
    {
      result = v13;
      if ( v13 != (double)*(int *)(a1 + 3984) && *(float *)(a1 + 3524) > 0.0 )
      {
        v11 = (*((float *)off_103DC81C + 3) - *(float *)(a1 + 3988)) / *(float *)(a1 + 3524);
        if ( sub_10034D10((_BYTE *)a1) )
          v8 = ((double)*(int *)(a1 + 4260) * *((float *)off_103DC81C + 7)
              - *(float *)(a1 + 3988)
              + *((float *)off_103DC81C + 8) * *((float *)off_103DC81C + 7))
             / *(float *)(a1 + 3524);
        else
          v8 = v11;
        if ( v8 < 1.0 )
        {
          v10 = (float)*(int *)(a1 + 3984);
          v9 = v8;
          return sub_10042120(v9, 0.0, 1.0, v10, v13);
        }
        else
        {
          result = v13;
          *(_DWORD *)(a1 + 3984) = (int)v13;
        }
      }
    }
  }
  return result;
}
