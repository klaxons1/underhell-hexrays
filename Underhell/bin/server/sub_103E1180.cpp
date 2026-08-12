void __thiscall sub_103E1180(int this)
{
  double v2; // st6
  double v3; // st5
  double v4; // st7
  int *v5; // eax
  int v6; // eax
  int v7; // edi
  void *v8; // eax
  int v9; // ecx
  float *v10; // eax
  unsigned int v11; // ecx
  int *v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // eax
  double v16; // st7
  unsigned int v17; // eax
  int v18; // eax
  int v19; // edi
  float *v20; // eax
  float v21; // edx
  float v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st6
  double v26; // st5
  double v27; // rt1
  double v28; // st5
  int v29[20]; // [esp+28h] [ebp-10Ch] BYREF
  float v30[3]; // [esp+78h] [ebp-BCh] BYREF
  _DWORD v31[7]; // [esp+84h] [ebp-B0h] BYREF
  float v32; // [esp+A0h] [ebp-94h]
  float v33; // [esp+A4h] [ebp-90h]
  float v34; // [esp+A8h] [ebp-8Ch]
  float v35; // [esp+ACh] [ebp-88h]
  int v36; // [esp+B0h] [ebp-84h]
  int v37; // [esp+B4h] [ebp-80h]
  int v38; // [esp+B8h] [ebp-7Ch]
  int v39; // [esp+BCh] [ebp-78h]
  int v40; // [esp+C0h] [ebp-74h]
  int v41; // [esp+C4h] [ebp-70h]
  float v42; // [esp+C8h] [ebp-6Ch]
  int v43; // [esp+CCh] [ebp-68h]
  int v44; // [esp+D0h] [ebp-64h]
  __int16 v45; // [esp+D4h] [ebp-60h]
  char v46; // [esp+D7h] [ebp-5Dh]
  __int16 v47; // [esp+D8h] [ebp-5Ch]
  float v48[3]; // [esp+DCh] [ebp-58h] BYREF
  int v49[3]; // [esp+E8h] [ebp-4Ch] BYREF
  int v50; // [esp+F4h] [ebp-40h]
  int v51; // [esp+F8h] [ebp-3Ch] BYREF
  float v52; // [esp+FCh] [ebp-38h]
  float v53; // [esp+100h] [ebp-34h]
  int v54; // [esp+104h] [ebp-30h] BYREF
  float v55; // [esp+108h] [ebp-2Ch]
  float v56; // [esp+10Ch] [ebp-28h]
  float v57; // [esp+110h] [ebp-24h] BYREF
  float v58; // [esp+114h] [ebp-20h]
  float v59; // [esp+118h] [ebp-1Ch]
  int v60; // [esp+11Ch] [ebp-18h] BYREF
  int v61; // [esp+120h] [ebp-14h]
  int v62; // [esp+124h] [ebp-10h]
  float v63; // [esp+128h] [ebp-Ch]
  float v64; // [esp+12Ch] [ebp-8h]
  float v65; // [esp+130h] [ebp-4h]
  int savedregs; // [esp+134h] [ebp+0h] BYREF

  sub_100BD6D0((void *)this, *(_DWORD *)(this + 1768), (int)&v54, v30, 0, 0);
  if ( *(_BYTE *)(this + 1688) )
  {
    v2 = v30[0] * 1000.0 + *(float *)&v54;
    v4 = v30[1] * 1000.0 + v55;
    v3 = 1000.0 * v30[2] + v56;
  }
  else
  {
    sub_103E0F70(this, (int)&savedregs, this, &v57);
    v2 = v57;
    v3 = v59;
    v4 = v58;
  }
  *(float *)&v60 = v2 - *(float *)&v54;
  *(float *)&v61 = v4 - v55;
  *(float *)&v62 = v3 - v56;
  off_10689714();
  v5 = sub_102D9B20();
  v6 = sub_100B9D10(v5, "AirboatGun");
  v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  v36 = v6;
  v31[0] = 1;
  v42 = 1.0;
  v37 = 4;
  v39 = 0;
  v31[1] = v54;
  v40 = 0;
  v43 = 0;
  *(float *)&v31[2] = v55;
  v44 = 0;
  v45 = 1;
  *(float *)&v31[3] = v56;
  v38 = 0;
  v47 = 0;
  v31[4] = v60;
  v46 = 0;
  v41 = 8;
  v31[5] = v61;
  v50 = v6;
  v31[6] = v62;
  v35 = 4096.0;
  if ( *(float *)(this + 1792) > (double)*(float *)(dword_106B31C8 + 12) )
  {
    v31[0] = 2;
    v32 = 0.043620002;
    v33 = 0.043620002;
    v34 = 0.043620002;
  }
  else
  {
    v31[0] = 1;
    v32 = flt_106F1CA8;
    v33 = flt_106F1CAC;
    v34 = flt_106F1CB0;
    v42 = 1000.0;
  }
  (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 432))(this, v31);
  v7 = (**(int (__thiscall ***)(int))(this + 1484))(this + 1484);
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v7 + 320))(v7) )
    {
      v8 = (void *)__RTDynamicCast(
                     v7,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                     (int)&CBasePlayer `RTTI Type Descriptor',
                     0);
      if ( v8 )
        sub_101E3110(v8, 0xAu, 0, 0x12u);
    }
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 880))(this);
  v9 = dword_106B31C8;
  if ( *(float *)(this + 1792) <= (double)*(float *)(dword_106B31C8 + 12) )
  {
    *(float *)(this + 1792) = *(float *)(dword_106B31C8 + 12) + 0.2;
    v9 = dword_106B31C8;
  }
  if ( *(float *)(this + 1796) <= (double)*(float *)(v9 + 12) )
  {
    v10 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 576))(this);
    sub_10261C70((_DWORD *)this, v10, 0.2, 250.0, 1.0, 250.0, 0, 0);
    *(float *)(this + 1796) = *(float *)(dword_106B31C8 + 12) + 0.5;
  }
  v11 = *(_DWORD *)(this + 1640);
  if ( v11 != -1 )
  {
    v12 = &off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 1];
    v13 = v11 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 2] == v13 )
    {
      if ( *v12 )
      {
        if ( *(_BYTE *)(this + 1688) )
        {
          v51 = v54;
          v52 = v55;
          v53 = v56;
          v49[0] = v60;
          v49[1] = v61;
          v49[2] = v62;
        }
        else
        {
          v14 = off_1061BE18[4 * (*(_DWORD *)(this + 1640) & 0xFFF) + 2] == v13 ? *v12 : 0;
          v15 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v14 + 504))(v14, v48);
          v51 = *(int *)v15;
          v52 = *(float *)(v15 + 4);
          v16 = *(float *)(v15 + 8);
          v17 = *(_DWORD *)(this + 1640);
          v53 = v16;
          if ( v17 == -1 || off_1061BE18[4 * (v17 & 0xFFF) + 2] != v17 >> 12 )
            sub_100F5A30(0, (int)v49, 0, 0);
          else
            sub_100F5A30((_DWORD *)off_1061BE18[4 * (v17 & 0xFFF) + 1], (int)v49, 0, 0);
        }
        v18 = sub_10404CF0((int)&v51, (int)v49, 2.5);
        v19 = v18;
        if ( v18 )
        {
          if ( *(int *)(v18 + 220) > 0 )
          {
            sub_10248110((int)v29, this, this, 1.0, 0x2000000, 0);
            v20 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 576))(v19);
            sub_10248070((float *)v29, v50, (float *)&v60, v20, 1.0);
            sub_100D9E70((int *)v19, this, v29);
            if ( (*(_DWORD *)(v19 + 252) & 0x1000) != 0 )
              sub_100DAFD0(v19);
            v21 = *(float *)(v19 + 476);
            v22 = *(float *)(v19 + 480);
            v23 = *(float *)&v62 * 0.0;
            v59 = *(float *)(v19 + 484);
            v57 = v21;
            v58 = v22;
            v63 = v23 - *(float *)&v61;
            v64 = *(float *)&v60 - v23;
            v65 = 0.0;
            if ( off_10689714() > 0.001 )
            {
              (*(void (__thiscall **)(int, float *, _DWORD, _DWORD))(*(_DWORD *)this + 528))(this, v48, 0, 0);
              if ( v48[2] * v65 + v48[1] * v64 + v48[0] * v63 > 0.0 )
              {
                v63 = v63 * -1.0;
                v64 = v64 * -1.0;
                v65 = v65 * -1.0;
              }
              v24 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                      dword_106B31E4,
                      15.0,
                      25.0);
              v25 = v63 * v24;
              v63 = v25;
              v26 = v64 * v24;
              v64 = v26;
              v27 = v26;
              v28 = v24 * v65;
              v65 = v28;
              v57 = v25 + v57;
              v58 = v27 + v58;
              v59 = v28 + v59;
              sub_100DD660(v19, &v57);
            }
          }
        }
      }
    }
  }
}
