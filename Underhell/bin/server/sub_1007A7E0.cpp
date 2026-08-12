bool __thiscall sub_1007A7E0(_DWORD *this, int a2, int a3)
{
  double v5; // st7
  double v7; // st6
  double v8; // rt0
  double v9; // st6
  double v10; // st5
  float *v11; // eax
  int v12; // eax
  double v13; // st7
  int v14; // ecx
  int (__thiscall *v15)(int); // eax
  float *v16; // eax
  int v17; // eax
  double v18; // st7
  int v19; // ecx
  float *v20; // eax
  int v21; // eax
  double v22; // st6
  double v23; // st7
  double v24; // st5
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  double v29; // st7
  bool result; // al
  double v31; // st7
  int v32; // ecx
  float *v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // eax
  int v39; // edx
  bool v40; // al
  double v41; // st7
  int v42; // [esp+8h] [ebp-150h]
  int v43; // [esp+8h] [ebp-150h]
  int v44; // [esp+8h] [ebp-150h]
  int v45; // [esp+8h] [ebp-150h]
  int v46; // [esp+8h] [ebp-150h]
  float *v47; // [esp+14h] [ebp-144h]
  float *v48; // [esp+14h] [ebp-144h]
  float *v49; // [esp+14h] [ebp-144h]
  float *v50; // [esp+14h] [ebp-144h]
  _BYTE v51[12]; // [esp+2Ch] [ebp-12Ch] BYREF
  int v52[16]; // [esp+38h] [ebp-120h] BYREF
  int v53; // [esp+78h] [ebp-E0h]
  _BYTE v54[12]; // [esp+80h] [ebp-D8h] BYREF
  int v55; // [esp+8Ch] [ebp-CCh] BYREF
  float v56; // [esp+90h] [ebp-C8h]
  float v57; // [esp+94h] [ebp-C4h]
  float v58; // [esp+ACh] [ebp-ACh]
  char v59; // [esp+B7h] [ebp-A1h]
  _BYTE v60[12]; // [esp+D4h] [ebp-84h] BYREF
  int v61; // [esp+E0h] [ebp-78h] BYREF
  float v62; // [esp+E4h] [ebp-74h]
  float v63; // [esp+E8h] [ebp-70h]
  float v64; // [esp+ECh] [ebp-6Ch]
  float v65; // [esp+F0h] [ebp-68h]
  float v66; // [esp+F4h] [ebp-64h]
  float v67; // [esp+100h] [ebp-58h]
  char v68; // [esp+10Bh] [ebp-4Dh]
  int v69; // [esp+120h] [ebp-38h]
  int v70; // [esp+124h] [ebp-34h]
  int v71; // [esp+128h] [ebp-30h] BYREF
  float v72; // [esp+12Ch] [ebp-2Ch]
  float v73; // [esp+130h] [ebp-28h]
  int v74; // [esp+134h] [ebp-24h] BYREF
  float v75; // [esp+138h] [ebp-20h]
  float v76; // [esp+13Ch] [ebp-1Ch]
  int v77; // [esp+140h] [ebp-18h] BYREF
  float v78; // [esp+144h] [ebp-14h]
  float v79; // [esp+148h] [ebp-10h]
  int v80; // [esp+14Ch] [ebp-Ch] BYREF
  float v81; // [esp+150h] [ebp-8h]
  float v82; // [esp+154h] [ebp-4h]
  int savedregs; // [esp+158h] [ebp+0h] BYREF
  int v84; // [esp+160h] [ebp+8h]
  int v85; // [esp+164h] [ebp+Ch]

  v5 = *(float *)(a2 + 24);
  v7 = *(float *)(a2 + 12) * v5;
  v84 = *(_DWORD *)(a2 + 40);
  v8 = v7 + *(float *)a2;
  v9 = v5 * *(float *)(a2 + 16) + *(float *)(a2 + 4);
  *(float *)a3 = *(float *)a2;
  *(float *)(a3 + 4) = *(float *)(a2 + 4);
  v10 = *(float *)(a2 + 8);
  *(_BYTE *)(a3 + 24) = 0;
  *(float *)(a3 + 8) = v10;
  *(float *)(a3 + 12) = flt_106F1CA8;
  *(float *)(a3 + 16) = flt_106F1CAC;
  *(float *)(a3 + 20) = flt_106F1CB0;
  *(_DWORD *)(a3 + 28) = 0;
  v80 = *(int *)a2;
  v81 = *(float *)(a2 + 4);
  v82 = flt_1060857C + *(float *)(a2 + 8);
  v79 = v82;
  *(float *)&v77 = v8;
  v78 = v9;
  if ( byte_106932A0 )
  {
    sub_1011BC50((int)&v80, (int)&v77, 255, 255, 255, 1, 5.0);
    sub_1011C120((int)&v77, 32.0, 255, 255, 255, 1, 5.0);
  }
  v47 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
  v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
  sub_10079F00((int)this, (int)&savedregs, a2, (int)this, (float *)&v80, (float *)&v77, v11, v47, v84, (int)v60);
  if ( v68 )
  {
    v18 = *(float *)(a2 + 28) + v82;
  }
  else
  {
    if ( v67 >= 1.0 )
    {
      v31 = v79;
      goto LABEL_33;
    }
    if ( byte_106932A0 )
    {
      v42 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
      v12 = (*(int (**)(void))(*(_DWORD *)(this[1] + 320) + 4))();
      sub_1011BB20((int)&v61, v12, v42, 64, 64, 64, 0, 5.0);
    }
    v80 = v61;
    v74 = v61;
    v81 = v62;
    v75 = v62;
    v82 = v63;
    v13 = v63 + *(float *)(a2 + 28);
    v76 = v63;
    v14 = this[1];
    v15 = *(int (__thiscall **)(int))(*(_DWORD *)(v14 + 320) + 8);
    v76 = v13;
    v48 = (float *)v15(v14 + 320);
    v16 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
    sub_10079F00((int)this, (int)&savedregs, a2, (int)this, (float *)&v80, (float *)&v74, v16, v48, v84, (int)v54);
    if ( byte_106932A0 )
    {
      v43 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
      v17 = (*(int (**)(void))(*(_DWORD *)(this[1] + 320) + 4))();
      sub_1011BB20((int)&v55, v17, v43, 96, 96, 96, 0, 5.0);
    }
    v80 = v55;
    v81 = v56;
    v18 = v57;
  }
  v19 = this[1];
  v82 = v18;
  v79 = v18;
  v49 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v19 + 320) + 8))(v19 + 320);
  v20 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
  sub_10079F00((int)this, (int)&savedregs, a2, (int)this, (float *)&v80, (float *)&v77, v20, v49, v84, (int)v54);
  if ( v59 || v58 <= 0.01 )
  {
    if ( v68 )
    {
      v29 = v64;
      *(_DWORD *)(a3 + 28) = v69;
      *(_BYTE *)(a3 + 24) = 1;
      *(float *)(a3 + 12) = v29;
      *(float *)(a3 + 16) = v65;
      result = 0;
      *(float *)(a3 + 20) = v66;
      return result;
    }
    goto LABEL_27;
  }
  if ( byte_106932A0 )
  {
    v44 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
    v21 = (*(int (**)(void))(*(_DWORD *)(this[1] + 320) + 4))();
    sub_1011BB20((int)&v55, v21, v44, 128, 128, 128, 0, 5.0);
  }
  v22 = *(float *)&v80;
  v23 = *(float *)(a2 + 36) * *(float *)(a2 + 36);
  if ( (v78 - v81) * (v78 - v81) + (*(float *)&v77 - *(float *)&v80) * (*(float *)&v77 - *(float *)&v80) >= v23 )
  {
    if ( (*(float *)&v55 - v22) * (*(float *)&v55 - v22) + (v56 - v81) * (v56 - v81) < v23 )
    {
      if ( byte_106932A0 )
      {
        v27 = sub_10079C20(this);
        v71 = *(int *)v27;
        v72 = *(float *)(v27 + 4);
        v73 = *(float *)(v27 + 8) + 0.1;
        v28 = sub_10079C00(this);
        v74 = *(int *)v28;
        v75 = *(float *)(v28 + 4);
        v76 = *(float *)(v28 + 8) + 0.1;
        sub_1011BB20((int)&v55, (int)&v74, (int)&v71, 255, 0, 0, 0, 5.0);
      }
      goto LABEL_27;
    }
  }
  else
  {
    v24 = *(float *)(a2 + 36);
    *(float *)&v74 = v22 + *(float *)(a2 + 12) * v24;
    v75 = v81 + *(float *)(a2 + 16) * v24;
    v76 = v24 * *(float *)(a2 + 20) + v82;
    sub_10079FE0((int)this, a2, (float *)&v80, (float *)&v74, v84, (int)v51);
    if ( *(float *)&v52[8] < 1.0 )
    {
      if ( byte_106932A0 )
      {
        v25 = sub_10079C20(this);
        v74 = *(int *)v25;
        v75 = *(float *)(v25 + 4);
        v76 = *(float *)(v25 + 8) + 0.1;
        v26 = sub_10079C00(this);
        v71 = *(int *)v26;
        v72 = *(float *)(v26 + 4);
        v73 = *(float *)(v26 + 8) + 0.1;
        sub_1011BB20((int)v52, (int)&v71, (int)&v74, 255, 0, 0, 0, 5.0);
      }
      if ( v53 )
        *(_DWORD *)(a3 + 28) = v53;
      goto LABEL_27;
    }
  }
  sub_1007A030((int)v60, (int)v54);
