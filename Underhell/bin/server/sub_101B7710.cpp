void __cdecl sub_101B7710(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  _DWORD *i; // edx
  int v7; // edi
  int v8; // esi
  int v9; // eax
  int v10; // edx
  double v11; // st7
  double v12; // st4
  double v13; // rt0
  float v14; // [esp+0h] [ebp-38h]
  _BYTE v15[12]; // [esp+10h] [ebp-28h] BYREF
  float v16[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  float v17; // [esp+28h] [ebp-10h] BYREF
  float v18; // [esp+2Ch] [ebp-Ch]
  float v19; // [esp+30h] [ebp-8h]
  int v20; // [esp+34h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 260);
  if ( v3 )
  {
    v4 = dword_10637A60;
    if ( dword_10637A60 )
    {
      v5 = 0;
      if ( dword_10637A60 > 0 )
      {
        for ( i = (_DWORD *)(dword_10637A54 + 28); *i != v3; i += 8 )
        {
          if ( ++v5 >= dword_10637A60 )
            return;
        }
        if ( v5 >= 0 )
        {
          v7 = 32 * v5;
          v8 = 32 * v5 + dword_10637A54;
          v17 = *(float *)v8;
          v18 = *(float *)(v8 + 4);
          v19 = *(float *)(v8 + 8);
          v9 = *(_DWORD *)(v8 + 24);
          v20 = v7;
          if ( v9 )
          {
            if ( v9 != 1 )
            {
LABEL_20:
              if ( v4 > 0 )
              {
                qmemcpy((void *)(dword_10637A54 + v7), (const void *)(32 * v4 + dword_10637A54 - 32), 0x20u);
                --dword_10637A60;
              }
              v14 = *(float *)(a3 + 1544) * *(float *)(a3 + 1544)
                  + *(float *)(a3 + 1540) * *(float *)(a3 + 1540)
                  + *(float *)(a3 + 1548) * *(float *)(a3 + 1548);
              if ( off_10689708(v14) > 0.03125 )
                *(_DWORD *)(a3 + 1552) = a3 + 1540;
              return;
            }
            (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)dword_106BAFF0 + 96))(
              dword_106BAFF0,
              *(_DWORD *)(*(_DWORD *)(a2 + 4) + 4 * *(_DWORD *)a3),
              v15);
            if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
              sub_100DAE60(a1);
            sub_10421B40(v15, a1 + 500, v16);
            v10 = *(_DWORD *)(a1 + 252) >> 11;
            v11 = *(float *)(v8 + 12) * v16[0]
                + *(float *)(v8 + 16) * v16[1]
                + *(float *)(v8 + 20) * v16[2]
                - (*(float *)(v8 + 4) * *(float *)(v8 + 16)
                 + *(float *)v8 * *(float *)(v8 + 12)
                 + *(float *)(v8 + 8) * *(float *)(v8 + 20));
            v12 = *(float *)(v8 + 20);
            v13 = *(float *)(v8 + 16) * v11;
            v17 = *(float *)(v8 + 12) * v11 + v17;
            v18 = v13 + v18;
            v19 = v11 * v12 + v19;
            if ( (v10 & 1) != 0 )
              sub_100DAE60(a1);
            sub_10421BA0(&v17, a1 + 500, a3 + 1540);
            v7 = v20;
          }
          else
          {
            if ( (*(_DWORD *)(a1 + 252) & 0x800) != 0 )
              sub_100DAE60(a1);
            sub_10421BA0(&v17, a1 + 500, a3 + 1540);
          }
          v4 = dword_10637A60;
          goto LABEL_20;
        }
      }
    }
  }
}
