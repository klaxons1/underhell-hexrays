char __userpurge sub_103FCB40@<al>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  int v8; // edx
  int *v9; // ecx
  int v10; // ebx
  int v11; // esi
  _BYTE *v12; // eax
  _BYTE *v13; // ebx
  double v14; // st7
  double v15; // st7
  double v16; // st7
  void (__thiscall *v17)(int, float *); // edx
  float *v18; // eax
  int (__thiscall *v19)(int, float *); // edx
  float v21; // [esp+4h] [ebp-40h]
  float v23[3]; // [esp+20h] [ebp-24h] BYREF
  float v24[3]; // [esp+2Ch] [ebp-18h] BYREF
  float v25; // [esp+38h] [ebp-Ch] BYREF
  float v26; // [esp+3Ch] [ebp-8h]
  float v27; // [esp+40h] [ebp-4h]
  int savedregs; // [esp+44h] [ebp+0h] BYREF
  float v29; // [esp+54h] [ebp+10h]

  if ( a3 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a3 + 320))(a3) )
    v7 = a3;
  else
    v7 = 0;
  v8 = a1[2282];
  if ( v7 == v8 )
  {
    if ( a1[2268] != -1
      && (v9 = &off_1061BE18[4 * (a1[2268] & 0xFFF) + 1], off_1061BE18[4 * (a1[2268] & 0xFFF) + 2] == a1[2268] >> 12)
      && (v10 = *v9) != 0
      && a5
      && (*(_DWORD *)(v8 + 3292) & 0x800) == 0
      && sub_103FABB0((int)(a1 + 200)) <= 12.0
      && ((v11 = *(_DWORD *)(v10 + 424)) == 0
       || (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)v11 + 40))(*(_DWORD *)(v10 + 424))) )
    {
      v12 = (_BYTE *)__RTDynamicCast(
                       v10,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                       (int)&CRagdollProp `RTTI Type Descriptor',
                       0);
      v13 = v12;
      if ( v12 && sub_101CB650(v12) && v13[1128] )
      {
        v13[1128] = 0;
        sub_103FC8F0(a1, 0.0);
      }
      v7 = a1[2282];
      if ( (*(_BYTE *)(v7 + 3292) & 1) != 0 )
      {
        sub_103FC8F0(a1, COERCE_FLOAT(1));
        sub_100F5A30((_DWORD *)a1[2282], (int)&v25, 0, 0);
        if ( ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v11 + 116))(v11, a2) <= 15.0 )
        {
          if ( ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v11 + 116))(v11) >= 0.5 )
            v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v11 + 116))(v11);
          else
            v14 = 0.5;
        }
        else
        {
          v14 = 15.0;
        }
        v21 = v14;
        v15 = sub_1001F0E0(v21, 0.5, 15.0, 0.5, 4.0);
        v29 = v15;
        v16 = v15 * *(float *)(dword_106F0064 + 44);
        v17 = *(void (__thiscall **)(int, float *))(*(_DWORD *)v11 + 236);
        v25 = v25 * v16;
        v26 = v26 * v16;
        v27 = v16 * v27;
        v17(v11, &v25);
        v18 = sub_1001F010(v23, -10.0, 10.0);
        v19 = *(int (__thiscall **)(int, float *))(*(_DWORD *)v11 + 244);
        v24[0] = v29 * *v18;
        v24[1] = v18[1] * v29;
        v24[2] = v29 * v18[2];
        LOBYTE(v7) = v19(v11, v24);
      }
      else if ( a5 == 2 )
      {
        LOBYTE(v7) = sub_103FC0D0((int)(a1 + 200), (int)&savedregs, v7, 12.0);
      }
    }
    else
    {
      LOBYTE(v7) = sub_103FC8F0(a1, 0.0);
    }
  }
  return v7;
}
