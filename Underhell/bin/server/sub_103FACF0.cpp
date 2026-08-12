char __thiscall sub_103FACF0(int this, _DWORD *a2, _DWORD *a3, int a4, char a5, float *a6, char a7)
{
  int v7; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // eax
  unsigned __int16 v14; // ax
  int v15; // eax
  double v16; // st7
  int v17; // ebx
  int v18; // ecx
  double v19; // st7
  double v20; // st7
  float *v21; // eax
  float *v22; // eax
  int v23; // eax
  void *v24; // eax
  void *v25; // ebx
  double v26; // st7
  char result; // al
  float v28; // [esp+28h] [ebp-103Ch]
  _DWORD v29[1024]; // [esp+38h] [ebp-102Ch] BYREF
  float v30[3]; // [esp+1038h] [ebp-2Ch] BYREF
  int v31[3]; // [esp+1044h] [ebp-20h] BYREF
  float v32[3]; // [esp+1050h] [ebp-14h] BYREF
  float v33; // [esp+105Ch] [ebp-8h] BYREF
  float v34; // [esp+1060h] [ebp-4h]
  int v35; // [esp+1074h] [ebp+10h]
  int v36; // [esp+1074h] [ebp+10h]
  float v37; // [esp+107Ch] [ebp+18h]
  float *v38; // [esp+1080h] [ebp+1Ch]

  v7 = a4;
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 152))(a4);
  v10 = a2[106];
  v11 = v9;
  v35 = v9;
  if ( v10 )
  {
    LOWORD(v9) = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 152))(v10);
    v11 = v35;
  }
  sub_101BA6C0((int)a2, v7, 6, v11, v9, 1.0, 64.0);
  (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)v7 + 188))(v7, v30, v32);
  if ( (a2[63] & 0x800) != 0 )
    sub_100DAE60((int)a2);
  sub_101FB380((int)a3, (int)a2, (int)(a2 + 125), v32);
  if ( a7 )
  {
    v12 = sub_103F9F90((int)a3, a6);
    if ( v12 )
      v7 = v12;
  }
  *(_BYTE *)(this + 72) = sub_100E88D0(a3);
  sub_100E88A0(a3, 0);
  v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF4 + 116))(dword_106BAFF4, this);
  *(_DWORD *)(this + 8320) = v13;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v13 + 8))(v13, v7, 1);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(v7);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 76))(v7);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 72))(v7, v14 | 4);
  sub_103FAB20(this, v30, v32);
  if ( a3 )
    *(_DWORD *)(this + 8272) = *(_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a3 + 8))(a3);
  else
    *(_DWORD *)(this + 8272) = -1;
  v15 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*a3 + 624))(a3, v29, 1024);
  *(float *)(this + 76) = 0.0;
  v36 = v15;
  v33 = 10.0;
  v16 = (double)v15 * 0.13333334;
  if ( v16 < 1.0 )
    v16 = 1.0;
  v17 = 0;
  if ( v15 <= 0 )
  {
    v19 = 1.0;
  }
  else
  {
    v38 = (float *)(this + 4176);
    v34 = 1.0 / v16;
    do
    {
      v37 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v29[v17] + 116))(v29[v17]);
      (*(void (__thiscall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v29[v17] + 140))(v29[v17], 0, v38 - 1024);
      v18 = v29[v17];
      *(float *)(this + 76) = *(float *)(this + 76) + v37;
      *v38 = v37;
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v18 + 112))(v18, COERCE_FLOAT(LODWORD(v34)));
      (*(void (__thiscall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v29[v17] + 136))(v29[v17], 0, &v33);
      ++v38;
      ++v17;
    }
    while ( v17 < v36 );
    v19 = 1.0;
  }
  v28 = v19;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 112))(v7, LODWORD(v28));
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 56))(v7, 0);
  if ( a5 )
    v20 = -1.5;
  else
    v20 = -1.0;
  *(float *)(this + 56) = v20;
  *(float *)(this + 60) = 0.0;
  *(float *)(this + 64) = 0.0;
  v21 = (float *)sub_103FA180((_BYTE *)this, (int)v31, (int)v32, a2);
  *(float *)(this + 8296) = *v21;
  *(float *)(this + 8300) = v21[1];
  *(float *)(this + 8304) = v21[2];
  if ( 0.0 != *(float *)(this + 68) )
  {
    v22 = (float *)sub_103F9920((int)v31, *(float *)(this + 68));
    *(float *)(this + 8296) = *v22;
    *(float *)(this + 8300) = v22[1];
    *(float *)(this + 8304) = v22[2];
  }
  if ( __RTDynamicCast(
         (int)a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CRagdollProp `RTTI Type Descriptor',
         0) )
  {
    *(float *)(this + 8308) = 0.0;
    *(float *)(this + 8312) = 0.0;
    *(float *)(this + 8316) = 0.0;
  }
  else
  {
    if ( (a3[63] & 0x800) != 0 )
      sub_100DAE60((int)a3);
    v23 = (*(int (__thiscall **)(_DWORD *))(*a3 + 576))(a3);
    sub_10421BA0(v23, a3 + 125, this + 8308);
  }
  v24 = (void *)__RTDynamicCast(
                  (int)a3,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                  (int)&CPhysicsProp `RTTI Type Descriptor',
                  0);
  v25 = v24;
  if ( v24 )
  {
    *(_BYTE *)(this + 8288) = sub_10206850(v24, "preferred_carryangles", this + 8276);
    v26 = sub_10206920(v25);
  }
  else
  {
    v26 = 0.0;
    *(_BYTE *)(this + 8288) = 0;
  }
  *(float *)(this + 8292) = v26;
  result = sub_103FA4D0((int)a3);
  *(_BYTE *)(this + 8324) = result;
  return result;
}
