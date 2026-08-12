void __usercall sub_101671F0(int a1@<ebx>, _DWORD *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  int *v5; // ecx
  float v6; // eax
  float v7; // ecx
  int (__thiscall *v8)(_DWORD *, float *, int); // edx
  float *v9; // eax
  int v10; // ebx
  int v11; // ebx
  float *v12; // eax
  double v13; // st6
  double v14; // st7
  double v15; // st7
  float v16; // eax
  int v17; // edx
  int v18; // eax
  double v19; // st7
  int v20; // edi
  double v21; // st6
  const char *v22; // [esp+38h] [ebp-2Ch]
  float v23; // [esp+40h] [ebp-24h] BYREF
  float v24; // [esp+44h] [ebp-20h]
  float v25; // [esp+4Ch] [ebp-18h] BYREF
  float v26; // [esp+50h] [ebp-14h]
  int v27; // [esp+54h] [ebp-10h]
  float v28; // [esp+58h] [ebp-Ch] BYREF
  float v29; // [esp+5Ch] [ebp-8h]
  float v30; // [esp+60h] [ebp-4h]

  v2 = sub_101811E0("gib", -1);
  v4 = __RTDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CGib `RTTI Type Descriptor',
         0);
  if ( !v4 )
    Warning("classname %s used to create wrong class type\n", v22);
  if ( *(_DWORD *)(dword_106B3D0C + 48) == 1 )
    sub_10166E20(v4, v3, (int)"models/germangibs.mdl");
  else
    sub_10166E20(v4, v3, (int)"models/gibs/hgibs.mdl");
  if ( *(_DWORD *)(v4 + 852) )
  {
    if ( *(_BYTE *)(v4 + 84) )
    {
      *(_BYTE *)(v4 + 88) |= 1u;
    }
    else
    {
      v5 = *(int **)(v4 + 24);
      if ( v5 )
        sub_100194B0(v5, 852);
    }
    *(_DWORD *)(v4 + 852) = 0;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(v4 + 252) & 0x1000) != 0 )
      sub_100DAFD0(v4);
    v6 = *(float *)(v4 + 484);
    v7 = *(float *)(v4 + 476);
    v29 = *(float *)(v4 + 480);
    v8 = *(int (__thiscall **)(_DWORD *, float *, int))(*a2 + 504);
    v30 = v6;
    v28 = v7;
    v9 = (float *)v8(a2, &v23, a1);
    sub_100E10C0(v4, v9);
    v10 = sub_10262560(*(_DWORD *)(v4 + 24));
    if ( (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, 100) <= 5 && v10 )
    {
      v11 = sub_100AC640(v10);
      if ( !v11 )
      {
LABEL_23:
        v16 = *(float *)(v4 + 488);
        v17 = *(_DWORD *)(v4 + 496);
        v26 = *(float *)(v4 + 492);
        v27 = v17;
        v25 = v16;
        v25 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 100.0);
        v26 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                100.0,
                300.0);
        sub_100D7260((float *)v4, &v25);
        v18 = (*(int (__thiscall **)(_DWORD *))(*a2 + 276))(a2);
        v19 = v28;
        *(_DWORD *)(v4 + 1148) = v18;
        v20 = a2[55];
        if ( v20 <= -50 )
        {
          if ( v20 <= -200 )
            v21 = 4.0;
          else
            v21 = 2.0;
        }
        else
        {
          v21 = 0.69999999;
        }
        v28 = v19 * v21;
        v29 = v29 * v21;
        v30 = v21 * v30;
        sub_100DD660(v4, &v28);
        goto LABEL_29;
      }
      if ( (*(_DWORD *)(v4 + 252) & 0x800) != 0 )
        sub_100DAE60(v4);
      v12 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v11 + 504))(v11, &v23);
      v13 = v12[1] - *(float *)(v4 + 584);
      v14 = v12[2] - *(float *)(v4 + 588);
      v28 = *v12 - *(float *)(v4 + 580);
      v29 = v13;
      v30 = v14;
      off_10689714();
      v28 = v28 * 300.0;
      v29 = v29 * 300.0;
      v15 = 300.0 * v30 + 100.0;
    }
    else
    {
      v23 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -100.0,
              100.0);
      v24 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
              dword_106B31E4,
              -100.0,
              100.0);
      v15 = 200.0;
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4, 200.0, 300.0);
      v28 = v23;
      v29 = v24;
    }
    v30 = v15;
    goto LABEL_23;
  }
LABEL_29:
  sub_101660F0(v4);
}
