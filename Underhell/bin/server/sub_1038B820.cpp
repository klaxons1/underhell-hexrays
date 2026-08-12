char __thiscall sub_1038B820(int this, int a2, int a3)
{
  int v4; // esi
  int (__thiscall ***v5)(_DWORD, _DWORD); // eax
  int v6; // eax
  int v7; // eax
  float *v8; // edi
  float *v9; // eax
  int v10; // eax
  float *v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  float v17; // [esp+18h] [ebp-6Ch]
  int v18; // [esp+28h] [ebp-5Ch] BYREF
  float v19; // [esp+2Ch] [ebp-58h]
  float v20; // [esp+30h] [ebp-54h]
  float v21; // [esp+34h] [ebp-50h]
  float v22; // [esp+5Ch] [ebp-28h]
  int v23[3]; // [esp+78h] [ebp-Ch] BYREF

  if ( !sub_102654D0(a2, a3) )
    return 0;
  if ( !sub_10265430(this, a2, *(_DWORD *)(this + 4)) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B31E0 + 12))(dword_106B31E0, a2) )
    return 0;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 20))(a2);
  if ( !v4
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v4 + 68))(v4, *(_DWORD *)(this + 8), a3)
    || !(*(unsigned __int8 (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_106B3CDC + 112))(
          dword_106B3CDC,
          *(_DWORD *)(this + 8),
          *(_DWORD *)(v4 + 420))
    || !*(_BYTE *)(v4 + 225) )
  {
    return 0;
  }
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 340))(v4) )
  {
    v5 = (int (__thiscall ***)(_DWORD, _DWORD))(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 340))(v4);
    v6 = (**v5)(v5, 0);
    if ( v6 )
      v4 = v6;
  }
  v7 = sub_1001E870(*(_DWORD **)(this + 12));
  v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 576))(v7);
  v9 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
  *(float *)v23 = *v9 - *v8;
  *(float *)&v23[1] = v9[1] - v8[1];
  *(float *)&v23[2] = v9[2] - v8[2];
  off_10689714();
  sub_1001E4E0(&v18, *(_DWORD *)(this + 12));
  v10 = sub_1001E870(&v18);
  v17 = *(float *)(this + 20);
  v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 576))(v10);
  sub_10248690((float *)&v18, (float *)v23, v11, v17);
  if ( (*(_BYTE *)(v4 + 256) & 1) == 0 )
  {
    v19 = v19 * 0.001;
    v20 = v20 * 0.001;
    v21 = 0.001 * v21;
  }
  v12 = sub_1001E870(&v18);
  v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 288))(v12);
  v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
  if ( !v13 || !v14 )
  {
    sub_101FB2A0(v4);
    if ( 0.0 != v22 )
      sub_100D9E70((int *)v4, v4, &v18);
    return 0;
  }
  if ( !*(_BYTE *)(this + 24)
    && (*(int (__thiscall **)(int, int))(*(_DWORD *)v13 + 1080))(v13, v4) != 1
    && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
  {
    return 0;
  }
  if ( 0.0 != v22 )
  {
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4)
      || (v15 = sub_101679A0((int)"gordon_precriminal"), !sub_10167A00(v15)) )
    {
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) )
      {
        if ( *(_BYTE *)(v4 + 2329) )
        {
          v22 = v22 * 0.25;
          v19 = v19 * 0.25;
          v20 = v20 * 0.25;
          v21 = 0.25 * v21;
        }
      }
      sub_100D9E70((int *)v4, v4, &v18);
    }
  }
  *(_DWORD *)(this + 16) = v4;
  return 1;
}
