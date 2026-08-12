void __thiscall sub_1014B990(int this, int a2, int a3)
{
  int v3; // esi
  int v6; // [esp-4h] [ebp-110h]
  float v7[18]; // [esp+28h] [ebp-E4h] BYREF
  __int16 v8; // [esp+70h] [ebp-9Ch]
  int v9; // [esp+78h] [ebp-94h]
  int v10; // [esp+7Ch] [ebp-90h]
  float v11; // [esp+88h] [ebp-84h] BYREF
  float v12[15]; // [esp+8Ch] [ebp-80h] BYREF
  __int16 v13; // [esp+C8h] [ebp-44h]
  int v14; // [esp+D4h] [ebp-38h]
  int v15; // [esp+D8h] [ebp-34h]
  float v16; // [esp+DCh] [ebp-30h] BYREF
  float v17; // [esp+E0h] [ebp-2Ch]
  float v18; // [esp+E4h] [ebp-28h]
  float v19[3]; // [esp+E8h] [ebp-24h] BYREF
  int v20[3]; // [esp+F4h] [ebp-18h] BYREF
  int v21; // [esp+100h] [ebp-Ch] BYREF
  float v22; // [esp+104h] [ebp-8h]
  float v23; // [esp+108h] [ebp-4h]
  int savedregs; // [esp+10Ch] [ebp+0h] BYREF
  const char *v25; // [esp+114h] [ebp+8h]

  v3 = a3;
  if ( *(_BYTE *)(this + 1016) )
  {
LABEL_15:
    sub_10148D10(this, a2, v3);
    return;
  }
  a3 = 0;
  v25 = "glass";
  if ( *(_DWORD *)(this + 1020) )
    v25 = 0;
  sub_101C08A0(a2, v3, 1.0, 0, (int)&a3, (int)v25, (*(_DWORD *)(this + 248) & 2) != 0);
  if ( 1.0 <= 10.0 )
  {
    if ( 1.0 > 0.0 && (*(_BYTE *)(this + 248) & 1) != 0 )
    {
      (***(void (__thiscall ****)(_DWORD, int *))(v3 + 28))(*(_DWORD *)(v3 + 28), &v21);
      if ( !a2 )
      {
        *(float *)&v21 = *(float *)&v21 * -1.0;
        v22 = v22 * -1.0;
        v23 = -1.0 * v23;
      }
      (*(void (__thiscall **)(_DWORD, float *))(**(_DWORD **)(v3 + 28) + 4))(*(_DWORD *)(v3 + 28), &v16);
      v19[0] = v16 + *(float *)&v21;
      v19[1] = v17 + v22;
      v19[2] = v18 + v23;
      *(float *)v20 = v16 - *(float *)&v21;
      *(float *)&v20[1] = v17 - v22;
      *(float *)&v20[2] = v18 - v23;
      sub_1002A5F0((int)&savedregs, v3, (float *)v20, v19, 16395, 0, 0, (int)&v11);
      if ( v14 && v14 == this )
      {
        sub_1001F130(v7);
        v7[0] = v12[2];
        v7[1] = v12[3];
        v8 = v13;
        v7[2] = v12[4];
        v9 = 128;
        v10 = v15;
        v7[3] = v11;
        v7[4] = v12[0];
        v7[5] = v12[1];
        LODWORD(v7[13]) = sub_1001F3C0((_DWORD *)this);
        sub_1028E890("Impact", v7);
      }
    }
    goto LABEL_15;
  }
  (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 4 * a2) + 112))(2.0);
  (***(void (__thiscall ****)(_DWORD, int *))(v3 + 28))(*(_DWORD *)(v3 + 28), &v21);
  if ( !a2 )
  {
    *(float *)&v21 = *(float *)&v21 * -1.0;
    v22 = v22 * -1.0;
    v23 = -1.0 * v23;
  }
  (*(void (__thiscall **)(_DWORD, int *))(**(_DWORD **)(v3 + 28) + 4))(*(_DWORD *)(v3 + 28), v20);
  v6 = *(_DWORD *)(v3 + 4 * (a2 == 0) + 104);
  sub_102487B0(v6, v6, (int)&v21, (int)v20, 1.0, a3, 0, 0);
  sub_101BB4B0(this, v12, v3, a2);
  sub_10148D10(this, a2, v3);
}
