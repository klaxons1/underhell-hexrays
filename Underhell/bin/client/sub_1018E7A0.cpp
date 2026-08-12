void __thiscall sub_1018E7A0(void *this, int a2, int a3)
{
  unsigned int v4; // ecx
  int *v5; // eax
  unsigned int v6; // ecx
  double v7; // st7
  int v8; // eax
  int v9; // eax
  int *v10; // edi
  float *v11; // ebx
  float *v12; // eax
  double v13; // st6
  double v14; // st5
  double v15; // st4
  float *v16; // eax
  float v17; // ecx
  float v18; // edx
  int v19; // eax
  int (__thiscall *v20)(void *, _BYTE *); // edx
  float *v21; // eax
  int v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  float v26; // [esp+0h] [ebp-50h]
  float v27; // [esp+4h] [ebp-4Ch]
  float v28; // [esp+8h] [ebp-48h]
  float v29; // [esp+Ch] [ebp-44h]
  float v30; // [esp+10h] [ebp-40h]
  _BYTE v31[12]; // [esp+1Ch] [ebp-34h] BYREF
  float v32[3]; // [esp+28h] [ebp-28h] BYREF
  float v33; // [esp+34h] [ebp-1Ch]
  float v34; // [esp+38h] [ebp-18h]
  int v35; // [esp+3Ch] [ebp-14h]
  float v36; // [esp+40h] [ebp-10h]
  float v37; // [esp+44h] [ebp-Ch]
  float v38; // [esp+48h] [ebp-8h]
  float v39; // [esp+4Ch] [ebp-4h]

  v4 = *((_DWORD *)this + 1319);
  if ( v4 == -1 || (v5 = (int *)((char *)off_103DCD74 + 16 * (v4 & 0xFFF) + 4), v6 = v4 >> 12, v5[1] != v6) || !*v5 )
  {
    if ( *(float *)(dword_10432954 + 44) == *((float *)this + 1332) )
      goto LABEL_16;
    v30 = *(float *)(dword_10432954 + 44);
    v29 = *((float *)this + 1333);
    v28 = 0.0;
    v27 = *(float *)(dword_104466B4 + 44);
    v7 = *((float *)this + 1320) - *((float *)off_103DC81C + 3);
    goto LABEL_6;
  }
  if ( v5[1] == v6 )
    v8 = *v5;
  else
    v8 = 0;
  v9 = __RTDynamicCast(
         v8,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
         (int)&C_AI_BaseNPC `RTTI Type Descriptor',
         0);
  v10 = (int *)v9;
  if ( v9 )
  {
    v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 36))(v9);
    v12 = (float *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 36))(this);
    v13 = v12[1] - v11[1];
    v14 = v12[2] - v11[2];
    v15 = *v12 - *v11;
    if ( (double)v10[841] <= v15 * v15 + v13 * v13 + v14 * v14 )
      goto LABEL_13;
    v16 = (float *)(*(int (__thiscall **)(int *))(*v10 + 36))(v10);
    v17 = *v16;
    v18 = v16[1];
    v19 = *((_DWORD *)v16 + 2);
    v34 = v18;
    v20 = *(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 532);
    v35 = v19;
    v33 = v17;
    v21 = (float *)v20(this, v31);
    v36 = v33 - *v21;
    v37 = v34 - v21[1];
    v38 = 0.0;
    off_103EDFEC();
    v22 = (*(int (__thiscall **)(void *, float *))(*(_DWORD *)this + 40))(this, v32);
    sub_101EDFB0(v22);
    if ( v32[1] * v37 + v36 * v32[0] + v32[2] * v38 <= 0.8 )
    {
LABEL_13:
      *((_DWORD *)this + 1319) = -1;
      *((float *)this + 1320) = *(float *)(dword_104466B4 + 44) + *((float *)off_103DC81C + 3);
      *((float *)this + 1333) = *((float *)this + 1332);
      return;
    }
    v23 = (double)v10[842];
    v39 = v23;
    if ( v39 != *((float *)this + 1332) )
    {
      v30 = v23;
      v29 = *(float *)(dword_10432954 + 44);
      v28 = 0.0;
      v27 = *(float *)(dword_1044666C + 44);
      v7 = *((float *)this + 1320) - *((float *)off_103DC81C + 3);
LABEL_6:
      v26 = v7;
      *((float *)this + 1332) = sub_100260E0(v26, v27, v28, v29, v30);
    }
  }
LABEL_16:
  v24 = *((float *)this + 1332);
  if ( v24 >= *(float *)(a3 + 24) )
  {
    v24 = -v24;
    if ( v24 <= *(float *)(a3 + 24) )
      v24 = *(float *)(a3 + 24);
  }
  *(float *)(a3 + 24) = v24;
  v25 = *((float *)this + 1332);
  if ( v25 >= *(float *)(a3 + 28) )
  {
    v25 = -v25;
    if ( v25 <= *(float *)(a3 + 28) )
      v25 = *(float *)(a3 + 28);
  }
  *(float *)(a3 + 28) = v25;
}
