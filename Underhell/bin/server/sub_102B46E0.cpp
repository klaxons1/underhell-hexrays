void __fastcall sub_102B46E0(unsigned int a1, int a2, int a3)
{
  _BYTE *v4; // edi
  double v5; // st7
  int v6; // eax
  unsigned int v7; // eax
  int *v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // ecx
  float v13; // [esp+8h] [ebp-28h]
  float v14[3]; // [esp+18h] [ebp-18h] BYREF
  float v15[3]; // [esp+24h] [ebp-Ch] BYREF

  v4 = (_BYTE *)(a1 + 224);
  if ( *(_BYTE *)(a1 + 224) != 1 )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)a1 + 472))(a1, a1 + 224);
    *v4 = 1;
  }
  sub_100E0970(a1, a2, 5, 0);
  v5 = sub_10260720(240.0);
  v6 = *(_DWORD *)a1;
  *(float *)(a1 + 552) = v5;
  (*(void (__thiscall **)(unsigned int))(v6 + 408))(a1);
  v15[0] = 32.0;
  v15[1] = 32.0;
  v15[2] = 0.0;
  v14[0] = -32.0;
  v14[1] = -32.0;
  v14[2] = -64.0;
  sub_1025F360((_DWORD *)a1, (int)v14, (int)v15);
  sub_100EC3F0((_DWORD *)a1, (int)sub_102B23C0, 0.0, 0);
  *(_DWORD *)(a1 + 196) = sub_103BFC00;
  v13 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)a1, v13, 0);
  if ( *(_DWORD *)(a1 + 220) )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)a1 + 464))(a1, a1 + 220);
    *(_DWORD *)(a1 + 220) = 0;
  }
  if ( *(_BYTE *)(a1 + 225) )
  {
    (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)a1 + 480))(a1, a1 + 225);
    *(_BYTE *)(a1 + 225) = 0;
  }
  v7 = *(_DWORD *)(a1 + 3872);
  if ( v7 != -1 )
  {
    v8 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 3872) & 0xFFF) + 1];
    v9 = v7 >> 12;
    if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3872) & 0xFFF) + 2] == v9 )
    {
      if ( *v8 )
      {
        if ( off_1061BE18[4 * (*(_DWORD *)(a1 + 3872) & 0xFFF) + 2] == v9 )
          v10 = *v8;
        else
          v10 = 0;
        sub_1025FAC0(v10);
        *(_DWORD *)(a1 + 3872) = -1;
      }
    }
  }
  v11 = *(_DWORD *)(a3 + 44);
  if ( v11 == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 2] != v11 >> 12 )
    v12 = 0;
  else
    v12 = off_1061BE18[4 * (*(_DWORD *)(a3 + 44) & 0xFFF) + 1];
  sub_1010DD80((_DWORD *)(a1 + 2968), __SPAIR64__(a1, v12), 0.0);
}
