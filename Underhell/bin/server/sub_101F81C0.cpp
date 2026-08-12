int __thiscall sub_101F81C0(_DWORD **this, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // edx
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  _DWORD v16[10]; // [esp+4h] [ebp-54h] BYREF
  char v17; // [esp+2Ch] [ebp-2Ch]
  int v18; // [esp+30h] [ebp-28h]
  int v19; // [esp+34h] [ebp-24h]
  int v20; // [esp+38h] [ebp-20h]
  __int16 v21; // [esp+3Ch] [ebp-1Ch]
  __int16 v22; // [esp+3Eh] [ebp-1Ah]
  char v23; // [esp+40h] [ebp-18h]
  _DWORD v24[5]; // [esp+44h] [ebp-14h] BYREF

  result = (*(int (__thiscall **)(_DWORD *))(*this[2] + 1612))(this[2]);
  if ( (_BYTE)result )
  {
    memset(v24, 0, sizeof(v24));
    v4 = *(_DWORD *)(a2 + 36);
    v5 = *(_DWORD *)(a2 + 4);
    *(float *)&v16[6] = *(float *)(a2 + 24);
    v6 = *(float *)(a2 + 28);
    v16[9] = v4;
    LOBYTE(v4) = *(_BYTE *)(a2 + 60);
    *(float *)&v16[7] = v6;
    v7 = *(float *)(a2 + 32);
    v16[1] = v5;
    LOBYTE(v5) = *(_BYTE *)(a2 + 40);
    *(float *)&v16[8] = v7;
    v8 = *(float *)(a2 + 12);
    v23 = v4;
    LOWORD(v4) = *(_WORD *)(a2 + 56);
    *(float *)&v16[3] = v8;
    v9 = *(float *)(a2 + 16);
    v17 = v5;
    LOWORD(v5) = *(_WORD *)(a2 + 58);
    *(float *)&v16[4] = v9;
    v10 = *(float *)(a2 + 20);
    v21 = v4;
    v11 = *(_DWORD *)(a2 + 52);
    *(float *)&v16[5] = v10;
    v22 = v5;
    v12 = *(_DWORD *)(a2 + 8);
    v20 = v11;
    v13 = *(_DWORD *)(a2 + 44);
    v16[2] = v12;
    v14 = *(_DWORD *)(a2 + 48);
    v18 = v13;
    v15 = (int)(this[2] + 1009);
    v16[0] = &CUserCmd::`vftable';
    v19 = v14;
    sub_101F7FB0(v15, (int)v16);
    v16[0] = &CUserCmd::`vftable';
    return sub_102375F0(v24);
  }
  return result;
}
