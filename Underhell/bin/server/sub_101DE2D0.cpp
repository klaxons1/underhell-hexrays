void __thiscall sub_101DE2D0(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // edi
  float *v7; // eax
  float *v8; // eax
  double v9; // st7
  void (__thiscall *v10)(int, float *, _DWORD); // edx
  float *v11; // [esp-10h] [ebp-F8h]
  _DWORD v12[20]; // [esp+10h] [ebp-D8h] BYREF
  char v13[44]; // [esp+60h] [ebp-88h] BYREF
  float v14; // [esp+8Ch] [ebp-5Ch]
  int v15; // [esp+ACh] [ebp-3Ch]
  int v16[3]; // [esp+B4h] [ebp-34h] BYREF
  float v17[3]; // [esp+C0h] [ebp-28h] BYREF
  int v18; // [esp+CCh] [ebp-1Ch]
  int i; // [esp+D0h] [ebp-18h]
  int v20; // [esp+D4h] [ebp-14h] BYREF
  float v21; // [esp+DCh] [ebp-Ch] BYREF
  float v22; // [esp+E0h] [ebp-8h]
  float v23; // [esp+E4h] [ebp-4h]
  int savedregs; // [esp+E8h] [ebp+0h] BYREF

  if ( (*(_DWORD *)(this + 248) & 4) != 0
    && *(_BYTE *)(this + 1212)
    && *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 1224) )
  {
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v21 = 0.0;
    v22 = 0.0;
    v23 = -96.0;
    sub_10421B40(&v21, this + 500, v16);
    if ( (*(_DWORD *)(this + 252) & 0x800) != 0 )
      sub_100DAE60(this);
    v21 = 0.0;
    v22 = 0.0;
    v23 = -64.0;
    sub_10421B40(&v21, this + 500, v17);
    sub_1025F990(v12, 20, 0);
    v3 = sub_1025FA20((int)v16, 80.0, (int)&v20);
    v4 = 0;
    v18 = v3;
    for ( i = 0; v4 < v18; i = v4 )
    {
      v5 = v12[v4];
      if ( v5 )
      {
        if ( v5 != a2 )
        {
          v6 = *(_DWORD *)(v5 + 424);
          if ( v6 )
          {
            if ( *(_BYTE *)(v5 + 306) == 6
              && ((double (__thiscall *)(_DWORD))*(_DWORD *)(*(_DWORD *)v6 + 116))(*(_DWORD *)(v5 + 424)) < 5000.0 )
            {
              v11 = (float *)sub_10019640((_DWORD *)v5);
              v7 = (float *)sub_10019640((_DWORD *)this);
              sub_1002A5F0((int)&savedregs, v5, v7, v11, 1174421507, this, 0, (int)v13);
              if ( 1.0 == v14 || v15 == v5 )
              {
                v8 = (float *)sub_10019640((_DWORD *)v5);
                v21 = v17[0] - *v8;
                v22 = v17[1] - v8[1];
                v23 = v17[2] - v8[2];
                off_10689714();
                v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v6 + 116))(v6) * 5.0;
                v10 = *(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v6 + 208);
                v21 = v21 * v9;
                v22 = v22 * v9;
                v23 = v9 * v23;
                v10(v6, &v21, 0);
              }
            }
          }
        }
      }
      v4 = i + 1;
    }
    *(float *)(this + 1224) = *(float *)(dword_106B31C8 + 12) + 2.0;
  }
}
