void __thiscall sub_103EBB80(int this, _DWORD *a2, int a3)
{
  int v3; // edx
  bool v5; // zf
  int v6; // eax
  volatile signed __int32 v7; // edi
  int v8; // eax
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // st5
  double v14; // st4
  double v15; // rt0
  long double v16; // st4
  double v17; // st7
  double v18; // rt2
  long double v19; // st5
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st7
  int v25; // edi
  _DWORD *v26; // eax
  int v27; // ebx
  int v28; // edi
  _DWORD *v29; // eax
  int v30; // ebx
  float v31; // [esp+8h] [ebp-F4h]
  float v32; // [esp+10h] [ebp-ECh]
  float v33; // [esp+10h] [ebp-ECh]
  _BYTE v34[44]; // [esp+1Ch] [ebp-E0h] BYREF
  float v35; // [esp+48h] [ebp-B4h]
  _BYTE v36[48]; // [esp+70h] [ebp-8Ch] BYREF
  _BYTE v37[12]; // [esp+A0h] [ebp-5Ch] BYREF
  int v38[3]; // [esp+ACh] [ebp-50h] BYREF
  _DWORD v39[3]; // [esp+B8h] [ebp-44h] BYREF
  float v40; // [esp+C4h] [ebp-38h] BYREF
  float v41; // [esp+C8h] [ebp-34h]
  float v42; // [esp+D0h] [ebp-2Ch] BYREF
  float v43; // [esp+D4h] [ebp-28h]
  float v44; // [esp+D8h] [ebp-24h]
  float v45; // [esp+DCh] [ebp-20h] BYREF
  float v46; // [esp+E0h] [ebp-1Ch]
  float v47; // [esp+E4h] [ebp-18h]
  int v48; // [esp+E8h] [ebp-14h] BYREF
  float v49; // [esp+ECh] [ebp-10h]
  float v50; // [esp+F0h] [ebp-Ch]
  float v51; // [esp+F4h] [ebp-8h]
  float v52; // [esp+F8h] [ebp-4h]
  int savedregs; // [esp+FCh] [ebp+0h] BYREF

  v3 = a2[1];
  v5 = *(_BYTE *)(this + 1724) == 0;
  v6 = a2[2];
  v39[0] = *a2;
  v39[1] = v3;
  v39[2] = v6;
  if ( v5 || *(_BYTE *)(this + 1690) )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 868))(this)
      || *(_BYTE *)(this + 1704)
      || !*(_BYTE *)(this + 1689) )
    {
      v25 = dword_10700AC8;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
        sub_100BD750((volatile signed __int32 *)this);
      v26 = *(_DWORD **)(this + 1100);
      if ( v26 && *v26 )
        v27 = *(_DWORD *)(this + 1100);
      else
        v27 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v25 + 104))(v25);
      sub_100C1460((_DWORD *)this, v27, "vehicle_weapon_yaw", 0.0);
      v28 = dword_10700AC8;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
      if ( !*(_DWORD *)(this + 1100) && sub_100D7240((void *)this) )
        sub_100BD750((volatile signed __int32 *)this);
      v29 = *(_DWORD **)(this + 1100);
      if ( v29 && *v29 )
        v30 = *(_DWORD *)(this + 1100);
      else
        v30 = 0;
      (*(void (__thiscall **)(int))(*(_DWORD *)v28 + 104))(v28);
      sub_100C1460((_DWORD *)this, v30, "vehicle_weapon_pitch", 0.0);
    }
    else
    {
      v7 = *(_DWORD *)this;
      v8 = sub_100BEF30(this, "muzzle");
      (*(void (__thiscall **)(int, int, _BYTE *))(v7 + 796))(this, v8, v36);
      sub_10421BA0(v39, v36, v37);
      sub_10422540(v37, &v40);
      v9 = v40;
      sub_10424C10(v40, 0.0);
      v40 = v9;
      v10 = v41;
      sub_10424C10(v41, 0.0);
      v41 = v10;
      v11 = v10 + *(float *)(this + 1768);
      v12 = *(float *)(this + 1772) + v40;
      v13 = 200.0;
      if ( v11 <= 200.0 )
      {
        v13 = -200.0;
        if ( v11 >= -200.0 )
          v13 = v11;
      }
      v52 = v13;
      v14 = 20.0;
      if ( v12 <= 20.0 )
      {
        v14 = -20.0;
        if ( v12 >= -20.0 )
          v14 = v12;
      }
      v51 = v14;
      v15 = v14;
      v16 = v13 - v11;
      v17 = v15;
      if ( fabs(v16) > 0.0001 || (v18 = v13, v19 = fabs(v17 - v12), v20 = v18, v19 > 0.0001) )
      {
        HIBYTE(a2) = 1;
        sub_103E1870((_BYTE *)(this + 1688), (_BYTE *)&a2 + 3);
        v20 = v52;
      }
      v31 = v20;
      sub_10424B10(v31, *(float *)(this + 1768), 8.0);
      *(float *)(this + 1768) = v20;
      v21 = v51;
      sub_10424B10(v51, *(float *)(this + 1772), 8.0);
      *(float *)(this + 1772) = v21;
      v32 = -*(float *)(this + 1768);
      sub_10078870((_DWORD *)this, "vehicle_weapon_yaw", v32);
      v22 = -*(float *)(this + 1772);
      v33 = v22;
      sub_10078870((_DWORD *)this, "vehicle_weapon_pitch", v33);
      sub_100BCCF0((_DWORD *)this);
      sub_100C14D0(this, "vehicle_weapon_pitch");
      v23 = -v22;
      *(float *)(this + 1772) = v23;
      sub_100C14D0(this, "vehicle_weapon_yaw");
      *(float *)(this + 1768) = -v23;
      sub_100BEFA0((void *)this, "Muzzle", (int)&v48, (int)v38);
      sub_10422220(v38, &v42);
      v45 = v42 * 56755.84 + *(float *)&v48;
      v46 = v43 * 56755.84 + v49;
      v47 = 56755.84 * v44 + v50;
      sub_1002A5F0((int)&savedregs, this, (float *)&v48, &v45, 1174421507, this, 0, (int)v34);
      v24 = v35;
      if ( v35 < 1.0 )
      {
        v45 = v42 * 56755.84 * v24 + *(float *)&v48;
        v46 = v43 * 56755.84 * v24 + v49;
        v47 = v24 * (56755.84 * v44) + v50;
        sub_103E0D40((float *)(this + 1676), &v45);
      }
    }
  }
}
