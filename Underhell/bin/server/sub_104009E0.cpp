int __thiscall sub_104009E0(int this, _DWORD *a2, float *a3, int a4)
{
  float v5; // edx
  float v6; // eax
  int v7; // eax
  int v9; // eax
  void *v10; // edi
  int result; // eax
  int v12; // edi
  double v13; // st7
  int (__thiscall *v14)(_DWORD *); // eax
  double v15; // st7
  int v16; // edi
  double v17; // st7
  int v18; // ecx
  double v19; // st7
  int v20; // ecx
  double v21; // st7
  int *v22; // ecx
  int *v23; // ecx
  float *v24; // [esp+20h] [ebp-109Ch]
  _DWORD v25[1024]; // [esp+30h] [ebp-108Ch] BYREF
  _DWORD v26[10]; // [esp+1030h] [ebp-8Ch] BYREF
  int v27; // [esp+1058h] [ebp-64h]
  int v28; // [esp+105Ch] [ebp-60h]
  float v29; // [esp+1064h] [ebp-58h]
  int v30; // [esp+1070h] [ebp-4Ch]
  float v31[3]; // [esp+1080h] [ebp-3Ch] BYREF
  float v32[3]; // [esp+108Ch] [ebp-30h] BYREF
  float v33[3]; // [esp+1098h] [ebp-24h] BYREF
  float v34; // [esp+10A4h] [ebp-18h]
  float j; // [esp+10A8h] [ebp-14h]
  float v36; // [esp+10ACh] [ebp-10h] BYREF
  float v37; // [esp+10B0h] [ebp-Ch]
  float v38; // [esp+10B4h] [ebp-8h]
  void *v39; // [esp+10B8h] [ebp-4h]
  int v40; // [esp+10C4h] [ebp+8h]
  float i; // [esp+10C8h] [ebp+Ch]
  float v42; // [esp+10C8h] [ebp+Ch]
  float v43; // [esp+10CCh] [ebp+10h]

  sub_10247EC0(v26);
  v5 = a3[1];
  v6 = a3[2];
  v36 = *a3;
  v37 = v5;
  v38 = v6;
  v7 = sub_100D1940((_DWORD *)this);
  if ( v7 )
    v28 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
  else
    v28 = -1;
  if ( this )
    v27 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 8))(this);
  else
    v27 = -1;
  v29 = 0.0;
  v30 = 0x800000;
  sub_100E8760(a2, (int)v26, (int)&v36, a4);
  sub_10248230();
  v9 = sub_100D1940((_DWORD *)this);
  v10 = (void *)v9;
  if ( v9 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 320))(v9) )
  {
    v39 = v10;
  }
  else
  {
    v39 = 0;
    v10 = 0;
  }
  if ( (unsigned __int8)sub_101FB190((int)a2, (int)v10, 1) )
  {
    v40 = (*(int (__thiscall **)(_DWORD *, _DWORD *, int))(*a2 + 624))(a2, v25, 1024);
    if ( !v40 )
    {
      sub_103FEB90((_DWORD *)this, (int)a2, v10, 1);
      return sub_103FA570((_DWORD *)this);
    }
    if ( v38 < 0.0 )
      v38 = v38 * -0.64999998;
    sub_103FEB90((_DWORD *)this, (int)a2, v10, 1);
    if ( ((*(int (__thiscall **)(_DWORD))(*(_DWORD *)v25[0] + 76))(v25[0]) & 2) != 0
      && (*(int (__thiscall **)(_DWORD *))(*a2 + 340))(a2) )
    {
      v36 = 0.0;
      v37 = 0.0;
      v38 = 0.0;
    }
    if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 || sub_101FB260((int)a2, 2) )
    {
      sub_103FA670((int)a2, a3, (float *)(a4 + 12), 2);
    }
    else
    {
      v12 = 0;
      for ( i = 0.0; v12 < v40; i = v13 + i )
      {
        v13 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v25[v12] + 116))(v25[v12]);
        ++v12;
      }
      v14 = *(int (__thiscall **)(_DWORD *))(*a2 + 340);
      j = 250.0;
      if ( v14(a2) )
        v15 = 625.0;
      else
        v15 = j;
      if ( i < v15 )
        v15 = i;
      v16 = 0;
      for ( j = v15; v16 < v40; ++v16 )
      {
        v17 = ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v25[v16] + 116))(v25[v16]) / i;
        v18 = v25[v16];
        if ( v18 == a2[106] )
        {
          v19 = v17 + 0.5;
          v34 = v19;
          if ( v19 >= 1.0 )
          {
            v19 = 1.0;
            v34 = 1.0;
          }
        }
        else
        {
          v19 = v17 * 0.5;
          v34 = v19;
        }
        v33[0] = v36 * 15000.0 * v19;
        v33[1] = v37 * 15000.0 * v19;
        v33[2] = v19 * (15000.0 * v38);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v18 + 236))(v18, v33);
        v20 = v25[v16];
        v31[0] = v36 * j * 600.0 * v34;
        v31[1] = v37 * j * 600.0 * v34;
        v31[2] = v34 * (j * v38 * 600.0);
        (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)v20 + 240))(v20, v31, a4 + 12);
      }
      v10 = v39;
    }
  }
  v42 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          1.0,
          2.0);
  v21 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
          dword_106B31E4,
          -1.0,
          1.0);
  v32[0] = v42;
  v32[1] = v21;
  v32[2] = 0.0;
  sub_100F7A60((float *)v10, v32);
  sub_103FF610((_DWORD *)this, *(float *)&a2);
  *(_DWORD *)(this + 9828) = 4;
  v24 = (float *)(a4 + 12);
  if ( *(_BYTE *)(dword_106B3CDC + 12) == 1 )
    sub_103FF0B0((_DWORD *)this, (int)a2, a4 + 12, v24);
  else
    sub_103FEDE0((_DWORD *)this, v24);
  sub_103FA5D0((_DWORD *)this);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 944))(this, 182);
  *(_DWORD *)(this + 1396) = 1;
  *(float *)(this + 1420) = *(float *)(dword_106B31C8 + 12) + 0.5;
  *(float *)(this + 1400) = *(float *)(dword_106B31C8 + 12) + 0.25;
  v43 = *(float *)(dword_106B31C8 + 12) + 0.5;
  if ( *(_DWORD *)(this + 1132) != LODWORD(v43) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v22 = *(int **)(this + 24);
      if ( v22 )
        sub_100194B0(v22, 1132);
    }
    *(float *)(this + 1132) = v43;
  }
  result = *(_DWORD *)(this + 1136);
  if ( result != *(_DWORD *)(this + 1132) )
  {
    result = this;
    if ( *(_BYTE *)(this + 84) )
    {
      *(_BYTE *)(this + 88) |= 1u;
    }
    else
    {
      v23 = *(int **)(this + 24);
      if ( v23 )
        result = sub_100194B0(v23, 1136);
    }
    *(float *)(this + 1136) = *(float *)(this + 1132);
  }
  return result;
}
