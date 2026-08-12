void __fastcall sub_10334A40(int a1)
{
  int v1; // edx
  float *v2; // edi
  int v3; // ebx
  _DWORD *v4; // esi
  float *v5; // edi
  float *v6; // eax
  double v7; // st4
  double v8; // st7
  double v9; // st4
  double v10; // st5
  double v11; // st7
  float v12; // [esp+Ch] [ebp-20h]
  _DWORD *v13; // [esp+14h] [ebp-18h]
  float v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  float *v16; // [esp+20h] [ebp-Ch]
  int v17; // [esp+24h] [ebp-8h]
  char v18; // [esp+2Bh] [ebp-1h]

  v1 = dword_106B31C8;
  v15 = a1;
  v18 = 0;
  if ( *(_DWORD *)(dword_106B31C8 + 20) != 1 )
    return;
  v2 = (float *)(a1 + 800);
  v17 = 0;
  v16 = (float *)(a1 + 800);
  while ( 1 )
  {
    if ( 0.0 == *v2 )
      goto LABEL_16;
    if ( *v2 + 4.0 < *(float *)(v1 + 12) )
    {
      *v2 = 0.0;
      goto LABEL_16;
    }
    if ( *(float *)(v1 + 12) > (double)*(float *)(a1 + 812) )
      break;
    v18 = 1;
LABEL_16:
    ++v2;
    ++v17;
    v16 = v2;
    if ( v17 >= 3 )
      goto LABEL_19;
    v1 = dword_106B31C8;
    a1 = v15;
  }
  v13 = 0;
  v14 = 589824.0;
  v3 = sub_10261B20();
  v4 = sub_1012BC90(&dword_1069E3E0, 0, "npc_citizen");
  if ( !v4 )
    goto LABEL_16;
  do
  {
    v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*v4 + 576))(v4);
    v6 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 576))(v3);
    v7 = *v6 - *v5;
    v8 = v7 * v7;
    v9 = v6[1] - v5[1];
    v10 = v6[2] - v5[2];
    v11 = v10 * v10 + v9 * v9 + v8;
    if ( v14 > v11 )
    {
      v14 = v11;
      v13 = v4;
    }
    v4 = sub_1012BC90(&dword_1069E3E0, (int)v4, "npc_citizen");
  }
  while ( v4 );
  if ( !v13
    || !(*(unsigned __int8 (__thiscall **)(_DWORD *, char *, _DWORD, _DWORD))(*v13 + 1664))(
          v13,
          off_1066E974[v17],
          0,
          0) )
  {
    v2 = v16;
    goto LABEL_16;
  }
  *(float *)(v15 + 4 * v17 + 800) = 0.0;
  *(float *)(v15 + 812) = *(float *)(dword_106B31C8 + 12) + 15.0;
LABEL_19:
  if ( v18 )
  {
    v12 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0((int *)v15, v12, 0);
  }
}
