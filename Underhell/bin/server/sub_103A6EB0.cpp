void __thiscall sub_103A6EB0(int this, int *a2)
{
  int v3; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ecx
  float *v8; // eax
  int v9; // eax
  double v10; // st7
  float *v11; // eax
  _BYTE v12[44]; // [esp+2Ch] [ebp-80h] BYREF
  float v13; // [esp+58h] [ebp-54h]
  char v14; // [esp+63h] [ebp-49h]
  _BYTE v15[12]; // [esp+80h] [ebp-2Ch] BYREF
  float v16[3]; // [esp+8Ch] [ebp-20h] BYREF
  float v17; // [esp+98h] [ebp-14h]
  float v18; // [esp+9Ch] [ebp-10h]
  float v19; // [esp+A0h] [ebp-Ch]
  int v20; // [esp+A4h] [ebp-8h]
  int v21; // [esp+A8h] [ebp-4h] BYREF
  int savedregs; // [esp+ACh] [ebp+0h] BYREF
  float v23; // [esp+B4h] [ebp+8h]

  v21 = sub_1002A680(&dword_10690DF8);
  v3 = sub_1016BFB0(&dword_10690DF8);
  v5 = *(_DWORD *)(this + 248) >> 17;
  v20 = v3;
  if ( (v5 & 1) != 0 )
  {
    v6 = 0;
    if ( v3 > 0 )
    {
      do
      {
        v7 = *(_DWORD *)(v21 + 4 * v6);
        if ( *(char **)(v7 + 92) == "npc_strider" || sub_100D6240((_DWORD *)v7, "npc_strider") )
        {
          if ( (a2[63] & 0x800) != 0 )
            sub_100DAE60((int)a2);
          (*(void (__thiscall **)(_DWORD, int *, int *, int))(**(_DWORD **)(v21 + 4 * v6) + 1876))(
            *(_DWORD *)(v21 + 4 * v6),
            a2,
            a2 + 145,
            this);
        }
        ++v6;
      }
      while ( v6 < v20 );
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(int *))(*a2 + 320))(a2) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v8 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(*a2 + 504))(a2, v15);
    v17 = *(float *)(this + 580) - *v8;
    v18 = *(float *)(this + 584) - v8[1];
    v19 = *(float *)(this + 588) - v8[2];
    off_10689714();
    v9 = (*(int (__thiscall **)(int *))(*a2 + 508))(a2);
    sub_10422220(v9, v16);
    v10 = v17 * v16[0] + v16[1] * v18 + v19 * v16[2];
    if ( v10 > 0.5 )
    {
      if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
        sub_100DAE60(this);
      v11 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(*a2 + 504))(a2, v15);
      sub_1002A5F0((int)&savedregs, (int)a2, (float *)(this + 580), v11, 16513, this, 0, (int)v12);
      if ( !v14 && 1.0 == v13 )
      {
        BYTE2(v21) = -1;
        LOWORD(v21) = -1;
        v23 = v10;
        v20 = (int)(v23 * 240.0);
        HIBYTE(v21) = v20;
        if ( dword_10700A4C )
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_10700A4C + 200))(dword_10700A4C) )
          {
            v20 = (int)((double)HIBYTE(v21) * 0.89999998);
            HIBYTE(v21) = v20;
          }
        }
        sub_102600B0(a2, &v21, 3.0, 0.5, 1);
      }
    }
  }
}
