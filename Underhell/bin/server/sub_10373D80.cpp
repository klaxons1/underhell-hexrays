int __thiscall sub_10373D80(int *this, float a2, int a3, float *a4, float *a5, int a6)
{
  int v7; // eax
  float *v8; // eax
  int result; // eax
  char *v10; // eax
  float *v11; // eax
  int (__thiscall *v12)(int *, _DWORD, char *, float *, int, int, _DWORD, _DWORD); // edx
  int v13; // edi
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  float *v19; // [esp+18h] [ebp-ACh]
  float v20; // [esp+30h] [ebp-94h]
  _BYTE v21[4]; // [esp+40h] [ebp-84h] BYREF
  int v22[20]; // [esp+44h] [ebp-80h] BYREF
  float v23[3]; // [esp+94h] [ebp-30h] BYREF
  float v24[3]; // [esp+A0h] [ebp-24h] BYREF
  char v25[4]; // [esp+ACh] [ebp-18h] BYREF
  int v26; // [esp+B0h] [ebp-14h]
  float v27; // [esp+B4h] [ebp-10h]
  int v28; // [esp+B8h] [ebp-Ch] BYREF
  int v29; // [esp+BCh] [ebp-8h]
  int v30; // [esp+C0h] [ebp-4h]
  int savedregs; // [esp+C4h] [ebp+0h] BYREF

  if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    v7 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    v23[0] = 8.0;
    v23[1] = 8.0;
    v23[2] = 8.0;
    *(float *)&v28 = -8.0;
    *(float *)&v29 = -8.0;
    *(float *)&v30 = -8.0;
    v19 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
    v8 = (float *)(*(int (__thiscall **)(int *))(*this + 576))(this);
    sub_100231A0((int)&savedregs, (int)this, v8, v19, (float *)&v28, v23, 16395, (int)this, 0, (int)v21);
    if ( *(float *)&v22[10] < 1.0 )
      return 0;
  }
  v10 = sub_10073710(this[419]);
  *(float *)v25 = *(float *)v10;
  v26 = *((_DWORD *)v10 + 1);
  v27 = *((float *)v10 + 2);
  v11 = (float *)sub_10073730(this[419]);
  v24[0] = *v11;
  v24[1] = v11[1];
  v27 = *(float *)v25;
  v12 = *(int (__thiscall **)(int *, _DWORD, char *, float *, int, int, _DWORD, _DWORD))(*this + 1072);
  v24[2] = v24[0];
  v13 = v12(this, LODWORD(a2), v25, v24, a3, 4, 1.0, 0);
  if ( v13 )
  {
    sub_1023C380(this, (int)"NPC_Hunter.MeleeHit", 0.0, 0);
    sub_1023C380(this, (int)"NPC_Hunter.TackleHit", 0.0, 0);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v13 + 320))(v13) )
    {
      if ( (*(_DWORD *)(v13 + 256) & 0x4000) == 0 )
      {
        sub_100F7A60((float *)v13, a4);
        sub_101E28A0((unsigned int *)v13, a5);
        if ( (*(_DWORD *)(v13 + 252) & 0x800) != 0 )
          sub_100DAE60(v13);
        sub_10261B70((float *)(v13 + 580), 100.0, 1.5, 1.0, 2.0, 0, 0);
        a3 = -2147483520;
        sub_102600B0((int *)v13, &a3, 1.0, 0.1, 1);
      }
    }
    else
    {
      if ( *(_BYTE *)(v13 + 306) == 6 )
      {
        v14 = *(_DWORD *)(v13 + 424);
        if ( v14 )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 40))(v14) )
          {
            v15 = *(_DWORD *)(v13 + 424);
            if ( v15 )
            {
              if ( ((*(int (__thiscall **)(int))(*(_DWORD *)v15 + 76))(v15) & 4) != 0 && *(_BYTE *)(v13 + 225) == 2 )
              {
                v16 = __RTDynamicCast(
                        v13,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                        (int)&CBreakableProp `RTTI Type Descriptor',
                        0);
                if ( v16 )
                {
                  sub_10248110((int)v22, (int)this, (int)this, 20.0, 4, 0);
                  sub_1020BA60(v16, (int (__thiscall ***)(_DWORD))this, (int)v22);
                }
              }
            }
          }
        }
      }
      v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 276))(v13);
      if ( sub_10265BF0(v17) && !a6 && sub_100BF1B0(this, "blood_left", (int)&v28, 0, 0, 0) )
      {
        if ( a3 >= 30 )
          a3 = 30;
        v20 = (float)a3;
        v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 276))(v13);
        sub_100E84B0(v28, v29, v30, (int)&flt_106B4F40, v18, v20);
      }
    }
  }
  result = v13;
  *((float *)this + 1139) = *(float *)(dword_106E8E2C + 44) + *(float *)(dword_106B31C8 + 12);
  return result;
}
