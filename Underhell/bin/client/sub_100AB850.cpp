int __thiscall sub_100AB850(int *this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  float *v5; // eax
  int v6; // edx
  unsigned __int8 (__stdcall *v7)(int *); // edx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  float *v11; // eax
  int (__thiscall *v12)(int *, int *, float *, int, _BYTE *); // edx
  double v13; // st7
  double v14; // st6
  double v15; // st5
  int v16; // eax
  int v17; // eax
  int (__thiscall *v18)(int *, int *, float *, int, _BYTE *); // edx
  float *v19; // esi
  _BYTE v20[84]; // [esp+8h] [ebp-80h] BYREF
  float v21; // [esp+5Ch] [ebp-2Ch] BYREF
  float v22; // [esp+60h] [ebp-28h]
  float v23; // [esp+64h] [ebp-24h]
  float v24; // [esp+68h] [ebp-20h]
  float v25; // [esp+6Ch] [ebp-1Ch]
  float v26; // [esp+70h] [ebp-18h]
  float v27; // [esp+74h] [ebp-14h] BYREF
  float v28; // [esp+78h] [ebp-10h]
  float v29; // [esp+7Ch] [ebp-Ch]
  int v30; // [esp+80h] [ebp-8h] BYREF
  int v31; // [esp+84h] [ebp-4h] BYREF

  v31 = -1;
  sub_100A7AC0();
  v2 = *(_DWORD *)(*(int (__thiscall **)(int *, int *, int, int, _BYTE *))(*this + 184))(
                    this,
                    &v30,
                    this[2] + 152,
                    8,
                    v20);
  v31 = v2;
  if ( v2 == -1 )
  {
    *(_DWORD *)(this[1] + 3428) = 0;
    return 0;
  }
  if ( *(_DWORD *)(dword_1043917C + 48) )
  {
    v4 = (**(int (__thiscall ***)(int, int))dword_10434620)(dword_10434620, v2);
    (*(void (**)(int, _DWORD, const char *, ...))(*(_DWORD *)dword_1041315C + 116))(
      dword_1041315C,
      0,
      "%s stuck on object %i/%s",
      "client",
      v31 & 0xFFF,
      v4);
  }
  v5 = (float *)this[2];
  v6 = *(_DWORD *)dword_10434620;
  v24 = v5[38];
  v7 = *(unsigned __int8 (__stdcall **)(int *))(v6 + 44);
  v25 = v5[39];
  v26 = v5[40];
  if ( v7(&v31) )
  {
    v8 = 0;
    *(_DWORD *)(this[1] + 3428) = 0;
    while ( 1 )
    {
      v9 = this[1];
      v10 = *(_DWORD *)(v9 + 3428);
      *(_DWORD *)(v9 + 3428) = v10 + 1;
      v11 = &flt_1042E5C8[3 * (v10 % 54)];
      v12 = *(int (__thiscall **)(int *, int *, float *, int, _BYTE *))(*this + 184);
      v13 = *v11;
      v21 = *v11;
      v14 = v11[1];
      v22 = v11[1];
      v15 = v11[2];
      v23 = v11[2];
      v27 = v13 + v24;
      v28 = v14 + v25;
      v29 = v15 + v26;
      if ( *(_DWORD *)v12(this, &v30, &v27, 8, v20) == -1 )
        break;
      if ( ++v8 >= 54 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    *(float *)&v30 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_1041315C + 56))(dword_1041315C);
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 8) + 36))(this[1] + 8);
    if ( *(float *)&v30 - 0.05 <= *(float *)&this[2 * v16 + 228] )
      return 1;
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)(this[1] + 8) + 36))(this[1] + 8);
    this[2 * v17 + 228] = v30;
    (*(void (__thiscall **)(int, _BYTE *, int))(*(_DWORD *)dword_10434620 + 8))(dword_10434620, v20, this[2] + 64);
    sub_100A7D10(this[1], &v21);
    v18 = *(int (__thiscall **)(int *, int *, float *, int, _BYTE *))(*this + 184);
    v27 = v21 + v24;
    v28 = v22 + v25;
    v29 = v23 + v26;
    if ( *(_DWORD *)v18(this, &v30, &v27, 8, v20) != -1 )
      return 1;
  }
  *(_DWORD *)(this[1] + 3428) = 0;
  v19 = (float *)this[2];
  v19[38] = v27;
  result = 0;
  v19[39] = v28;
  v19[40] = v29;
  return result;
}
