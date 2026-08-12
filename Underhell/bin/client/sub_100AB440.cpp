char __thiscall sub_100AB440(float *this)
{
  int v2; // eax
  double v3; // st6
  double v4; // st7
  int v5; // ecx
  char result; // al
  int v7; // eax
  float *v8; // edi
  double v9; // st7
  float v10; // ebx
  int (__thiscall *v11)(float *, int, _BYTE *); // eax
  double v12; // st7
  int v13; // edi
  int v14; // eax
  float *v15; // eax
  float *v16; // eax
  int (__thiscall *v17)(float *); // edx
  int v18; // eax
  bool v19; // bl
  float v20; // edx
  int v21; // ecx
  double v22; // st5
  int v23; // eax
  double v24; // st4
  double v25; // st7
  float *v26; // esi
  double v27; // st6
  double v28; // rt1
  double v29; // st1
  double v30; // st7
  float *v31; // eax
  double v32; // st6
  double v33; // st7
  float *v34; // esi
  _BYTE v35[24]; // [esp+4h] [ebp-A0h] BYREF
  float v36; // [esp+1Ch] [ebp-88h] BYREF
  float v37; // [esp+20h] [ebp-84h]
  float v38; // [esp+24h] [ebp-80h]
  float v39; // [esp+30h] [ebp-74h]
  float v40[3]; // [esp+58h] [ebp-4Ch] BYREF
  float v41[3]; // [esp+64h] [ebp-40h] BYREF
  float v42; // [esp+70h] [ebp-34h]
  float v43[2]; // [esp+74h] [ebp-30h] BYREF
  float v44; // [esp+7Ch] [ebp-28h]
  float v45; // [esp+80h] [ebp-24h] BYREF
  float v46; // [esp+84h] [ebp-20h]
  float v47; // [esp+88h] [ebp-1Ch]
  float v48; // [esp+8Ch] [ebp-18h]
  float v49; // [esp+90h] [ebp-14h]
  float v50; // [esp+94h] [ebp-10h]
  float v51; // [esp+98h] [ebp-Ch]
  float v52; // [esp+9Ch] [ebp-8h]
  float v53; // [esp+A0h] [ebp-4h]

  if ( *(_BYTE *)(*((_DWORD *)this + 1) + 316) == 8
    || !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 196))(this) )
  {
    return 0;
  }
  v2 = *((_DWORD *)this + 1);
  if ( *(_BYTE *)(v2 + 316) != 9 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( 0.0 != *(float *)(v5 + 44) || *(float *)(v5 + 48) != 0.0 )
    {
      v7 = *((_DWORD *)this + 2);
      v48 = this[9] * *(float *)(v5 + 48) + this[6] * *(float *)(v7 + 44);
      v49 = this[10] * *(float *)(v7 + 48) + this[7] * *(float *)(v7 + 44);
      v50 = this[11] * *(float *)(v7 + 48) + this[8] * *(float *)(v7 + 44);
      off_103EDFEC();
      goto LABEL_9;
    }
    return 0;
  }
  v3 = -*(float *)(v2 + 4228);
  v4 = -*(float *)(v2 + 4232);
  v48 = -*(float *)(v2 + 4224);
  v49 = v3;
  v50 = v4;
