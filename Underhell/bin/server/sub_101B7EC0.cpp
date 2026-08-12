int __thiscall sub_101B7EC0(int this)
{
  float *v2; // edi
  int v3; // eax
  int v4; // ebx
  float v5; // edi
  int v6; // edi
  int i; // ebx
  int v8; // eax
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // ecx
  char v13; // cl
  int result; // eax
  float v15[21]; // [esp+Ch] [ebp-60h] BYREF
  int v16; // [esp+60h] [ebp-Ch]
  int v17; // [esp+64h] [ebp-8h]
  char v18; // [esp+6Bh] [ebp-1h]

  v18 = *(_BYTE *)(this + 356);
  *(_BYTE *)(this + 356) = 1;
  v16 = 0;
  if ( *(int *)(this + 240) > 0 )
  {
    v17 = 0;
    do
    {
      v2 = (float *)(v17 + *(_DWORD *)(this + 228));
      if ( *((_DWORD *)v2 + 2) )
      {
        v4 = *((_DWORD *)v2 + 1);
        v5 = *v2;
        sub_101C5B20(LODWORD(v5), v4);
        sub_101C5B20(v4, LODWORD(v5));
      }
      else
      {
        memset(v15, 0, sizeof(v15));
        v15[3] = v2[3];
        v3 = *((_DWORD *)v2 + 1);
        v15[4] = v2[4];
        v15[5] = v2[5];
        v15[9] = v2[7] * v2[4] + v2[6] * v2[3] + v2[8] * v2[5];
        v15[6] = v2[6];
        v15[7] = v2[7];
        v15[8] = v2[8];
        sub_101C5F60(v3, v15);
      }
      v17 += 36;
      ++v16;
    }
    while ( v16 < *(_DWORD *)(this + 240) );
  }
  v6 = 0;
  *(_DWORD *)(this + 240) = 0;
  for ( i = 0; i < *(_DWORD *)(this + 200); v6 += 20 )
  {
    v8 = *(_DWORD *)(this + 188);
    v9 = *(_DWORD *)(v8 + v6);
    v10 = (_DWORD *)(v6 + v8);
    *(_DWORD *)(this + 208) = v9;
    *(_DWORD *)(this + 212) = v10[1];
    *(_DWORD *)(this + 216) = v10[2];
    *(_DWORD *)(this + 220) = v10[3];
    v11 = v10[4];
    *(_DWORD *)(this + 224) = v11;
    v12 = *(_DWORD *)(this + 208);
    if ( (_BYTE)v11 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 376))(v12, *(_DWORD *)(this + 216));
    else
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 384))(v12, *(_DWORD *)(this + 216));
    ++i;
  }
  v13 = v18;
  result = 0;
  *(_DWORD *)(this + 200) = 0;
  *(_DWORD *)(this + 208) = 0;
  *(_DWORD *)(this + 212) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_DWORD *)(this + 220) = 0;
  *(_DWORD *)(this + 224) = 0;
  *(_BYTE *)(this + 356) = v13;
  return result;
}
