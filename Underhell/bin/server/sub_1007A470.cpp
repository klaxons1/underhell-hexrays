bool __thiscall sub_1007A470(int this, float *a2, int a3)
{
  int v5; // ecx
  double (__thiscall *v6)(int); // eax
  double v8; // st7
  _DWORD *v9; // ecx
  double v10; // st7
  int v11; // ecx
  int (__thiscall *v12)(int); // eax
  float *v13; // eax
  float v14; // ecx
  float v15; // edx
  float v16; // eax
  int *v17; // ecx
  int v18; // edx
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  float v22; // eax
  float *v23; // eax
  float *v24; // eax
  double v25; // st7
  double v26; // st6
  double v27; // st5
  int v28; // eax
  _BYTE v29[44]; // [esp+4h] [ebp-100h] BYREF
  float v30; // [esp+30h] [ebp-D4h]
  int v31; // [esp+50h] [ebp-B4h]
  _BYTE v32[44]; // [esp+58h] [ebp-ACh] BYREF
  float v33; // [esp+84h] [ebp-80h]
  int v34; // [esp+A4h] [ebp-60h]
  float v35; // [esp+ACh] [ebp-58h]
  float v36; // [esp+B0h] [ebp-54h] BYREF
  float v37; // [esp+B4h] [ebp-50h]
  float v38; // [esp+B8h] [ebp-4Ch]
  float v39; // [esp+BCh] [ebp-48h] BYREF
  float v40; // [esp+C0h] [ebp-44h]
  float v41; // [esp+C4h] [ebp-40h]
  float v42[3]; // [esp+C8h] [ebp-3Ch] BYREF
  float v43; // [esp+D4h] [ebp-30h] BYREF
  float v44; // [esp+D8h] [ebp-2Ch]
  float v45; // [esp+DCh] [ebp-28h]
  float v46[3]; // [esp+E0h] [ebp-24h] BYREF
  float v47; // [esp+ECh] [ebp-18h] BYREF
  float v48; // [esp+F0h] [ebp-14h]
  float v49; // [esp+F4h] [ebp-10h]
  float v50; // [esp+F8h] [ebp-Ch] BYREF
  float v51; // [esp+FCh] [ebp-8h]
  float v52; // [esp+100h] [ebp-4h]
  int savedregs; // [esp+104h] [ebp+0h] BYREF
  float v54; // [esp+10Ch] [ebp+8h]

  if ( (*(char (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1672))(*(_DWORD *)(this + 4)) < 0
    || *(_DWORD *)(dword_1069339C + 48) )
  {
    return 1;
  }
  v5 = *(_DWORD *)(this + 4);
  v6 = *(double (__thiscall **)(int))(*(_DWORD *)v5 + 1724);
  v42[0] = *a2;
  v42[1] = a2[1];
  v42[2] = a2[2] + 0.1;
  v8 = v6(v5);
  v9 = *(_DWORD **)(this + 4);
  v54 = v8;
  v46[0] = *a2;
  v46[1] = a2[1];
  v35 = a2[2];
  v10 = sub_10042670(v9);
  v11 = *(_DWORD *)(this + 4);
  v12 = *(int (__thiscall **)(int))(*(_DWORD *)(v11 + 320) + 4);
  v46[2] = v35 - v10 * v54;
  v13 = (float *)v12(v11 + 320);
  v14 = *v13;
  v15 = v13[1];
  v16 = v13[2];
  v47 = v14;
  v17 = (int *)(*(_DWORD *)(this + 4) + 320);
  v48 = v15;
  v18 = *v17;
  v49 = v16;
  v19 = (float *)(*(int (__thiscall **)(int *))(v18 + 8))(v17);
  v20 = *v19;
  v21 = v19[1];
  v22 = v19[2];
  v50 = v20;
  v51 = v21;
  v52 = v22;
  if ( sub_10018CD0(&v50, &flt_106F1CA8) && sub_10018CD0(&v47, &v50) )
  {
    v23 = (float *)sub_10079C40((_DWORD *)this);
    v47 = *v23;
    v48 = v23[1];
    v49 = v23[2];
    v24 = (float *)sub_10079C60((_DWORD *)this);
    v25 = *v24;
    v26 = v24[1];
    v27 = v49;
  }
  else
  {
    v26 = v51;
    v27 = v49;
    v25 = v50;
  }
  v28 = *(_DWORD *)(*(_DWORD *)(this + 4) + 248) >> 4;
  v36 = v47 * 0.75 + v25 * 0.25;
  v39 = v25 * 0.75 + v47 * 0.25;
  v37 = v26 * 0.25 + v48 * 0.75;
  v40 = 0.25 * v48 + 0.75 * v26;
  v38 = v27;
  v41 = v38;
  if ( (v28 & 1) != 0 )
  {
    sub_10079F00(this, (int)&savedregs, (int)a2, this, v42, v46, &v36, &v39, a3, (int)v32);
    if ( 1.0 != v33
      && (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 360))(*(_DWORD *)(this + 4), v34) )
    {
      return 1;
    }
  }
  else
  {
    v50 = 0.0;
    v51 = 0.0;
    v52 = v27;
    sub_10079F00(this, (int)&savedregs, a3, this, v42, v46, &v36, &v50, a3, (int)v32);
    if ( 1.0 != v33 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 360))(*(_DWORD *)(this + 4), v34) )
      {
        sub_10079F00(this, (int)&savedregs, a3, this, v42, v46, &v50, &v39, a3, (int)v29);
        if ( 1.0 != v30
          && (v34 == v31
           || (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 360))(
                *(_DWORD *)(this + 4),
                v31)) )
        {
          return 1;
        }
      }
    }
    v50 = v36;
    v51 = 0.0;
    v52 = v49;
    v43 = 0.0;
    v44 = v40;
    v45 = v49;
    sub_10079F00(this, (int)&savedregs, a3, this, v42, v46, &v50, &v43, a3, (int)v32);
    if ( 1.0 != v33 )
    {
      if ( (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 360))(*(_DWORD *)(this + 4), v34) )
      {
        v50 = 0.0;
        v51 = v37;
        v52 = v49;
        v43 = v39;
        v44 = 0.0;
        v45 = v49;
        sub_10079F00(this, (int)&savedregs, a3, this, v42, v46, &v50, &v43, a3, (int)v29);
        if ( 1.0 != v30 )
        {
          if ( v34 != v31 )
            return (*(unsigned __int8 (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 4) + 360))(
                     *(_DWORD *)(this + 4),
                     v31) != 0;
          return 1;
        }
      }
    }
  }
  return 0;
}
