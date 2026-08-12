int __userpurge sub_10028AC0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  float v4; // esi
  int result; // eax
  int v6; // ebx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int (__thiscall *v10)(_DWORD); // edx
  __int16 v11; // ax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  float *v15; // eax
  int v16; // edx
  double v17; // st7
  int (__thiscall *v18)(_DWORD); // eax
  float *v19; // eax
  int v20; // edx
  double v21; // st7
  int (__thiscall *v22)(_DWORD); // eax
  int v23; // eax
  int v24; // edx
  _DWORD *v25; // eax
  unsigned __int8 v26; // bl
  _BYTE *v27; // eax
  _BYTE v29[28]; // [esp+8h] [ebp-C4h] BYREF
  float v30[3]; // [esp+24h] [ebp-A8h] BYREF
  float v31[5]; // [esp+30h] [ebp-9Ch] BYREF
  _BYTE *v32; // [esp+44h] [ebp-88h]
  int v33; // [esp+48h] [ebp-84h]
  int v34; // [esp+4Ch] [ebp-80h]
  int v35; // [esp+50h] [ebp-7Ch]
  int v36; // [esp+54h] [ebp-78h]
  int v37; // [esp+58h] [ebp-74h]
  int v38; // [esp+5Ch] [ebp-70h]
  int v39; // [esp+60h] [ebp-6Ch]
  __int16 v40; // [esp+64h] [ebp-68h]
  _BYTE v41[48]; // [esp+98h] [ebp-34h] BYREF
  int v42; // [esp+C8h] [ebp-4h] BYREF

  LODWORD(v4) = a1 + 4;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)(a1 + 4) + 36))(a1 + 4);
  if ( result )
  {
    v6 = *(_DWORD *)dword_10413178;
    v7 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v4) + 36))(COERCE_FLOAT(LODWORD(v4)));
    if ( (*(int (__thiscall **)(int, int))(v6 + 36))(dword_10413178, v7) == 3 )
    {
      if ( !*(_DWORD *)(a1 + 1940)
        && (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v4) + 36))(COERCE_FLOAT(LODWORD(v4))) )
      {
        sub_10026520(a1);
      }
      v8 = *(_DWORD **)(a1 + 1940);
      if ( !v8 || !*v8 )
        return 0;
      if ( (*(_DWORD *)(a1 + 112) & 0x100) != 0 )
        a3 |= 0x40u;
      v9 = *(_DWORD *)LODWORD(v4);
      v35 = a3;
      v10 = *(int (__thiscall **)(_DWORD))(v9 + 132);
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v31[3] = v4;
      v11 = v10(LODWORD(v4));
      v12 = *(_DWORD *)LODWORD(v4);
      v40 = v11;
      v36 = *(_DWORD *)(a1 + 80);
      v13 = (*(int (__thiscall **)(float))(v12 + 36))(COERCE_FLOAT(LODWORD(v4)));
      v14 = *(_DWORD *)LODWORD(v4);
      LODWORD(v31[4]) = v13;
      v15 = (float *)(*(int (__thiscall **)(float))(v14 + 4))(COERCE_FLOAT(LODWORD(v4)));
      v16 = *(_DWORD *)LODWORD(v4);
      v30[0] = *v15;
      v30[1] = v15[1];
      v17 = v15[2];
      v18 = *(int (__thiscall **)(_DWORD))(v16 + 8);
      v30[2] = v17;
      v19 = (float *)v18(LODWORD(v4));
      v20 = *(_DWORD *)LODWORD(v4);
      v31[0] = *v19;
      v31[1] = v19[1];
      v21 = v19[2];
      v22 = *(int (__thiscall **)(_DWORD))(v20 + 156);
      v31[2] = v21;
      v23 = v22(LODWORD(v4));
      v24 = *(_DWORD *)(a1 + 1204);
      v38 = *(_DWORD *)(a1 + 1200);
      v37 = v23;
      v25 = *(_DWORD **)a1;
      v39 = v24;
      if ( ((unsigned __int8 (__thiscall *)(int, float *))v25[156])(a1, v30) )
      {
        if ( !v32 )
        {
          v32 = v41;
          sub_101F0B70(v31, v30, v41);
        }
        v26 = (*(int (__thiscall **)(int, float *, _BYTE *, _DWORD, int *, int))(*(_DWORD *)dword_10413160 + 72))(
                dword_10413160,
                v30,
                v29,
                0,
                &v42,
                a2);
        if ( v26 && (v35 & 1) != 0 )
          v27 = v29;
        else
          v27 = 0;
        sub_10028980((_DWORD **)a1, (int)v30, (int)v27, v42);
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)a1 + 628))(a1, v30);
        return v26;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return sub_10037390(a3);
    }
  }
  return result;
}
