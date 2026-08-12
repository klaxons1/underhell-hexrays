char __thiscall sub_100C8EA0(int this, int a2, int a3)
{
  int v4; // esi
  int v5; // eax
  float *v6; // ebx
  float *v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  float v15; // [esp+24h] [ebp-78h]
  int v16[13]; // [esp+34h] [ebp-68h] BYREF
  float v17; // [esp+68h] [ebp-34h]
  int v18[3]; // [esp+84h] [ebp-18h] BYREF
  int v19[3]; // [esp+90h] [ebp-Ch] BYREF

  if ( !(unsigned __int8)sub_102654D0(a2, a3) )
    return 0;
  if ( !(unsigned __int8)sub_10265430(a2, *(_DWORD *)(this + 4)) )
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
  v5 = sub_1001E870(*(_DWORD **)(this + 12));
  v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 576))(v5);
  v7 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 576))(v4);
  *(float *)v19 = *v7 - *v6;
  *(float *)&v19[1] = v7[1] - v6[1];
  *(float *)&v19[2] = v7[2] - v6[2];
  off_10689714();
  sub_1001E4E0(v16, *(_DWORD *)(this + 12));
  v8 = sub_1001E870(v16);
  v15 = *(float *)(this + 20);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 576))(v8);
  sub_10248690((int)v16, (int)v19, v9, v15);
  v10 = sub_1001E870(v16);
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 288))(v10);
  v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 288))(v4);
  if ( !v11 || !v12 )
  {
    *(_DWORD *)(this + 16) = v4;
    sub_101FB2A0(v4);
    if ( 0.0 != v17 )
      sub_100D9E70(v16);
    return 0;
  }
  if ( !*(_BYTE *)(this + 24) && (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 1080))(v11, v4) != 1 )
    return 0;
  if ( 0.0 != v17 )
    sub_100D9E70(v16);
  v18[2] = v16[6];
  v18[0] = v16[4];
  v18[1] = v16[5];
  v13 = sub_1001E870(v16);
  sub_1023D4B0(1, (int)v18, 200, 0.2, v13, 0, 0);
  *(_DWORD *)(this + 16) = v4;
  return 1;
}
