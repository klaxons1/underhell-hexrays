int __thiscall sub_101F8040(_DWORD **this, int a2)
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
  int v15; // eax
  _DWORD *v16; // edi
  int *v17; // ecx
  int *v18; // eax
  int v19; // edi
  int *v20; // eax
  double v21; // st7
  int *v22; // eax
  _DWORD v23[10]; // [esp+4h] [ebp-5Ch] BYREF
  char v24; // [esp+2Ch] [ebp-34h]
  int v25; // [esp+30h] [ebp-30h]
  int v26; // [esp+34h] [ebp-2Ch]
  int v27; // [esp+38h] [ebp-28h]
  __int16 v28; // [esp+3Ch] [ebp-24h]
  __int16 v29; // [esp+3Eh] [ebp-22h]
  char v30; // [esp+40h] [ebp-20h]
  _DWORD v31[5]; // [esp+44h] [ebp-1Ch] BYREF
  float v32; // [esp+58h] [ebp-8h]
  float v33; // [esp+5Ch] [ebp-4h]
  int v34; // [esp+68h] [ebp+8h]

  result = (*(int (__thiscall **)(_DWORD *))(*this[2] + 1612))(this[2]);
  if ( (_BYTE)result )
  {
    v4 = *(_DWORD *)(a2 + 36);
    v5 = *(_DWORD *)(a2 + 4);
    *(float *)&v23[6] = *(float *)(a2 + 24);
    v6 = *(float *)(a2 + 28);
    v23[9] = v4;
    LOBYTE(v4) = *(_BYTE *)(a2 + 60);
    *(float *)&v23[7] = v6;
    v7 = *(float *)(a2 + 32);
    v23[1] = v5;
    LOBYTE(v5) = *(_BYTE *)(a2 + 40);
    *(float *)&v23[8] = v7;
    v8 = *(float *)(a2 + 12);
    v30 = v4;
    LOWORD(v4) = *(_WORD *)(a2 + 56);
    *(float *)&v23[3] = v8;
    v9 = *(float *)(a2 + 16);
    v24 = v5;
    LOWORD(v5) = *(_WORD *)(a2 + 58);
    *(float *)&v23[4] = v9;
    v10 = *(float *)(a2 + 20);
    v28 = v4;
    v11 = *(_DWORD *)(a2 + 52);
    *(float *)&v23[5] = v10;
    v29 = v5;
    v12 = *(_DWORD *)(a2 + 8);
    v27 = v11;
    v13 = *(_DWORD *)(a2 + 44);
    v23[2] = v12;
    v14 = *(_DWORD *)(a2 + 48);
    v25 = v13;
    v26 = v14;
    v23[0] = &CUserCmd::`vftable';
    memset(v31, 0, sizeof(v31));
    v33 = *(float *)(dword_106B31C8 + 16);
    v32 = *(float *)(dword_106B31C8 + 12);
    v15 = (int)(*(float *)(dword_106B31C8 + 12) / *(float *)(dword_106B31C8 + 28) + 0.5);
    v16 = this[2];
    v34 = v15;
    if ( v16[1054] != v15 )
    {
      if ( *((_BYTE *)v16 + 84) )
      {
        *((_BYTE *)v16 + 88) |= 1u;
      }
      else
      {
        v17 = (int *)v16[6];
        if ( v17 )
        {
          sub_100194B0(v17, 4216);
          v15 = v34;
        }
      }
      v16[1054] = v15;
    }
    v18 = sub_10188570();
    (*(void (__thiscall **)(int *, _DWORD *))(*v18 + 52))(v18, this[2]);
    v19 = *this[2];
    v20 = sub_10188570();
    (*(void (__thiscall **)(_DWORD *, _DWORD *, int *))(v19 + 1524))(this[2], v23, v20);
    sub_101F7FB0((int)(this[2] + 1009), (int)v23);
    v21 = v33;
    this[2][816] = 0;
    *(float *)(dword_106B31C8 + 16) = v21;
    *(float *)(dword_106B31C8 + 12) = v32;
    v22 = sub_10188570();
    (*(void (__thiscall **)(int *, _DWORD))(*v22 + 52))(v22, 0);
    v23[0] = &CUserCmd::`vftable';
    return sub_102375F0(v31);
  }
  return result;
}
