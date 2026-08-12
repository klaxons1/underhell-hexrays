int __stdcall sub_10096300(int *a1, int a2)
{
  int v2; // esi
  int v3; // edi
  void (__thiscall *v4)(int); // edx
  void (__thiscall *v5)(int, int *, int); // edx
  char v6; // al
  _DWORD v8[4]; // [esp+8h] [ebp-80h] BYREF
  __int16 v9; // [esp+18h] [ebp-70h]
  __int16 v10; // [esp+1Ah] [ebp-6Eh]
  int v11; // [esp+1Ch] [ebp-6Ch]
  int v12; // [esp+20h] [ebp-68h]
  int v13; // [esp+24h] [ebp-64h]
  int v14; // [esp+28h] [ebp-60h]
  int v15; // [esp+2Ch] [ebp-5Ch]
  int v16; // [esp+30h] [ebp-58h]
  int v17; // [esp+34h] [ebp-54h]
  int v18; // [esp+38h] [ebp-50h]
  int v19; // [esp+3Ch] [ebp-4Ch]
  void *v20; // [esp+40h] [ebp-48h]
  int v21; // [esp+44h] [ebp-44h]
  int v22; // [esp+48h] [ebp-40h]
  __int16 v23; // [esp+4Ch] [ebp-3Ch]
  __int16 v24; // [esp+4Eh] [ebp-3Ah]
  int v25; // [esp+50h] [ebp-38h]
  int v26; // [esp+54h] [ebp-34h]
  int v27; // [esp+58h] [ebp-30h]
  int *v28; // [esp+5Ch] [ebp-2Ch]
  int v29; // [esp+60h] [ebp-28h]
  int v30; // [esp+64h] [ebp-24h]
  int v31; // [esp+68h] [ebp-20h]
  int v32; // [esp+6Ch] [ebp-1Ch]
  _DWORD v33[4]; // [esp+70h] [ebp-18h] BYREF
  __int16 v34; // [esp+80h] [ebp-8h]
  int v35; // [esp+84h] [ebp-4h]
  char i; // [esp+90h] [ebp+8h]

  v9 = 1;
  v10 = 2;
  v23 = 1;
  v8[0] = 2;
  v15 = 4;
  v21 = 4;
  v24 = 2;
  v2 = a2;
  v29 = 4;
  v33[1] = 2;
  v8[2] = 0;
  v8[3] = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33[3] = 0;
  v34 = 0;
  v35 = 0;
  v3 = *a1;
  v4 = *(void (__thiscall **)(int))(*(_DWORD *)a2 + 28);
  v33[0] = v8;
  v8[1] = &unk_104A3AE8;
  v19 = 10;
  v20 = &unk_104A3AE4;
  v28 = &dword_1064A938;
  v33[2] = &unk_104A3AE0;
  v4(a2);
  v5 = *(void (__thiscall **)(int, int *, int))(*(_DWORD *)v2 + 52);
  a2 = *(char *)(v3 + 17);
  v5(v2, &a2, 1);
  v6 = sub_10094160(v3);
  for ( i = v6; v6 != -1; i = v6 )
  {
    (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)v2 + 20))(v2, *(_DWORD *)(v3 + 4) + 12 * v6 + 4, v33);
    v6 = sub_10095400((_DWORD *)v3, i);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 36))(v2);
}
