void __thiscall sub_10044F00(float *this, float *a2, int a3, int a4)
{
  int v5; // esi
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  double v9; // st7
  int v10; // eax
  int v11; // eax
  float v12; // ecx
  float v13; // edx
  double v14; // st7
  int v15; // eax
  float v16; // edx
  float v17; // eax
  double v18; // st7
  int (__thiscall *v19)(int, float *); // edx
  int v20; // eax
  _BYTE v21[12]; // [esp+28h] [ebp-94h] BYREF
  float v22; // [esp+34h] [ebp-88h]
  float v23; // [esp+38h] [ebp-84h]
  float v24; // [esp+3Ch] [ebp-80h]
  float v25; // [esp+54h] [ebp-68h]
  float v26; // [esp+7Ch] [ebp-40h]
  float v27; // [esp+80h] [ebp-3Ch] BYREF
  float v28; // [esp+84h] [ebp-38h]
  float v29; // [esp+88h] [ebp-34h]
  float v30; // [esp+8Ch] [ebp-30h] BYREF
  float v31; // [esp+90h] [ebp-2Ch]
  float v32; // [esp+94h] [ebp-28h]
  float v33; // [esp+98h] [ebp-24h] BYREF
  float v34; // [esp+9Ch] [ebp-20h]
  float v35; // [esp+A0h] [ebp-1Ch]
  float v36; // [esp+A4h] [ebp-18h] BYREF
  float v37; // [esp+A8h] [ebp-14h]
  float v38; // [esp+ACh] [ebp-10h]
  float v39; // [esp+B0h] [ebp-Ch] BYREF
  float v40; // [esp+B4h] [ebp-8h]
  float v41; // [esp+B8h] [ebp-4h]
  int savedregs; // [esp+BCh] [ebp+0h] BYREF
  float v43; // [esp+CCh] [ebp+10h]

  v5 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 848))(this);
  if ( v5 )
  {
    v6 = *((float *)off_103DC81C + 3) - this[1027];
    v26 = v6;
    v7 = v6 / *(float *)(dword_10407524 + 44);
    if ( v7 <= 1.0 )
    {
      if ( v7 < 0.0 )
        v7 = 0.0;
    }
    else
    {
      v7 = 1.0;
    }
    v43 = 3.0 * (v7 * v7) - v7 * (v7 * v7 + v7 * v7);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)v5 + 172))(v5, &v33);
    v8 = (float *)(*(int (__thiscall **)(float *, float *, int))(*(_DWORD *)this + 1040))(this, &v27, v5);
    v33 = *v8 + v33;
    v34 = v8[1] + v34;
    v9 = v8[2] + v35;
    v39 = v33;
    v40 = v34;
    v35 = v9;
    v10 = *(_DWORD *)v5;
    v41 = v35;
    if ( (*(unsigned __int8 (__thiscall **)(int))(v10 + 500))(v5) )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
      v12 = *(float *)(v11 + 24);
      v13 = *(float *)(v11 + 28);
      v29 = *(float *)(v11 + 32);
      v27 = v12;
      v28 = v13;
      v14 = v41 - v29 * 0.5;
    }
    else
    {
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
      v14 = *(float *)(v15 + 104) + v41;
    }
    v41 = v14;
    v16 = a2[1];
    v17 = a2[2];
    v27 = *a2;
    v28 = v16;
    v30 = v39 - v27;
    v29 = v17;
    v36 = v39;
    v31 = v40 - v16;
    v37 = v40;
    v38 = v41;
    v32 = 0.0;
    off_103EDFEC();
    v18 = this[1028];
    v19 = *(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 532);
    v36 = v39 - v30 * v18;
    v37 = v40 - v18 * v31;
    v38 = *(float *)(v19(v5, &v27) + 8) + this[1171];
    sub_10034140(0);
    sub_10012C30((int)&savedregs, v5, &v39, &v36, flt_103D9A3C, flt_103D9A48, 33570827, v5, 0, (int)v21);
    sub_10034180();
    if ( v25 < 1.0 )
    {
      v36 = v22;
      v37 = v23;
      v39 = v33;
      v40 = v34;
      v41 = v35;
      v38 = v24 + fabs(v35 - v24) * 0.85;
      sub_10034140(0);
      sub_10012C30((int)&savedregs, v5, &v39, &v36, flt_103D9A3C, flt_103D9A48, 33570827, v5, 0, (int)v21);
      sub_10034180();
      v36 = v22;
      v37 = v23;
      v38 = v24;
    }
    v30 = v39 - v36;
    v31 = v40 - v37;
    v32 = v41 - v38;
    off_103EDFEC();
    sub_101EE190(&v30, a3);
    *a2 = (v36 - this[1024]) * v43 + this[1024];
    a2[1] = (v37 - this[1025]) * v43 + this[1025];
    a2[2] = v43 * (v38 - this[1026]) + this[1026];
    if ( *(float *)(dword_10407524 + 44) <= (double)v26 && !*((_BYTE *)this + 4681) )
    {
      v20 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)dword_104131A8 + 24))(
              dword_104131A8,
              "freezecam_started",
              0);
      if ( v20 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_104131A8 + 32))(dword_104131A8, v20);
      *((_BYTE *)this + 4681) = 1;
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_10439968 + 124))(*(float *)(dword_104074DC + 44));
    }
  }
  else
  {
    (*(void (__thiscall **)(float *, float *, int, int))(*(_DWORD *)this + 1052))(this, a2, a3, a4);
  }
}
