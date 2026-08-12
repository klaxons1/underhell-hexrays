char __thiscall sub_102EAE80(int this, int a2, int a3, int a4)
{
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  double v9; // st4
  double v10; // st6
  double v11; // st4
  double v12; // st5
  double v13; // st6
  int v14; // eax
  int v15; // eax
  double v16; // st4
  double v17; // st6
  double v18; // st4
  double v19; // st5
  double v20; // st6
  char v21; // fps^1
  bool v22; // c0
  char v23; // c2
  bool v24; // c3
  char v25; // al
  char result; // al
  float v27; // [esp+14h] [ebp-20h]
  float v28; // [esp+14h] [ebp-20h]
  float v29; // [esp+24h] [ebp-10h] BYREF
  float v30; // [esp+28h] [ebp-Ch]
  float v31; // [esp+2Ch] [ebp-8h]
  float v32; // [esp+3Ch] [ebp+8h]
  int v33; // [esp+40h] [ebp+Ch]
  char v34; // [esp+47h] [ebp+13h]

  sub_101F9010(a2, a3, a4);
  if ( 0.0 != *(float *)(dword_106B31C8 + 16) )
  {
    v32 = 0.0;
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1092))(a2);
    v7 = v6;
    if ( v6 )
    {
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v6 + 24))(v6, a2, a3, a4);
      v8 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1096))(a2) + 424);
      if ( v8 )
      {
        (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v8 + 188))(v8, &v29, 0);
        v9 = v30 - *(float *)(this + 8);
        v10 = v9 * v9;
        v11 = v29 - *(float *)(this + 4);
        v12 = v10;
        v13 = v31 - *(float *)(this + 12);
        v27 = v11 * v11 + v12 + v13 * v13;
        v32 = off_10689708(v27);
        if ( sub_10018CD0((float *)(this + 4), &flt_106F1CA8) || v32 > 100.0 )
          v32 = 0.0;
        *(float *)(this + 4) = v29;
        *(float *)(this + 8) = v30;
        *(float *)(this + 12) = v31;
      }
      v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 1096))(a2);
      v15 = __RTDynamicCast(
              v14,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CPropVehicleDriveable `RTTI Type Descriptor',
              0);
      v33 = v15;
      if ( v15 )
      {
        v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 868))(v15);
        if ( (_BYTE)v15 && v32 < 0.5 )
        {
          LOBYTE(v15) = 1;
          v34 = 1;
        }
        else
        {
          v34 = 0;
          LOBYTE(v15) = 0;
        }
        if ( *(_BYTE *)(this + 17) != (_BYTE)v15 )
        {
          if ( (_BYTE)v15 )
          {
            v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)off_10627F88 + 124))(off_10627F88, a2, v33);
            LOBYTE(v15) = v34;
          }
          *(_BYTE *)(this + 17) = v15;
        }
      }
      else
      {
        *(_BYTE *)(this + 17) = 0;
      }
    }
    else
    {
      *(_BYTE *)(this + 17) = 0;
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      v16 = *(float *)(a2 + 584) - *(float *)(this + 8);
      v17 = v16 * v16;
      v18 = *(float *)(a2 + 580) - *(float *)(this + 4);
      v19 = v17;
      v20 = *(float *)(a2 + 588) - *(float *)(this + 12);
      v28 = v18 * v18 + v19 + v20 * v20;
      v32 = off_10689708(v28);
    }
    v22 = v32 < 0.0;
    v23 = 0;
    v24 = v32 == 0.0;
    BYTE1(v15) = v21;
    if ( v32 > 0.0 )
    {
      LOBYTE(v15) = !v7 && *(_BYTE *)(a2 + 5216);
      (*(void (__stdcall **)(int, float, bool, int))(*(_DWORD *)off_10627F88 + 112))(
        a2,
        COERCE_FLOAT(LODWORD(v32)),
        v7 != 0,
        v15);
    }
  }
  v25 = (*(_DWORD *)(a2 + 256) & 0x4000) != 0;
  if ( *(_BYTE *)(this + 18) != v25 )
  {
    *(_BYTE *)(this + 18) = v25;
    if ( v25 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)off_10627F88 + 132))(off_10627F88, a2);
  }
  result = *(_BYTE *)(a2 + 306) == 8;
  if ( *(_BYTE *)(this + 19) != result )
  {
    *(_BYTE *)(this + 19) = result;
    if ( result )
      return (*(int (__thiscall **)(int, int))(*(_DWORD *)off_10627F88 + 136))(off_10627F88, a2);
  }
  return result;
}