LABEL_9:
  v8 = (float *)*((_DWORD *)this + 2);
  v9 = ((double (__thiscall *)(float *))*(_DWORD *)(*(_DWORD *)this + 124))(this);
  v10 = *this;
  v11 = *(int (__thiscall **)(float *, int, _BYTE *))(*(_DWORD *)this + 128);
  v41[0] = v48 * v9 + v8[38];
  v41[1] = v49 * v9 + v8[39];
  v12 = v9 * v50 + v8[40];
  v13 = *((_DWORD *)this + 2) + 152;
  v41[2] = v12;
  v14 = v11(this, 8, v35);
  (*(void (__thiscall **)(float *, int, float *, int))(LODWORD(v10) + 40))(this, v13, v41, v14);
  if ( 1.0 == v39 || !(*(unsigned __int8 (__thiscall **)(float *, _BYTE *))(*(_DWORD *)this + 120))(this, v35) )
    return 0;
  sub_10035C70(*((_BYTE **)this + 1), 9, 0);
  sub_10034490(*((_BYTE **)this + 1), 0);
  v15 = (float *)*((_DWORD *)this + 1);
  v15[1056] = v36;
  v15[1057] = v37;
  v15[1058] = v38;
  v16 = (float *)*((_DWORD *)this + 2);
  v43[0] = v16[38];
  v43[1] = v16[39];
  v17 = *(int (__thiscall **)(float *))(*(_DWORD *)this + 32);
  v44 = v16[40];
  v18 = v17(this);
  v44 = *(float *)(v18 + 8) - 1.0 + v44;
  v19 = (**(int (__thiscall ***)(int, float *, _DWORD))dword_104131A0)(dword_104131A0, v43, 0) == 1
     || sub_100F7AF0(*((_DWORD *)this + 1));
  v20 = *this;
  *(float *)(*((_DWORD *)this + 1) + 296) = 0.0;
  (*(void (__thiscall **)(float *))(LODWORD(v20) + 132))(this);
  v21 = *((_DWORD *)this + 2);
  v22 = 0.0;
  v23 = *(_DWORD *)(v21 + 36);
  v24 = 0.0;
  if ( (v23 & 0x10) != 0 )
    v22 = -0.0;
  if ( (v23 & 8) != 0 )
    v22 = v22 + 0.0;
  if ( (v23 & 0x200) != 0 )
    v24 = -0.0;
  if ( (v23 & 0x400) != 0 )
    v25 = v24 + 0.0;
  else
    v25 = v24;
  if ( (v23 & 2) != 0 )
  {
    sub_10035C70(*((_BYTE **)this + 1), 2, 0);
    sub_10034490(*((_BYTE **)this + 1), 0);
    v26 = (float *)*((_DWORD *)this + 2);
    result = 1;
    v26[16] = v36 * 270.0;
    v26[17] = v37 * 270.0;
    v26[18] = 270.0 * v38;
  }
  else if ( 0.0 == v22 && 0.0 == v25 )
  {
    *(float *)(v21 + 64) = 0.0;
    result = 1;
    *(float *)(v21 + 68) = 0.0;
    *(float *)(v21 + 72) = 0.0;
  }
  else
  {
    v27 = v22 * this[8];
    v28 = this[7] * v22;
    v51 = v22 * this[6] + this[9] * v25;
    v52 = v28 + this[10] * v25;
    v53 = v25 * this[11] + v27;
    v45 = flt_10459240;
    v46 = *(float *)&qword_10459244;
    v47 = 1.0;
    sub_10014570(&v45, &v36, v40);
    off_103EDFEC();
    v29 = v38 * v53 + v36 * v51 + v37 * v52;
    v42 = v29;
    v51 = v51 - v36 * v29;
    v52 = v52 - v37 * v29;
    v53 = v53 - v38 * v29;
    sub_10014570(&v36, v40, &v45);
    v30 = v42;
    v31 = (float *)*((_DWORD *)this + 2);
    v32 = -v42;
    v31[16] = v45 * v32 + v51;
    v31[17] = v46 * v32 + v52;
    v31[18] = v32 * v47 + v53;
    if ( v19 && v30 > 0.0 )
    {
      v33 = *(float *)(dword_1042E23C + 44);
      v34 = (float *)*((_DWORD *)this + 2);
      result = 1;
      v34[16] = v36 * v33 + v34[16];
      v34[17] = v37 * v33 + v34[17];
      v34[18] = v33 * v38 + v34[18];
    }
    else
    {
      return 1;
    }
  }
  return result;
}
