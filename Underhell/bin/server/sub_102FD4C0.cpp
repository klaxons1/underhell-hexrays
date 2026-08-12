char __thiscall sub_102FD4C0(_DWORD *this, int a2, float *a3)
{
  int v4; // ebx
  float *v5; // eax
  int v6; // eax
  char *v7; // eax
  int v8; // esi
  char *v9; // eax
  int v11; // eax
  char *v12; // eax
  double v13; // st7
  int v14; // eax
  char *v15; // eax
  int v16; // edi
  float *v17; // eax
  int v18; // edi
  char *v19; // eax
  char *v20; // eax
  int v21; // esi
  float *v22; // eax
  float *v23; // [esp-14h] [ebp-90h]
  float *v24; // [esp-10h] [ebp-8Ch]
  float *v25; // [esp-10h] [ebp-8Ch]
  _BYTE v27[12]; // [esp+10h] [ebp-6Ch] BYREF
  int v28; // [esp+1Ch] [ebp-60h] BYREF
  float v29; // [esp+20h] [ebp-5Ch]
  float v30; // [esp+24h] [ebp-58h]
  float v31; // [esp+3Ch] [ebp-40h]
  char v32; // [esp+46h] [ebp-36h]
  int v33; // [esp+64h] [ebp-18h] BYREF
  float v34; // [esp+68h] [ebp-14h]
  float v35; // [esp+6Ch] [ebp-10h]
  int v36; // [esp+70h] [ebp-Ch] BYREF
  float v37; // [esp+74h] [ebp-8h]
  float v38; // [esp+78h] [ebp-4h]
  int savedregs; // [esp+7Ch] [ebp+0h] BYREF

  v36 = *(int *)a2;
  v4 = this[419];
  v37 = *(float *)(a2 + 4);
  v38 = *(float *)(a2 + 8) + 64.0;
  v24 = (float *)sub_10073730(v4);
  v5 = (float *)sub_10073710(v4);
  sub_100231A0((int)&savedregs, (int)this, (float *)a2, (float *)&v36, v5, v24, 33701899, (int)this, 0, (int)v27);
  if ( v32 )
  {
    if ( *(_DWORD *)(dword_106E2A04 + 48) == 3 )
    {
      v6 = this[419];
      *(float *)&v36 = 0.0;
      v37 = 0.0;
      v38 = 1.0;
      v7 = sub_10073730(v6);
      v8 = this[419];
      v33 = *(int *)v7;
      v34 = *((float *)v7 + 1);
      v35 = *((float *)v7 + 2) + 128.0;
      v9 = sub_10073710(v8);
      sub_1011BB60(a2, (int)v9, (int)&v33, (int)&v36, 255, 0, 0, 1, 2.0);
    }
    return 0;
  }
  if ( *(_DWORD *)(dword_106E2A04 + 48) == 3 )
  {
    v11 = this[419];
    *(float *)&v33 = 0.0;
    v34 = 0.0;
    v35 = 1.0;
    v12 = sub_10073730(v11);
    v36 = *(int *)v12;
    v37 = *((float *)v12 + 1);
    v13 = *((float *)v12 + 2) + 128.0;
    v14 = this[419];
    v38 = v13;
    v15 = sub_10073710(v14);
    sub_1011BB60(a2, (int)v15, (int)&v36, (int)&v33, 0, 255, 0, 1, 2.0);
  }
  v16 = this[419];
  v33 = v28;
  v34 = v29;
  v35 = v30 - 128.0;
  v25 = (float *)sub_10073730(v16);
  v17 = (float *)sub_10073710(v16);
  sub_100231A0((int)&savedregs, (int)this, (float *)&v28, (float *)&v33, v17, v25, 33701899, (int)this, 0, (int)v27);
  if ( *(_DWORD *)(dword_106E2A04 + 48) == 3 )
  {
    v18 = this[419];
    *(float *)&v33 = 0.0;
    v34 = 0.0;
    v35 = 1.0;
    v19 = sub_10073710(v18);
    v36 = *(int *)v19;
    v37 = *((float *)v19 + 1);
    v38 = *((float *)v19 + 2) - 256.0;
    v20 = sub_10073730(v18);
    sub_1011BB60((int)&v28, (int)&v36, (int)v20, (int)&v33, 255, 255, 0, 1, 2.0);
  }
  if ( v31 >= 1.0 )
    return 0;
  if ( *(_DWORD *)(dword_106E2A04 + 48) == 3 )
  {
    v21 = this[419];
    v23 = (float *)sub_10073730(v21);
    v22 = (float *)sub_10073710(v21);
    sub_1011C000((float *)&v28, v22, v23, 255, 0, 0, 1, 2.0);
  }
  *a3 = *(float *)&v28;
  a3[1] = v29;
  a3[2] = v30;
  return 1;
}
