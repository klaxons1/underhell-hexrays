void __usercall sub_102E16B0(int a1@<ecx>, float *a2@<ebx>, int a3@<edi>)
{
  int (__thiscall *v4)(int, _BYTE *, int); // edx
  float *v5; // eax
  int (__thiscall *v6)(int); // edx
  double v7; // st7
  float *v8; // eax
  unsigned int v9; // eax
  int v10; // edi
  int *v11; // ecx
  unsigned int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  int v16; // ebx
  float *v17; // eax
  int v19[19]; // [esp+14h] [ebp-98h] BYREF
  int v20; // [esp+60h] [ebp-4Ch]
  _BYTE v21[12]; // [esp+68h] [ebp-44h] BYREF
  float v22[3]; // [esp+74h] [ebp-38h] BYREF
  float v23[3]; // [esp+80h] [ebp-2Ch] BYREF
  float v24[3]; // [esp+8Ch] [ebp-20h] BYREF
  float v25; // [esp+98h] [ebp-14h]
  float v26; // [esp+9Ch] [ebp-10h]
  float v27; // [esp+A0h] [ebp-Ch]
  int v28; // [esp+A4h] [ebp-8h]
  char v29; // [esp+ABh] [ebp-1h] BYREF
  int savedregs; // [esp+ACh] [ebp+0h] BYREF

  if ( *(float *)(dword_106B31C8 + 12) - *(float *)(a1 + 5648) > -0.001 )
  {
    *(float *)(a1 + 5648) = *(float *)(dword_106B31C8 + 12) + 0.15000001;
    if ( *(_DWORD *)(a1 + 5108) != -1 )
    {
      (**(void (__thiscall ***)(int, int))(a1 + 5080))(a1 + 5080, a1 + 5108);
      *(_DWORD *)(a1 + 5108) = -1;
    }
    sub_101E6420((float *)a1, v24, COERCE_INT(0.0), COERCE_INT(0.0));
    v4 = *(int (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)a1 + 504);
    v25 = v24[0] * 600.0;
    v26 = v24[1] * 600.0;
    v27 = 600.0 * v24[2];
    v5 = (float *)v4(a1, v21, a3);
    v6 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 504);
    v23[0] = *v5 + v25;
    v23[1] = v5[1] + v26;
    v7 = v5[2] + v27;
    v23[2] = v7;
    v8 = (float *)v6(a1);
    sub_1002A5F0((int)&savedregs, a1, v8, v22, (int)v23, 1174421507, a1, 0);
    v9 = *(_DWORD *)(a1 + 5220);
    v10 = v20;
    if ( v9 != -1 )
    {
      v11 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 5220) & 0xFFF) + 1];
      v12 = v9 >> 12;
      if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5220) & 0xFFF) + 2] == v12 )
      {
        if ( *v11 )
        {
          if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 5220) & 0xFFF) + 2] == v12 )
            v13 = *v11;
          else
            v13 = 0;
          if ( !*(_BYTE *)(v13 + 770) )
          {
            v29 = 0;
            if ( v11[1] == v12 )
              v14 = *v11;
            else
              v14 = 0;
            sub_100DDAD0((_BYTE *)(v14 + 769), &v29);
          }
          *(_DWORD *)(a1 + 5220) = -1;
        }
      }
    }
    v15 = sub_100CF460((_DWORD *)a1);
    v28 = v15;
    if ( v10
      && !sub_10163140(v19)
      && (!(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 284))(v10)
       || *(_DWORD *)(sub_100D7680(v10) + 2324) != 3) )
    {
      v16 = __RTDynamicCast(
              v10,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CBaseCombatWeapon `RTTI Type Descriptor',
              0);
      if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
        sub_100DAE60(v10);
      v17 = (float *)(*(int (__thiscall **)(int, float *, int))(*(_DWORD *)a1 + 504))(a1, v22, v10 + 580);
      sub_1004BCD0(v17, a2);
      if ( v7 <= 96.0 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 152))(v10) )
        {
          v29 = 1;
          sub_100DDAD0((_BYTE *)(v10 + 769), &v29);
          sub_10019680((_DWORD *)(a1 + 5220), v10);
        }
        else if ( v16 )
        {
          v29 = 1;
          sub_100DDAD0((_BYTE *)(v16 + 769), &v29);
          sub_10019680((_DWORD *)(a1 + 5220), v16);
        }
      }
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 1080))(a1, v10) == 3 && !*(_BYTE *)(a1 + 2137) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1680))(a1);
        return;
      }
      v15 = v28;
    }
    if ( *(float *)&v19[11] > 0.075
      || !sub_10163140(v19) && (!v20 || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 284))(v20))
      || *(_BYTE *)(a1 + 2137)
      || *(_BYTE *)(a1 + 5216)
      || *(_BYTE *)(a1 + 3368) )
    {
      goto LABEL_41;
    }
    if ( !v15 )
      return;
    if ( *(_BYTE *)(v15 + 1144) )
    {
LABEL_41:
      if ( v15 )
      {
        if ( !*(_BYTE *)(v15 + 1144) )
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1684))(a1);
      }
    }
    else
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 1676))(a1);
    }
  }
}
