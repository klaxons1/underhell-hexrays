void __thiscall sub_10213530(int this, int a2, BOOL a3)
{
  int v3; // ebx
  int v4; // edi
  double v6; // st7
  int v7; // ecx
  int v8; // eax
  int (__thiscall *v9)(int, int *); // edx
  const char **v10; // eax
  double v11; // st7
  int v12; // eax
  int v13; // ecx
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // rt0
  double v18; // st5
  double v19; // st7
  double v20; // st7
  double v21; // st4
  double v22; // st6
  double v23; // st7
  int v24; // eax
  int v25; // edi
  int v26; // ebx
  int v27; // eax
  int v28[3]; // [esp+84h] [ebp-20h] BYREF
  int v29; // [esp+90h] [ebp-14h] BYREF
  float v30; // [esp+94h] [ebp-10h]
  float v31; // [esp+98h] [ebp-Ch]
  float v32; // [esp+9Ch] [ebp-8h]
  int v33; // [esp+A0h] [ebp-4h] BYREF

  v3 = a2;
  v4 = a3;
  sub_100DA500((_BYTE *)this, a2, a3);
  v6 = *(float *)(this + 1680);
  v7 = *(_DWORD *)(v4 + 4 * (v3 == 0));
  a3 = v3 == 0;
  a2 = v7;
  if ( 0.0 != v6 )
  {
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 68))(v7);
    if ( (!v8
       || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v8 + 320))(v8)
       || (*(_DWORD *)(this + 248) & 0x400) == 0)
      && ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 116))(a2) * *(float *)(v4 + 24) >= *(float *)(this + 1680) )
    {
      sub_102069D0(v3, v4);
      sub_1020FD90((unsigned int *)this);
      *(float *)(this + 1680) = 0.0;
    }
  }
  if ( *(_BYTE *)(this + 1685) )
    sub_10211CD0(this, v3, v4);
  if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 632))(this, 2.0) )
    sub_10211F60((_DWORD *)this, v4, v3, v4);
  if ( (*(_DWORD *)(this + 248) & 2) == 0 )
  {
    v9 = *(int (__thiscall **)(int, int *))(*(_DWORD *)(this + 1120) + 44);
    v33 = 0;
    v10 = (const char **)v9(this + 1120, &a2);
    v11 = *(float *)(this + 1200);
    sub_101C08A0(v3, v4, *(float *)(this + 1200), 1, &v33, *v10, 0);
    v32 = v11;
    if ( v11 > 0.0 )
    {
      if ( *(_BYTE *)(this + 1685) && !*(_BYTE *)(this + 1684) )
        v32 = v11 * 10.0;
      a2 = *(_DWORD *)(v4 + 4 * a3 + 104);
      if ( !a2 )
      {
        v12 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 0);
        if ( v12 && (v13 = *(_DWORD *)(v12 + 12)) != 0 )
          a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 20))(v13);
        else
          a2 = 0;
      }
      (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v4 + 28) + 4))(*(_DWORD *)(v4 + 28), v28);
      v14 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v4 + 4 * v3) + 116))(*(_DWORD *)(v4 + 4 * v3));
      v15 = *(float *)(v4 + 12 * v3 + 56) * v14;
      *(float *)&v29 = v15;
      v16 = *(float *)(v4 + 12 * v3 + 60) * v14;
      v30 = v16;
      v17 = v16;
      v18 = v14 * *(float *)(v4 + 12 * v3 + 64);
      v19 = v17;
      v31 = v18;
      if ( flt_106F1CA8 == v15 && flt_106F1CAC == v19 && flt_106F1CB0 == v18 )
      {
        v20 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v4 + 4 * a3) + 116))(*(_DWORD *)(v4 + 4 * a3));
        v21 = *(float *)(v4 + 12 * a3 + 64);
        v22 = *(float *)(v4 + 12 * a3 + 60) * v20;
        *(float *)&v29 = v20 * *(float *)(v4 + 12 * a3 + 56);
        v30 = v22;
        v31 = v20 * v21;
      }
      v23 = v32;
      v24 = sub_102487B0(a2, a2, (int)&v29, (int)v28, v32, v33, 0, 0);
      sub_101BB4B0(v23, this, v24, v4, v3);
    }
  }
  if ( *(_BYTE *)(this + 1684) || *(_BYTE *)(this + 1685) )
  {
    v25 = *(_DWORD *)(v4 + 4 * a3 + 104);
    if ( v25 && sub_100D7680(v25) )
    {
      v26 = dword_106C1B60;
      v27 = sub_100D7680(v25);
      if ( v26 > 0 )
        (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v27 + 896))(v27, v26, this, 0);
      *(_BYTE *)(this + 1684) = 0;
    }
    if ( *(_BYTE *)(this + 1685) )
    {
      *(_BYTE *)(this + 1685) = 0;
      sub_100EC390((_DWORD *)this, (int)"PROP_CLEARFLAGS");
      sub_100EC3F0((_DWORD *)this, (int)sub_10207C60, *(float *)(dword_106B31C8 + 12), (int)"PROP_CLEARFLAGS");
    }
  }
}
