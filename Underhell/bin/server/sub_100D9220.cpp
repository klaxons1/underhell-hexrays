char __thiscall sub_100D9220(void *this, int a2)
{
  float *v3; // ecx
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st5
  double v10; // rt0
  int v11; // eax
  int v12; // eax
  int *v13; // ebx
  _DWORD *v14; // edi
  int v15; // ecx
  int v16; // edx
  double v17; // st6
  double v18; // st5
  float v19; // [esp+4h] [ebp-28h]
  float v20; // [esp+8h] [ebp-24h]
  float v21; // [esp+8h] [ebp-24h]
  int v22; // [esp+18h] [ebp-14h] BYREF
  _BYTE v23[12]; // [esp+1Ch] [ebp-10h] BYREF
  int v24; // [esp+28h] [ebp-4h]
  int v25; // [esp+34h] [ebp+8h]
  int v26; // [esp+34h] [ebp+8h]

  if ( !a2 || !*(_BYTE *)(a2 + 1) )
    return 0;
  *(_DWORD *)(a2 + 144) = *(_DWORD *)(dword_106B31C8 + 24);
  v3 = (float *)(*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 652))(this, v23);
  if ( *v3 != *(float *)(a2 + 132) || v3[1] != *(float *)(a2 + 136) || v3[2] != *(float *)(a2 + 140) )
  {
    *(_BYTE *)(a2 + 1) = 0;
    return 0;
  }
  v5 = *(_DWORD *)(a2 + 36);
  v6 = 1.0;
  v7 = 1.0;
  v8 = 0.0;
  v25 = *(_DWORD *)(a2 + 100) - v5;
  if ( v25 > 0 )
  {
    v24 = *(_DWORD *)(dword_106B31C8 + 24) - v5;
    v9 = (double)v24 / (double)v25;
    if ( v9 <= 1.0 )
    {
      if ( v9 < 0.0 )
        v9 = 0.0;
    }
    else
    {
      v9 = 1.0;
    }
    v10 = v9;
    v8 = 0.0;
    v7 = v10;
  }
  v11 = *(_DWORD *)(a2 + 4);
  if ( v11 && v11 < v5 )
  {
    if ( *(_DWORD *)(dword_106977F4 + 48) )
    {
      v20 = v7;
      sub_10423AF0(a2 + 20, a2 + 52, a2 + 116, v20, (int)&v22);
      sub_104252C0(&v22, a2 + 160);
      return 1;
    }
    else
    {
      v12 = *(_DWORD *)(a2 + 68);
      v13 = (int *)(a2 + 36);
      v14 = (_DWORD *)(a2 + 100);
      if ( v12 <= v5
        || ((v15 = *(_DWORD *)(dword_106B31C8 + 24), v15 <= v12)
          ? (v14 = (_DWORD *)(a2 + 68))
          : (v13 = (int *)(a2 + 68)),
            v16 = *v13,
            v26 = *v14 - *v13,
            v26 <= 0) )
      {
        v6 = v7;
      }
      else
      {
        v17 = v8;
        v24 = v15 - v16;
        v18 = (double)(v15 - v16) / (double)v26;
        if ( v18 <= 1.0 )
        {
          v6 = v18;
          if ( v17 > v18 )
            v6 = v17;
        }
      }
      v19 = v6;
      sub_10425710((int)(v13 + 4), (int)(v14 + 4), v19, (int)&v22);
      sub_104252C0(&v22, a2 + 160);
      return 1;
    }
  }
  else
  {
    v21 = v7;
    sub_10425710(a2 + 52, a2 + 116, v21, (int)&v22);
    sub_104252C0(&v22, a2 + 160);
    return 1;
  }
}
