bool __thiscall sub_10402000(int this, int a2, float *a3)
{
  bool result; // al
  int v5; // edi
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  int v9; // esi
  int *v10; // eax
  int v11; // eax
  char *v12; // ecx
  _BYTE *v13; // edx
  char v14; // al
  char *v15; // ecx
  _BYTE *v16; // edx
  char v17; // al
  char *v18; // ecx
  _BYTE *v19; // edx
  char v20; // al
  char *v21; // ecx
  _BYTE *v22; // edx
  char v23; // al
  char *v24; // ecx
  _BYTE *v25; // edx
  char v26; // al
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _BYTE *v30; // esi
  int v31; // eax
  double v32; // st7
  int v33; // edx
  void (__noreturn ***v34)(); // eax
  void (__noreturn **v35)(); // esi
  int v36; // eax
  void (__noreturn ***v37)(); // eax
  void (__noreturn **v38)(); // esi
  int v39; // eax
  void (__noreturn ***v40)(); // eax
  void (__noreturn **v41)(); // esi
  int v42; // eax
  int v43; // [esp+18h] [ebp-D0h]
  int v44; // [esp+18h] [ebp-D0h]
  int v45; // [esp+24h] [ebp-C4h]
  float v46; // [esp+24h] [ebp-C4h]
  _DWORD v47[20]; // [esp+34h] [ebp-B4h] BYREF
  _BYTE v48[80]; // [esp+84h] [ebp-64h] BYREF
  float v49[3]; // [esp+D4h] [ebp-14h] BYREF
  int v50; // [esp+E0h] [ebp-8h]
  int v51; // [esp+E4h] [ebp-4h]

  if ( *(_BYTE *)(this + 1393) )
    return 0;
  v5 = a2;
  result = sub_103FB260((_DWORD *)this, (_DWORD *)a2);
  if ( result )
  {
    *(_BYTE *)(this + 1573) = 0;
    *(float *)(this + 1568) = 0.0;
    v6 = *(_BYTE *)(dword_106B3CDC + 12) == 1;
    HIBYTE(a2) = 0;
    LOBYTE(v51) = v6;
    if ( v6
      && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 284))(v5)
      && (*(_DWORD *)(v5 + 252) & 0x10000000) == 0 )
    {
      v43 = sub_100D1940((_DWORD *)this);
      v7 = sub_100D1940((_DWORD *)this);
      sub_10248110((int)v48, v7, v43, 1.0, 0, 0);
      v8 = sub_100D7680(v5);
      v9 = sub_101D0270(v8, 0, (int)v48, 3, 1);
      v10 = *(int **)(v9 + 1124);
      if ( v10 )
      {
        sub_100BCE80(&dword_106960D0, v10);
        *(_DWORD *)(v9 + 1124) = 0;
      }
      *(_BYTE *)(v9 + 1864) = 0;
      if ( *(_BYTE *)(v5 + 1713) )
      {
        *(_BYTE *)(v9 + 4392) = 1;
        *(_DWORD *)(v9 + 4400) = *(_DWORD *)(v5 + 1716);
        *(_DWORD *)(v9 + 4404) = *(_DWORD *)(v5 + 1720);
        *(_DWORD *)(v9 + 4408) = *(_DWORD *)(v5 + 1724);
        *(_DWORD *)(v9 + 4412) = *(_DWORD *)(v5 + 1728);
        *(_DWORD *)(v9 + 4416) = *(_DWORD *)(v5 + 1732);
        *(_DWORD *)(v9 + 4396) = *(_DWORD *)(v5 + 808);
        if ( *(_DWORD *)(v5 + 808) == 1 )
        {
          v11 = sub_100BF520(v9, "helmet");
          sub_100C1600(v9, v11, 0);
        }
        v12 = *(char **)(v5 + 812);
        v13 = *(_BYTE **)(v9 + 1868);
        do
        {
          v14 = *v12;
          *v13++ = *v12++;
        }
        while ( v14 );
        v15 = *(char **)(v5 + 816);
        v16 = *(_BYTE **)(v9 + 1872);
        do
        {
          v17 = *v15;
          *v16++ = *v15++;
        }
        while ( v17 );
        v18 = *(char **)(v5 + 820);
        v19 = *(_BYTE **)(v9 + 1876);
        do
        {
          v20 = *v18;
          *v19++ = *v18++;
        }
        while ( v20 );
        v21 = *(char **)(v5 + 824);
        v22 = *(_BYTE **)(v9 + 1880);
        do
        {
          v23 = *v21;
          *v22++ = *v21++;
        }
        while ( v23 );
        v24 = *(char **)(v5 + 828);
        v25 = *(_BYTE **)(v9 + 1884);
        do
        {
          v26 = *v24;
          *v25++ = *v24++;
        }
        while ( v26 );
      }
      sub_101B6090(v9, 0x8000);
      v45 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 320) + 8))(v5 + 320);
      v27 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 320) + 4))(v5 + 320);
      sub_100D5D10(v27, v45);
      v44 = sub_100D1940((_DWORD *)this);
      v28 = sub_100D1940((_DWORD *)this);
      sub_10248110((int)v47, v28, v44, 10000.0, 12582912, 0);
      sub_100D9E70((int *)v5, v9, v47);
      v5 = v9;
      HIBYTE(a2) = 1;
    }
    v50 = *(_DWORD *)(v5 + 424);
    if ( v50 )
    {
      v29 = sub_100D1940((_DWORD *)this);
      v30 = (_BYTE *)v29;
      if ( !v29 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 320))(v29) )
        v30 = 0;
      *(_BYTE *)(this + 1393) = 1;
      if ( v30 )
      {
        v31 = __RTDynamicCast(
                v5,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CBreakableProp `RTTI Type Descriptor',
                0);
        if ( v31 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(v31 + 1120) + 92))(v31 + 1120, 11) )
          (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)v30 + 1272))(v30);
        sub_103FEB90((_DWORD *)this, v5, v30, 0);
      }
      sub_103FACF0(this + 1500, v30, (_DWORD *)v5, v50, v51, a3, HIBYTE(a2) == 0);
      if ( v30 )
      {
        sub_102E0DB0(v30, 0);
        v32 = sub_103F9D80((float *)this);
        v46 = (1.0 - v32) * (*(float *)(dword_106E0734 + 44) - *(float *)(v33 + 44)) + *(float *)(v33 + 44);
        sub_100EA7B0((int)v30, v46);
      }
      *(float *)&a2 = *(float *)(dword_106B31C8 + 12) + 0.40000001;
      sub_100D2D50((float *)(this + 1136), (float *)&a2);
      sub_103FF610((_DWORD *)this, *(float *)&this);
      *(_DWORD *)(this + 9828) = 3;
      if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
        sub_103FE400((_DWORD *)this);
      else
        sub_103FE090((_DWORD *)this);
      sub_10401440(this, *(float *)&this);
      if ( sub_103FB400((_DWORD *)this, *(float *)&v5) )
      {
        v34 = sub_1023DBA0();
        v35 = *v34;
        a2 = (int)v34;
        v36 = sub_103FB400((_DWORD *)this, *(float *)&v5);
        ((void (__thiscall *)(int, int, _DWORD, _DWORD, _DWORD))v35[2])(a2, v36, 0.0, 50.0, 0.0);
        v37 = sub_1023DBA0();
        v38 = *v37;
        a2 = (int)v37;
        v39 = sub_103FB400((_DWORD *)this, *(float *)&v5);
        ((void (__thiscall *)(int, int, _DWORD, _DWORD))v38[11])(a2, v39, 100.0, 0.5);
        v40 = sub_1023DBA0();
        v41 = *v40;
        a2 = (int)v40;
        v42 = sub_103FB400((_DWORD *)this, *(float *)&v5);
        ((void (__thiscall *)(int, int, _DWORD, _DWORD))v41[12])(a2, v42, 0.80000001, 0.5);
      }
      if ( *(_DWORD *)(dword_106F00F4 + 48)
        && (*(char **)(v5 + 92) == "npc_turret_floor" || sub_100D6240((_DWORD *)v5, "npc_turret_floor")) )
      {
        (*(void (__thiscall **)(int, _DWORD, _DWORD, float *))(*(_DWORD *)v5 + 528))(v5, 0, 0, v49);
        if ( (v49[1] + v49[0]) * 0.0 + v49[2] < 0.5 )
        {
          *(float *)&a2 = *(float *)(dword_106B31C8 + 12) + 1.0;
          sub_103FC860((float *)(this + 1416), (float *)&a2);
        }
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
