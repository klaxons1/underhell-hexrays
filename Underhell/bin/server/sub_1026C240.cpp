int __thiscall sub_1026C240(int *this, float *a2, _BYTE *a3)
{
  _DWORD *v5; // eax
  char v6; // al
  int v7; // edx
  int v8; // eax
  int *v9; // edi
  int v10; // eax
  int v11; // edx
  int (__thiscall *v12)(int *, int *); // edx
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  double v17; // st7
  float *v18; // eax
  double v19; // st5
  int v20; // eax
  double v21; // st7
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  char v27; // al
  int v28; // eax
  int v29; // eax
  float *v30; // eax
  int v31; // ecx
  double v32; // st6
  double v33; // st7
  int v34; // [esp+8h] [ebp-124h]
  int v35; // [esp+8h] [ebp-124h]
  int v36; // [esp+8h] [ebp-124h]
  float *v37; // [esp+Ch] [ebp-120h]
  int v38; // [esp+18h] [ebp-114h]
  float v39; // [esp+1Ch] [ebp-110h]
  int v40; // [esp+1Ch] [ebp-110h]
  _BYTE v41[12]; // [esp+2Ch] [ebp-100h] BYREF
  int v42[8]; // [esp+38h] [ebp-F4h] BYREF
  float v43; // [esp+58h] [ebp-D4h]
  char v44; // [esp+62h] [ebp-CAh]
  char v45; // [esp+63h] [ebp-C9h]
  int v46; // [esp+78h] [ebp-B4h]
  float v47[3]; // [esp+80h] [ebp-ACh] BYREF
  int v48[3]; // [esp+8Ch] [ebp-A0h] BYREF
  int v49[3]; // [esp+98h] [ebp-94h] BYREF
  int v50[3]; // [esp+A4h] [ebp-88h] BYREF
  int v51[3]; // [esp+B0h] [ebp-7Ch] BYREF
  int v52; // [esp+BCh] [ebp-70h]
  int v53; // [esp+C0h] [ebp-6Ch]
  float v54; // [esp+C4h] [ebp-68h]
  int v55; // [esp+C8h] [ebp-64h]
  float v56; // [esp+CCh] [ebp-60h]
  float v57[2]; // [esp+D0h] [ebp-5Ch] BYREF
  float v58; // [esp+D8h] [ebp-54h]
  float v59; // [esp+DCh] [ebp-50h]
  float v60; // [esp+E0h] [ebp-4Ch]
  float v61; // [esp+E4h] [ebp-48h]
  int v62; // [esp+E8h] [ebp-44h] BYREF
  float v63; // [esp+ECh] [ebp-40h]
  float v64; // [esp+F0h] [ebp-3Ch]
  int v65; // [esp+F4h] [ebp-38h] BYREF
  float v66; // [esp+F8h] [ebp-34h]
  float v67; // [esp+FCh] [ebp-30h]
  float v68; // [esp+100h] [ebp-2Ch]
  int v69; // [esp+104h] [ebp-28h]
  float v70; // [esp+108h] [ebp-24h]
  float v71; // [esp+10Ch] [ebp-20h]
  int v72; // [esp+110h] [ebp-1Ch]
  int v73; // [esp+114h] [ebp-18h] BYREF
  int v74; // [esp+118h] [ebp-14h]
  float v75; // [esp+11Ch] [ebp-10h]
  void *v76; // [esp+120h] [ebp-Ch]
  int v77; // [esp+124h] [ebp-8h]
  char v78; // [esp+12Ah] [ebp-2h]
  char v79; // [esp+12Bh] [ebp-1h]
  int savedregs; // [esp+12Ch] [ebp+0h] BYREF

  *a3 = 0;
  if ( !*((_BYTE *)this + 104) )
  {
    (*(void (__thiscall **)(int *))(*this + 244))(this);
    *((_BYTE *)this + 104) = 1;
  }
  if ( !this[24] )
    return -1;
  v5 = (_DWORD *)__RTDynamicCast(
                   this[11],
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CBaseAnimating `RTTI Type Descriptor',
                   0);
  v76 = v5;
  if ( !v5 || !sub_10001430(v5) )
    return -1;
  v6 = (*(int (__thiscall **)(int *))(*this + 52))(this);
  v7 = *this;
  v78 = v6;
  v8 = (*(int (__thiscall **)(int *))(v7 + 240))(this);
  v9 = (int *)v8;
  if ( !v8 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8) )
    return -1;
  v10 = (*(int (__thiscall **)(int *, int *))(*this + 4))(this, v9);
  v11 = *v9;
  *(float *)&v69 = 0.0;
  v12 = *(int (__thiscall **)(int *, int *))(v11 + 504);
  v70 = 0.0;
  v53 = v10;
  v71 = 0.0;
  v13 = -1;
  v79 = 1;
  v14 = v12(v9, v49);
  v62 = *(int *)v14;
  v63 = *(float *)(v14 + 4);
  v64 = *(float *)(v14 + 8);
  sub_100F5A30(v9, (int)v57, 0, 0);
  v58 = 0.0;
  off_10689714();
  v15 = this[24];
  v68 = -2.0;
  v52 = v15;
  v72 = 0;
  if ( v15 <= 0 )
    goto LABEL_45;
  v77 = 0;
  do
  {
    v16 = this[21] + v77;
    if ( *(_BYTE *)v16 == v78 && (v79 || !*(_BYTE *)(v16 + 1)) )
    {
      if ( *((_BYTE *)this + 105) )
      {
        sub_100BEFA0(v76, (char *)(v16 + 2), (int)&v73, (int)v51);
      }
      else
      {
        v73 = *(int *)(v16 + 132);
        v74 = *(int *)(v16 + 136);
        v75 = *(float *)(v16 + 140);
        v51[0] = *(int *)(v16 + 144);
        v51[1] = *(int *)(v16 + 148);
        v51[2] = *(int *)(v16 + 152);
        sub_10262790((int)v76, (int)&v73, (int)v51);
      }
      if ( (v59 = *(float *)&v73 - *(float *)&v62,
            v60 = *(float *)&v74 - v63,
            v61 = 0.0,
            off_10689714(),
            v17 = v59 * v57[0] + v57[1] * v60 + v61 * v58,
            v54 = v17,
            v79)
        && !*(_BYTE *)(this[21] + v77 + 1)
        || v17 >= v68 )
      {
        v18 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
        *(float *)&v73 = *(float *)&v73 - *v18;
        *(float *)&v74 = *(float *)&v74 - v18[1];
        v19 = v75 - v18[2];
        v75 = v19;
        v50[0] = v73;
        v50[1] = v74;
        *(float *)&v50[2] = v19 + 64.0;
        v48[0] = v73;
        v48[1] = v74;
        *(float *)&v48[2] = v19 - 64.0;
        v47[0] = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
        v47[1] = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 28);
        v47[2] = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 20);
        v20 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
        sub_100231A0(
          (int)&savedregs,
          (int)this,
          (float *)v50,
          (float *)v48,
          (float *)(v20 + 12),
          v47,
          33636363,
          0,
          0,
          (int)v41);
        if ( *(_DWORD *)(dword_106CEF4C + 48) )
        {
          v56 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
          v55 = *(int *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 28);
          v21 = *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 16);
          *(float *)v49 = v56;
          v49[1] = v55;
          *(float *)&v49[2] = v21;
          v22 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
          sub_1011BA20((int)v50, (int)v48, v22 + 12, (int)v49, (int)&flt_106F1CB4, 255, 255, 255, 8, 20.0);
        }
        if ( v43 >= 1.0 )
        {
          if ( v44
            || v43 == 1.0
            && !(*(unsigned __int8 (__thiscall **)(int, int *, int))(*(_DWORD *)this[12] + 52))(this[12], v9, v53) )
          {
            if ( !*(_DWORD *)(dword_106CEF4C + 48) )
              goto LABEL_40;
            v39 = 10.0;
            v38 = 64;
            goto LABEL_39;
          }
        }
        else
        {
          v37 = (float *)((*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24);
          v23 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
          sub_100231A0(
            (int)&savedregs,
            (int)this,
            (float *)v42,
            (float *)v42,
            (float *)(v23 + 12),
            v37,
            33636363,
            0,
            0,
            (int)v41);
          if ( v45 )
          {
            if ( !*(_DWORD *)(dword_106CEF4C + 48) )
              goto LABEL_40;
            v39 = 20.0;
            v38 = 8;
LABEL_39:
            v35 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24;
            v28 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
            sub_1011BB20((int)v42, v28 + 12, v35, 255, 0, 0, v38, v39);
            goto LABEL_40;
          }
          if ( *(_DWORD *)(dword_106CEF4C + 48) )
          {
            v34 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24;
            v24 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
            sub_1011BB20((int)v42, v24 + 12, v34, 0, 255, 0, 8, 20.0);
          }
        }
        v65 = v42[0];
        v66 = *(float *)&v42[1];
        v67 = *(float *)&v42[2];
        sub_1002A5F0((int)&savedregs, (int)this, (float *)&v62, (float *)&v65, 33636363, (int)v76, 0, (int)v41);
        if ( 1.0 == v43
          || (v40 = v46, v25 = (*(int (__thiscall **)(int *))(*this + 32))(this),
                         (unsigned __int8)sub_1026FA70(v25, v40)) )
        {
          v26 = this[21];
          v69 = v65;
          v27 = *(_BYTE *)(v26 + v77 + 1);
          v13 = v72;
          v70 = v66;
          v79 = v27;
          v71 = v67;
          v68 = v54;
        }
        else if ( *(_DWORD *)(dword_106CEF4C + 48) )
        {
          sub_1011BC50((float *)&v62, (float *)&v65, 255, 0, 0, 1, 10.0);
        }
      }
    }
LABEL_40:
    v77 += 156;
    ++v72;
  }
  while ( v72 < v52 );
  if ( v13 < 0 )
  {
LABEL_45:
    *a3 = 1;
    return -1;
  }
  this[28] = v69;
  *((float *)this + 29) = v70;
  *((float *)this + 30) = v71;
  if ( *(_DWORD *)(dword_106CEF4C + 48) )
  {
    sub_1011C120((int)(this + 28), 16.0, 0, 255, 0, 1, 10.0);
    v36 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC) + 24;
    v29 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    sub_1011BB20((int)(this + 28), v29 + 12, v36, 255, 255, 255, 8, 10.0);
  }
  v30 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
  v31 = (int)v76;
  v32 = v30[1] + v70;
  v33 = v30[2] + v71;
  *a2 = *v30 + *(float *)&v69;
  a2[1] = v32;
  a2[2] = v33;
  this[27] = v13;
  return sub_100BDF40(v31, (char *)(this[21] + 156 * v13 + 2));
}