LABEL_27:
  if ( v67 < 1.0 )
  {
    if ( !*(_DWORD *)(a3 + 28) )
      *(_DWORD *)(a3 + 28) = v69;
    *(float *)(a3 + 12) = v64;
    *(float *)(a3 + 16) = v65;
    *(float *)(a3 + 20) = v66;
  }
  v77 = v61;
  v78 = v62;
  v31 = v63;
LABEL_33:
  v32 = this[1];
  v80 = v77;
  v81 = v78;
  v82 = v31;
  v79 = *(float *)(a2 + 8) - *(float *)(a2 + 32) * *(float *)(a2 + 28) - flt_1060857C;
  v50 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(v32 + 320) + 8))(v32 + 320);
  v33 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 4))(this[1] + 320);
  sub_10079F00((int)this, (int)&savedregs, a2, (int)this, (float *)&v80, (float *)&v77, v33, v50, v84, (int)v60);
  if ( 1.0 == v67 )
  {
    if ( byte_106932A0 )
    {
      v45 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
      v34 = (*(int (**)(void))(*(_DWORD *)(this[1] + 320) + 4))();
      sub_1011BB20((int)&v61, v34, v45, 255, 0, 0, 0, 5.0);
    }
    if ( sub_101C5260(this[1]) )
    {
      *(_DWORD *)(a3 + 28) = sub_101C5260(this[1]);
      return 0;
    }
    else
    {
      v35 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
      if ( v35 && (v36 = *(_DWORD *)(v35 + 12)) != 0 )
      {
        *(_DWORD *)(a3 + 28) = (*(int (__thiscall **)(int))(*(_DWORD *)v36 + 20))(v36);
        return 0;
      }
      else
      {
        result = 0;
        *(_DWORD *)(a3 + 28) = 0;
      }
    }
    return result;
  }
  if ( byte_106932A0 )
  {
    v46 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 320) + 8))(this[1] + 320);
    v37 = (*(int (**)(void))(*(_DWORD *)(this[1] + 320) + 4))();
    sub_1011BB20((int)&v61, v37, v46, 160, 160, 160, 0, 5.0);
  }
  v85 = v69;
  v38 = sub_101C5260(this[1]);
  v39 = v85;
  if ( v85 != v38 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, int))(*(_DWORD *)this[1] + 360))(this[1], v85) )
    {
      if ( byte_106932A0 )
        sub_1011C120((int)&v61, 32.0, 255, 0, 0, 1, 5.0);
      *(_DWORD *)(a3 + 28) = v85;
      return 0;
    }
    v39 = v85;
  }
  if ( *(float *)(a2 + 28) * 0.5 < v63 - *(float *)(a2 + 8)
    && (!(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v39 + 24))
     && v70 > 0
     || __RTDynamicCast(
          v85,
          0,
          (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
          (int)&CPhysicsProp `RTTI Type Descriptor',
          0))
    && fabs(0.0 * v66 + v65 * 0.0 + v64) > 0.4 )
  {
    *(_DWORD *)(a3 + 28) = v85;
    if ( byte_106932A0 )
      sub_1011C120((int)&v61, 32.0, 0, 0, 255, 1, 5.0);
    return 0;
  }
  if ( *(_DWORD *)(a2 + 44) )
  {
    v40 = sub_1007A470((int)this, (float *)&v61, v84);
    if ( *(_DWORD *)(a2 + 44) != 2 && !v40 )
    {
      *(_DWORD *)(a3 + 28) = v85;
      if ( byte_106932A0 )
      {
        sub_1011C120((int)&v61, 32.0, 255, 0, 255, 1, 5.0);
        return 0;
      }
      return 0;
    }
  }
  *(float *)a3 = *(float *)&v61;
  *(float *)(a3 + 4) = v62;
  v41 = v63;
  *(float *)(a3 + 8) = v63;
  *(float *)(a3 + 8) = v41 + flt_1060857C;
  if ( byte_106932A0 )
    sub_1011C120((int)&v61, 32.0, 0, 255, 0, 1, 5.0);
  return *(_DWORD *)(a3 + 28) == 0;
}
