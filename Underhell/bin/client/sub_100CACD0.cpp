int __usercall sub_100CACD0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  int result; // eax
  double v5; // st7
  int v6; // ebx
  int (__thiscall *v7)(int, int *, int, int); // edx
  int v8; // edi
  _DWORD *v9; // eax
  double v10; // st7
  int v11; // edi
  double v12; // st7
  int v13; // ebx
  double v14; // st7
  bool v15; // zf
  int v16; // ebx
  int v17; // eax
  int (__thiscall *v18)(int, _BYTE *); // edx
  int v19; // eax
  int (__thiscall *v20)(int, _BYTE *); // edx
  char v21; // al
  void (__thiscall *v22)(int, _DWORD); // edx
  double v23; // st7
  int v24; // ebx
  double v25; // st7
  int v26; // ebx
  int v27; // edi
  _DWORD *v28; // eax
  _BYTE v31[4]; // [esp+4h] [ebp-28h] BYREF
  _BYTE v32[4]; // [esp+8h] [ebp-24h] BYREF
  _BYTE v33[4]; // [esp+Ch] [ebp-20h] BYREF
  int v34; // [esp+10h] [ebp-1Ch] BYREF
  int v35; // [esp+14h] [ebp-18h]
  int v36; // [esp+18h] [ebp-14h]
  int v37; // [esp+1Ch] [ebp-10h]
  int v38; // [esp+20h] [ebp-Ch]
  int v39; // [esp+24h] [ebp-8h]
  float v40; // [esp+28h] [ebp-4h]

  result = dword_10430E6C;
  if ( *(_DWORD *)(dword_10430E6C + 48) )
  {
    v5 = *(float *)(a1 + 316) * 0.0099999998;
    v35 = (int)(*(float *)(a1 + 240) / (*(float *)(a1 + 256) + *(float *)(a1 + 264)));
    v6 = dword_1047CA6C;
    v7 = *(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)a1 + 228);
    v8 = *(_DWORD *)dword_1047CA6C;
    v36 = (int)(v5 * (double)v35 + 0.5);
    v9 = (_DWORD *)v7(a1, &v34, a3, a2);
    (*(void (__thiscall **)(int, _DWORD))(v8 + 40))(v6, *v9);
    v10 = *(float *)(a1 + 232);
    v11 = (int)*(float *)(a1 + 224);
    v38 = v11;
    v39 = (int)v10;
    if ( v36 > 0 )
    {
      v37 = v36;
      v40 = (float)v39;
      do
      {
        v12 = (double)v38;
        v13 = *(_DWORD *)dword_1047CA6C;
        *(float *)&v38 = v12;
        (*(void (__thiscall **)(int, int, int, int, int))(v13 + 48))(
          dword_1047CA6C,
          v11,
          v39,
          (int)(v12 + *(float *)(a1 + 256)),
          (int)(v40 + *(float *)(a1 + 248)));
        v14 = *(float *)(a1 + 256) + *(float *)(a1 + 264) + *(float *)&v38;
        v15 = v37-- == 1;
        v11 = (int)v14;
        v38 = (int)v14;
      }
      while ( !v15 );
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(a1 + 324));
    (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
      dword_1047CA6C,
      (int)*(float *)(a1 + 332),
      (int)*(float *)(a1 + 340),
      (int)*(float *)(a1 + 356),
      (int)*(float *)(a1 + 348));
    v16 = dword_1047CA6C;
    v17 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 228))(a1, v33);
    v18 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 228);
    v34 = *(unsigned __int8 *)(v17 + 2);
    v19 = v18(a1, v32);
    v20 = *(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 228);
    v37 = *(unsigned __int8 *)(v19 + 1);
    LOBYTE(v40) = *(_BYTE *)v20(a1, v31);
    v21 = *(_BYTE *)(a1 + 216);
    BYTE2(v40) = v34;
    v22 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 40);
    BYTE1(v40) = v37;
    HIBYTE(v40) = v21;
    v22(v16, LODWORD(v40));
    if ( v36 < v35 )
    {
      v35 -= v36;
      v40 = (float)v39;
      do
      {
        v23 = (double)v38;
        v24 = *(_DWORD *)dword_1047CA6C;
        *(float *)&v38 = v23;
        (*(void (__thiscall **)(int, int, int, int, int))(v24 + 48))(
          dword_1047CA6C,
          v11,
          v39,
          (int)(v23 + *(float *)(a1 + 256)),
          (int)(v40 + *(float *)(a1 + 248)));
        v25 = *(float *)(a1 + 256) + *(float *)(a1 + 264) + *(float *)&v38;
        v15 = v35-- == 1;
        v11 = (int)v25;
        v38 = (int)v25;
      }
      while ( !v15 );
    }
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, *(_DWORD *)(a1 + 272));
    v26 = dword_1047CA6C;
    v27 = *(_DWORD *)dword_1047CA6C;
    v28 = (_DWORD *)(*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 228))(a1, v31);
    (*(void (__thiscall **)(int, _DWORD))(v27 + 72))(v26, *v28);
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_1047CA6C + 80))(
      dword_1047CA6C,
      (int)*(float *)(a1 + 280),
      (int)*(float *)(a1 + 288));
    return (*(int (__thiscall **)(int, const wchar_t *, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
             dword_1047CA6C,
             L"HULL",
             4,
             0);
  }
  return result;
}
