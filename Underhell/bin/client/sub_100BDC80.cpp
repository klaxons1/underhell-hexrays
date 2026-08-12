int __usercall sub_100BDC80@<eax>(int a1@<ecx>, int a2@<edi>)
{
  int result; // eax
  int v4; // eax
  double v5; // st7
  int v6; // edi
  int v7; // eax
  double v8; // st7
  double v9; // st7
  int v10; // edi
  double v11; // st7
  int v12; // ebx
  double v13; // st7
  bool v14; // zf
  char v15; // dl
  char v16; // al
  char v17; // dl
  void (__thiscall *v18)(int, _DWORD); // eax
  double v19; // st7
  int v20; // ebx
  double v21; // st7
  void (__thiscall *v22)(int, _DWORD); // edx
  void (__thiscall *v23)(int, int); // edx
  int v24; // ebx
  int v25; // edi
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v30; // [esp-4h] [ebp-3Ch]
  wchar_t Buffer[10]; // [esp+8h] [ebp-30h] BYREF
  int v32; // [esp+1Ch] [ebp-1Ch]
  int v33; // [esp+20h] [ebp-18h]
  int v34; // [esp+24h] [ebp-14h]
  int v35; // [esp+28h] [ebp-10h]
  int v36; // [esp+2Ch] [ebp-Ch]
  int v37; // [esp+30h] [ebp-8h]
  float v38; // [esp+34h] [ebp-4h]

  if ( *(_BYTE *)(a1 + 207) || (result = sub_10236700(a1), result > 0) )
  {
    v4 = sub_100422D0();
    v5 = *(float *)(a1 + 284) + *(float *)(a1 + 292);
    v6 = v4;
    v32 = v4;
    *(_DWORD *)(a1 + 212) = v4;
    v7 = (int)(*(float *)(a1 + 276) / v5);
    v8 = *(float *)(a1 + 220) * 0.0099999998;
    v33 = v7;
    result = (int)(v8 * (double)v7 + 0.5);
    v34 = result;
    if ( v6 )
    {
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_1047CA6C + 40))(
        dword_1047CA6C,
        *(_DWORD *)(a1 + 237),
        a2);
      v9 = *(float *)(a1 + 260);
      v37 = (int)*(float *)(a1 + 252);
      v10 = (int)v9;
      v36 = (int)v9;
      if ( v34 > 0 )
      {
        v35 = v34;
        v38 = (float)v37;
        do
        {
          v11 = (double)v36;
          v12 = *(_DWORD *)dword_1047CA6C;
          *(float *)&v36 = v11;
          (*(void (__thiscall **)(int, int, int, int, int))(v12 + 48))(
            dword_1047CA6C,
            v37,
            v10,
            (int)(v38 + *(float *)(a1 + 268)),
            (int)(v11 + *(float *)(a1 + 284)));
          v13 = *(float *)&v36 - (*(float *)(a1 + 284) + *(float *)(a1 + 292));
          v14 = v35-- == 1;
          v10 = (int)v13;
          v36 = (int)v13;
        }
        while ( !v14 );
      }
      v15 = *(_BYTE *)(a1 + 238);
      LOBYTE(v38) = *(_BYTE *)(a1 + 237);
      v16 = *(_BYTE *)(a1 + 239);
      BYTE1(v38) = v15;
      v17 = *(_BYTE *)(a1 + 232);
      BYTE2(v38) = v16;
      v18 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40);
      HIBYTE(v38) = v17;
      v18(dword_1047CA6C, LODWORD(v38));
      if ( v34 < v33 )
      {
        v33 -= v34;
        v38 = (float)v37;
        do
        {
          v19 = (double)v36;
          v20 = *(_DWORD *)dword_1047CA6C;
          *(float *)&v36 = v19;
          (*(void (__thiscall **)(int, int, int, int, int))(v20 + 48))(
            dword_1047CA6C,
            v37,
            v10,
            (int)(v38 + *(float *)(a1 + 268)),
            (int)(v19 + *(float *)(a1 + 284)));
          v21 = *(float *)&v36 - (*(float *)(a1 + 284) + *(float *)(a1 + 292));
          v14 = v33-- == 1;
          v10 = (int)v21;
          v36 = (int)v21;
        }
        while ( !v14 );
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 124))(a1, 1);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 260))(a1, 0);
      v22 = *(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 216);
      *(float *)&v36 = 0.0;
      v22(a1, 0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 128))(dword_1047CA6C, *(_DWORD *)(a1 + 216));
      v23 = *(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 40);
      *(float *)&v36 = NAN;
      v23(dword_1047CA6C, -229630);
      (*(void (__thiscall **)(int, int, int, int, int))(*(_DWORD *)dword_1047CA6C + 136))(
        dword_1047CA6C,
        (int)*(float *)(a1 + 300),
        (int)*(float *)(a1 + 308),
        (int)*(float *)(a1 + 324),
        (int)*(float *)(a1 + 316));
      v24 = dword_1047CA7C;
      v25 = *(_DWORD *)dword_1047CA7C;
      v26 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 80))(a1);
      v27 = (*(int (__thiscall **)(int, int))(v25 + 32))(v24, v26);
      v28 = (*(int (__thiscall **)(int, const char *, _DWORD))(*(_DWORD *)v27 + 12))(v27, "HudNumbers", 0);
      *(_DWORD *)(a1 + 244) = v28;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 68))(dword_1047CA6C, v28);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, *(_DWORD *)(a1 + 237));
      (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, 0, 0);
      v30 = *(_DWORD *)(v32 + 5292);
      *(_DWORD *)(a1 + 208) = v30;
      sub_100BC810(Buffer, (wchar_t *)L"   x%i", v30);
      return (*(int (__thiscall **)(int, wchar_t *, unsigned int))(*(_DWORD *)dword_1047CA6C + 88))(
               dword_1047CA6C,
               Buffer,
               wcslen(Buffer));
    }
  }
  return result;
}
