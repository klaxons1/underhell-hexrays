int __thiscall sub_10400E30(int this, void *a2, float *a3, int a4)
{
  void *v5; // ebx
  float v6; // edx
  float v7; // eax
  int v8; // eax
  double v9; // st7
  int v10; // edi
  int v11; // ebx
  double v12; // st7
  int *v13; // ecx
  int result; // eax
  int *v15; // ecx
  float *v16; // [esp+14h] [ebp-94h]
  float v17[3]; // [esp+24h] [ebp-84h] BYREF
  _DWORD v18[10]; // [esp+30h] [ebp-78h] BYREF
  int v19; // [esp+58h] [ebp-50h]
  int v20; // [esp+5Ch] [ebp-4Ch]
  float v21; // [esp+64h] [ebp-44h]
  int v22; // [esp+70h] [ebp-38h]
  float v23[3]; // [esp+80h] [ebp-28h] BYREF
  float v24[3]; // [esp+8Ch] [ebp-1Ch] BYREF
  float v25; // [esp+98h] [ebp-10h] BYREF
  float v26; // [esp+9Ch] [ebp-Ch]
  float v27; // [esp+A0h] [ebp-8h]
  void *v28; // [esp+A4h] [ebp-4h]
  _DWORD *v29; // [esp+B0h] [ebp+8h]
  float v30; // [esp+B0h] [ebp+8h]
  float v31; // [esp+B8h] [ebp+10h]

  v5 = (void *)sub_100D1940((_DWORD *)this);
  if ( v5 && (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)v5 + 320))(v5) )
  {
    v28 = v5;
  }
  else
  {
    v28 = 0;
    v5 = 0;
  }
  sub_101FB150((int)a2, (int)v5, 3);
  sub_10247EC0(v18);
  v6 = a3[1];
  v7 = a3[2];
  v25 = *a3;
  v26 = v6;
  v27 = v7;
  v8 = sub_100D1940((_DWORD *)this);
  if ( v8 )
    v20 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  else
    v20 = -1;
  if ( this )
    v19 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  else
    v19 = -1;
  v21 = 0.0;
  v22 = 0x800000;
  sub_100E8760(a2, (int)v18, (int)&v25, a4);
  sub_10248230();
  if ( (unsigned __int8)sub_101FB190((int)a2, (int)v5, 1) )
  {
    sub_103FEB90((_DWORD *)this, (int)a2, v5, 1);
    v9 = v27;
    if ( v27 < 0.0 )
    {
      v9 = v9 * -0.64999998;
      v27 = v9;
    }
    v24[0] = v25 * 1500.0;
    v24[1] = v26 * 1500.0;
    v24[2] = v9 * 1500.0;
    sub_101FB400(v17, (int)a2, 2);
    v10 = __RTDynamicCast(
            (int)a2,
            0,
            (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
            (int)&CRagdollProp `RTTI Type Descriptor',
            0);
    v11 = 0;
    if ( *(int *)(v10 + 1132) > 0 )
    {
      v29 = (_DWORD *)(v10 + 1156);
      do
      {
        (*(void (__thiscall **)(_DWORD, float *, _DWORD))(*(_DWORD *)*v29 + 208))(*v29, v24, 0);
        v29 += 6;
        ++v11;
      }
      while ( v11 < *(_DWORD *)(v10 + 1132) );
    }
    v5 = v28;
  }
  v30 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          1.0,
          2.0);
  v12 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -1.0,
          1.0);
  v23[0] = v30;
  v23[1] = v12;
  v23[2] = 0.0;
  sub_100F7A60((float *)v5, v23);
  sub_103FF610((_DWORD *)this, *(float *)&v5);
  *(_DWORD *)(this + 9828) = 4;
  v16 = (float *)(a4 + 12);
  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
    sub_103FF0B0((_DWORD *)this, (int)v5, a4 + 12, v16);
  else
    sub_103FEDE0((_DWORD *)this, v16);
  sub_103FA5D0((_DWORD *)this);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 182);
  *(_DWORD *)(this + 1396) = 1;
  *(float *)(this + 1420) = *(float *)(dword_106B31C8 + 12) + 0.5;
  *(float *)(this + 1400) = *(float *)(dword_106B31C8 + 12) + 0.25;
  v31 = *(float *)(dword_106B31C8 + 12) + 0.5;
  if ( *(_DWORD *)(this + 1132) != LODWORD(v31) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v13 = *(int **)(this + 24);
      if ( v13 )
        sub_100194B0(v13, 1132);
    }
    *(float *)(this + 1132) = v31;
  }
  result = *(_DWORD *)(this + 1136);
  if ( result != *(_DWORD *)(this + 1132) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v15 = *(int **)(this + 24);
      if ( v15 )
        result = sub_100194B0(v15, 1136);
    }
    *(float *)(this + 1136) = *(float *)(this + 1132);
  }
  return result;
}
