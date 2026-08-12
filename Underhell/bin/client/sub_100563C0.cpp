char __thiscall sub_100563C0(char *this, _DWORD *a2)
{
  float *v5; // eax
  int v6; // eax
  float *v7; // eax
  double v8; // st5
  double v9; // st3
  double v10; // st2
  double v11; // st7
  float *v12; // eax
  double v13; // st7
  float *v14; // edi
  float *v15; // eax
  int v16; // [esp-Ch] [ebp-44h]
  float v17; // [esp+4h] [ebp-34h] BYREF
  float v18; // [esp+8h] [ebp-30h]
  float v19; // [esp+Ch] [ebp-2Ch]
  float v20; // [esp+10h] [ebp-28h] BYREF
  __int64 v21; // [esp+14h] [ebp-24h]
  float v22; // [esp+1Ch] [ebp-1Ch] BYREF
  float v23; // [esp+20h] [ebp-18h]
  float v24; // [esp+24h] [ebp-14h]
  float v25; // [esp+28h] [ebp-10h] BYREF
  float v26; // [esp+2Ch] [ebp-Ch]
  float v27; // [esp+30h] [ebp-8h]
  float v28; // [esp+34h] [ebp-4h] BYREF
  float v29; // [esp+40h] [ebp+8h]

  if ( (*(unsigned __int8 (__thiscall **)(char *))(*((_DWORD *)this + 2) + 32))(this + 8) )
    return 0;
  v5 = (float *)a2[25];
  if ( v5 )
    *v5 = *((float *)this + 299);
  if ( a2[23] )
  {
    v20 = flt_10459240;
    v6 = *((_DWORD *)this + 298);
    v21 = qword_10459244;
    *(&v20 + v6) = 1.0;
    sub_10037F50((int)this);
    sub_101ED920(&v20, this + 660, &v17);
    v29 = *((float *)this + 300) * -0.5;
    v7 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 268))(this);
    v16 = a2[23];
    v8 = v17 * v29 + *v7;
    v25 = v8;
    v9 = v18 * v29 + v7[1];
    v26 = v9;
    v10 = v29 * v19 + v7[2];
    v27 = v10;
    v11 = *((float *)this + 300);
    v22 = v8 + v17 * v11;
    v23 = v9 + v18 * v11;
    v24 = v11 * v19 + v10;
    sub_101F0230(a2 + 15, &v25, &v22, v16, &v28);
    if ( v28 < 0.0 )
    {
      v12 = (float *)a2[23];
      *v12 = v25;
      v12[1] = v26;
      v13 = v27;
LABEL_10:
      v12[2] = v13;
      goto LABEL_11;
    }
    if ( v28 > 1.0 )
    {
      v12 = (float *)a2[23];
      *v12 = v22;
      v12[1] = v23;
      v13 = v24;
      goto LABEL_10;
    }
  }
LABEL_11:
  v14 = (float *)a2[24];
  if ( v14 )
  {
    v15 = (float *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 88) + 36))(this + 352);
    *v14 = *v15;
    v14[1] = v15[1];
    v14[2] = v15[2];
  }
  return 1;
}
