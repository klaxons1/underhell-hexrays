void __thiscall sub_10191070(float *this)
{
  int v2; // esi
  float *v3; // eax
  int v4; // eax
  double i; // st7
  int v6; // esi
  int v7; // eax
  float *v8; // eax
  float *v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  float *v13; // eax
  float *v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  float *v18; // esi
  int v19; // eax
  int v20; // eax
  float *v21; // [esp+0h] [ebp-48h]
  float *v22; // [esp+0h] [ebp-48h]
  float *v23; // [esp+0h] [ebp-48h]
  _BYTE v24[12]; // [esp+10h] [ebp-38h] BYREF
  _BYTE v25[12]; // [esp+1Ch] [ebp-2Ch] BYREF
  _BYTE v26[12]; // [esp+28h] [ebp-20h] BYREF
  float v27; // [esp+34h] [ebp-14h]
  float v28; // [esp+38h] [ebp-10h]
  float v29; // [esp+40h] [ebp-8h]
  int v30; // [esp+44h] [ebp-4h]

  if ( sub_10190E10(this) )
  {
    v2 = *((_DWORD *)this + 303);
    v3 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
    sub_100F3060(v2, v3);
    v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 40))(this);
    sub_101EE040(v4, v24, v25, v26);
    for ( i = *((float *)off_103DC81C + 4); i >= this[302]; i = v29 )
    {
      v29 = i - this[302];
      this[302] = this[301];
      v6 = *((_DWORD *)this + 303);
      v21 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
      v7 = sub_100F29B0(v6, (int)this, v6, "effects/ar2_altfire1b");
      v8 = sub_100F2B60(v6, v6, 60, v7, v21);
      v9 = v8;
      if ( !v8 )
        return;
      v8[6] = flt_10459240;
      *(_QWORD *)(v8 + 7) = qword_10459244;
      v8[10] = 0.25;
      v8[11] = 0.0;
      v10 = sub_100EB330(0, 360);
      v30 = v10;
      v9[12] = 3.0039215;
      *((_WORD *)v9 + 26) = 4096;
      *((_BYTE *)v9 + 54) = 0;
      v9[9] = (float)v10;
      v9[14] = 0.0;
      v11 = *((_DWORD *)this + 303);
      v22 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
      v12 = sub_100F29B0(v11, (int)this, v11, "effects/ar2_altfire1b");
      v13 = sub_100F2B60(v11, v11, 60, v12, v22);
      v14 = v13;
      if ( !v13 )
        return;
      v13[6] = flt_10459240;
      *(_QWORD *)(v13 + 7) = qword_10459244;
      v13[10] = 0.1;
      v13[11] = 0.0;
      v15 = sub_100EB330(0, 360);
      v30 = v15;
      v14[12] = -1.1801041e-38;
      *((_WORD *)v14 + 26) = 0;
      *((_BYTE *)v14 + 54) = 8;
      v14[9] = (float)v15;
      v14[14] = 0.0;
      (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 303) + 48))(*((_DWORD *)this + 303), 8.0);
      v16 = *((_DWORD *)this + 303);
      v23 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 36))(this);
      v17 = sub_100F29B0(v16, (int)this, v16, "effects/ar2_altfire1b");
      v18 = sub_100F2B60(v16, v16, 60, v17, v23);
      if ( !v18 )
        return;
      v30 = sub_10115FB0();
      v27 = (double)v30 * 0.000030518509 * 64.0 - 32.0;
      v30 = sub_10115FB0();
      v28 = (double)v30 * 0.000030518509 * 64.0 - 32.0;
      v19 = sub_10115FB0();
      v30 = v19;
      v18[6] = v27;
      v18[7] = v28;
      v18[8] = (double)v19 * 0.000030518509 * 64.0 - 32.0;
      v18[10] = 0.2;
      v18[11] = 0.0;
      v20 = sub_100EB330(0, 360);
      v30 = v20;
      v18[12] = NAN;
      *((_WORD *)v18 + 26) = 1024;
      v18[9] = (float)v20;
      *((_BYTE *)v18 + 54) = 0;
      v18[14] = 0.0;
    }
    this[302] = this[302] - i;
  }
}
