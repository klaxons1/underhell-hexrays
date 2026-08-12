int __stdcall sub_10097DA0(int *a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int v3; // esi
  int v4; // edx
  void (__thiscall *v5)(_DWORD *); // eax
  int v6; // eax
  void (__thiscall *v7)(_DWORD *, int *, _DWORD *); // edx
  char v8; // al
  char v9; // dl
  int v10; // edi
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  float *v15; // edi
  _DWORD v17[4]; // [esp+Ch] [ebp-98h] BYREF
  __int16 v18; // [esp+1Ch] [ebp-88h]
  __int16 v19; // [esp+1Eh] [ebp-86h]
  int v20; // [esp+20h] [ebp-84h]
  int v21; // [esp+24h] [ebp-80h]
  int v22; // [esp+28h] [ebp-7Ch]
  int v23; // [esp+2Ch] [ebp-78h]
  int v24; // [esp+30h] [ebp-74h]
  int v25; // [esp+34h] [ebp-70h]
  int v26; // [esp+38h] [ebp-6Ch]
  int v27; // [esp+3Ch] [ebp-68h]
  int v28; // [esp+40h] [ebp-64h]
  void *v29; // [esp+44h] [ebp-60h]
  int v30; // [esp+48h] [ebp-5Ch]
  int v31; // [esp+4Ch] [ebp-58h]
  __int16 v32; // [esp+50h] [ebp-54h]
  __int16 v33; // [esp+52h] [ebp-52h]
  int v34; // [esp+54h] [ebp-50h]
  int v35; // [esp+58h] [ebp-4Ch]
  int v36; // [esp+5Ch] [ebp-48h]
  int *v37; // [esp+60h] [ebp-44h]
  int v38; // [esp+64h] [ebp-40h]
  int v39; // [esp+68h] [ebp-3Ch]
  int v40; // [esp+6Ch] [ebp-38h]
  int v41; // [esp+70h] [ebp-34h]
  _DWORD v42[4]; // [esp+74h] [ebp-30h] BYREF
  __int16 v43; // [esp+84h] [ebp-20h]
  int v44; // [esp+88h] [ebp-1Ch]
  int v45; // [esp+8Ch] [ebp-18h]
  int v46; // [esp+90h] [ebp-14h] BYREF
  float v47; // [esp+94h] [ebp-10h]
  int v48; // [esp+98h] [ebp-Ch] BYREF
  float v49; // [esp+9Ch] [ebp-8h]
  int v50; // [esp+A0h] [ebp-4h]

  v19 = 2;
  v18 = 1;
  v2 = a2;
  v32 = 1;
  v17[0] = 2;
  v24 = 4;
  v30 = 4;
  v38 = 4;
  v42[1] = 2;
  v3 = *a1;
  v33 = 2;
  v4 = *a2;
  v42[0] = v17;
  v5 = *(void (__thiscall **)(_DWORD *))(v4 + 20);
  v17[1] = &unk_104A3AE8;
  v17[2] = 0;
  v17[3] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 10;
  v29 = &unk_104A3AE4;
  v31 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = &dword_1064A938;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42[2] = &unk_104A3AE0;
  v42[3] = 0;
  v43 = 0;
  v44 = 0;
  v5(a2);
  v6 = (*(int (__thiscall **)(_DWORD *))(*v2 + 56))(v2);
  v47 = -1.0;
  v50 = v6;
  while ( v50 )
  {
    v7 = *(void (__thiscall **)(_DWORD *, int *, _DWORD *))(*v2 + 8);
    --v50;
    v7(v2, &v46, v42);
    v48 = v46;
    v49 = v47;
    sub_10094200((_BYTE *)v3, (int)&v48, (_BYTE *)&a1 + 3, (_BYTE *)&a2 + 3);
    v8 = sub_10094590(v3);
    v9 = HIBYTE(a1);
    v10 = 12 * v8;
    v11 = v10 + *(_DWORD *)(v3 + 4);
    LOBYTE(v45) = v8;
    *(_BYTE *)(v11 + 2) = HIBYTE(a1);
    *(_WORD *)v11 = -1;
    *(_BYTE *)(v11 + 3) = 0;
    if ( v9 == -1 )
    {
      *(_BYTE *)(v3 + 16) = v8;
    }
    else
    {
      v12 = 3 * v9;
      v13 = *(_DWORD *)(v3 + 4);
      if ( HIBYTE(a2) )
        *(_BYTE *)(v13 + 4 * v12) = v8;
      else
        *(_BYTE *)(v13 + 4 * v12 + 1) = v8;
    }
    sub_100955F0(v3, v45);
    v14 = *(_DWORD *)(v3 + 4);
    ++*(_BYTE *)(v3 + 17);
    v15 = (float *)(v14 + v10 + 4);
    if ( v15 )
    {
      *(_DWORD *)v15 = v48;
      v15[1] = v49;
    }
  }
  return (*(int (__thiscall **)(_DWORD *))(*v2 + 32))(v2);
}
