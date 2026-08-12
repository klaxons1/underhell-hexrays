unsigned int __thiscall sub_101088B0(void *this, int a2, int a3, int a4, int a5)
{
  float *v6; // eax
  float *v7; // eax
  int *v8; // edx
  double v9; // st7
  unsigned int result; // eax
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  int v14; // eax
  double v15; // st7
  _BYTE v16[48]; // [esp+Ch] [ebp-60h] BYREF
  _BYTE v17[48]; // [esp+3Ch] [ebp-30h] BYREF
  int v18; // [esp+80h] [ebp+14h]

  *(_BYTE *)a5 ^= ((*(int (__thiscall **)(void *))(*(_DWORD *)this + 60))(this) ^ *(_BYTE *)a5) & 1;
  *(_DWORD *)(a5 + 4) = *(_DWORD *)(a2 + 164);
  sub_10038150(a2);
  *(float *)(a5 + 64) = *(float *)(a2 + 244);
  *(float *)(a5 + 68) = *(float *)(a2 + 248);
  *(float *)(a5 + 72) = *(float *)(a2 + 252);
  v6 = (float *)sub_10034470((char *)a2);
  *(float *)(a5 + 152) = *v6;
  *(float *)(a5 + 156) = v6[1];
  *(float *)(a5 + 160) = v6[2];
  *(float *)(a5 + 88) = *(float *)(a5 + 76);
  *(float *)(a5 + 92) = *(float *)(a5 + 80);
  *(float *)(a5 + 96) = *(float *)(a5 + 84);
  *(_DWORD *)(a5 + 40) = *(_DWORD *)(a2 + 3552);
  *(float *)(a5 + 60) = *(float *)(a2 + 4144);
  v7 = (float *)(a5 + 12);
  *(float *)(a5 + 76) = *(float *)(a3 + 12);
  *(float *)(a5 + 80) = *(float *)(a3 + 16);
  *(float *)(a5 + 84) = *(float *)(a3 + 20);
  *(float *)(a5 + 12) = *(float *)(a3 + 12);
  *(float *)(a5 + 16) = *(float *)(a3 + 16);
  *(float *)(a5 + 20) = *(float *)(a3 + 20);
  *(_DWORD *)(a5 + 8) = *(unsigned __int8 *)(a3 + 40);
  *(_DWORD *)(a5 + 36) = *(_DWORD *)(a3 + 36);
  if ( *(_DWORD *)(a2 + 324) != -1
    && (v8 = (int *)((char *)off_103DCD74 + 16 * (*(_DWORD *)(a2 + 324) & 0xFFF) + 4),
        *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 324) & 0xFFF) + 2) == *(_DWORD *)(a2 + 324) >> 12)
    && (v18 = *v8) != 0 )
  {
    sub_101EE440(a5 + 12);
    sub_10037F50(v18);
    sub_101EDC00(v18 + 660, v17, v16);
    sub_101ED7B0(v16, a5 + 24);
  }
  else
  {
    *(float *)(a5 + 24) = *v7;
    *(float *)(a5 + 28) = *(float *)(a5 + 16);
    *(float *)(a5 + 32) = *(float *)(a5 + 20);
  }
  if ( (*(_BYTE *)(a2 + 732) & 0x40) != 0 )
  {
    v9 = 0.0;
    *(float *)(a5 + 44) = 0.0;
    *(float *)(a5 + 48) = 0.0;
  }
  else
  {
    *(float *)(a5 + 44) = *(float *)(a3 + 24);
    *(float *)(a5 + 48) = *(float *)(a3 + 28);
    v9 = *(float *)(a3 + 32);
  }
  *(float *)(a5 + 52) = v9;
  result = *(_DWORD *)(a2 + 4128);
  if ( result != -1 )
  {
    result >>= 12;
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 4128) & 0xFFF) + 2) == result )
    {
      v11 = *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 4128) & 0xFFF) + 1);
      if ( v11 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 332))(v11);
        if ( result )
          result = (*(int (__thiscall **)(unsigned int, int, int, int, int))(*(_DWORD *)result + 16))(
                     result,
                     a2,
                     a3,
                     a4,
                     a5);
      }
    }
  }
  v12 = *(_DWORD *)(a2 + 4056);
  if ( v12 != -1
    && (result = (unsigned int)off_103DCD74 + 16 * (*(_DWORD *)(a2 + 4056) & 0xFFF) + 4,
        v13 = v12 >> 12,
        *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 4056) & 0xFFF) + 2) == v13)
    && *(_DWORD *)result )
  {
    if ( *((_DWORD *)off_103DCD74 + 4 * (*(_DWORD *)(a2 + 4056) & 0xFFF) + 2) == v13 )
      v14 = *(_DWORD *)result;
    else
      v14 = 0;
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 36))(v14);
    *(float *)(a5 + 128) = *(float *)result;
    *(float *)(a5 + 132) = *(float *)(result + 4);
    v15 = *(float *)(result + 8);
  }
  else
  {
    *(float *)(a5 + 128) = *(float *)(a2 + 4060);
    *(float *)(a5 + 132) = *(float *)(a2 + 4064);
    v15 = *(float *)(a2 + 4068);
  }
  *(float *)(a5 + 136) = v15;
  *(float *)(a5 + 140) = *(float *)(a2 + 4072);
  *(float *)(a5 + 144) = *(float *)(a2 + 4076);
  *(float *)(a5 + 148) = *(float *)(a2 + 4080);
  *(_BYTE *)(a5 + 164) = *(_BYTE *)(a2 + 5284);
  return result;
}
