void __userpurge sub_100F6390(int a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4, float *a5, float *a6)
{
  double v7; // st6
  char v8; // al
  void (__thiscall *v9)(int, float *, float *); // eax
  BOOL v10; // edi
  double v11; // st7
  char v12; // cl
  bool v13; // bl
  void (__thiscall *v14)(int, _BYTE *); // edx
  int v15; // edi
  char v16; // al
  int v17; // ecx
  int v18; // edi
  int v19; // eax
  int v20; // edi
  int v21; // eax
  _BYTE v24[12]; // [esp+2Ch] [ebp-34h] BYREF
  _BYTE v25[12]; // [esp+38h] [ebp-28h] BYREF
  float v26[3]; // [esp+44h] [ebp-1Ch] BYREF
  BOOL v27; // [esp+50h] [ebp-10h]
  float v28; // [esp+54h] [ebp-Ch] BYREF
  float v29; // [esp+58h] [ebp-8h] BYREF
  float v30; // [esp+5Ch] [ebp-4h]

  if ( *(float *)(a1 + 4124) > 0.0 )
  {
    v7 = *(float *)(a1 + 4124) - *(float *)(dword_106B31C8 + 16) * 1000.0;
    *(float *)(a1 + 4124) = v7;
    if ( v7 < 0.0 )
      *(float *)(a1 + 4124) = 0.0;
  }
  if ( *(float *)(a1 + 4124) <= 0.0 && (*(_BYTE *)(a1 + 256) & 0x60) == 0 )
  {
    v8 = *(_BYTE *)(a1 + 306);
    if ( v8 != 8 && v8 != 10 && *(float *)(dword_106B726C + 44) != 0.0 )
    {
      sub_10018D10(a6);
      v30 = 0.0;
      sub_10018C50(a6);
      v9 = *(void (__thiscall **)(int, float *, float *))(*(_DWORD *)a1 + 1288);
      v10 = *(_BYTE *)(a1 + 306) == 9;
      v27 = v10;
      v9(a1, &v29, &v28);
      v11 = v29 - 0.5;
      v12 = *(_BYTE *)(a1 + 256) & 1;
      v29 = v11;
      if ( v30 >= v11 && (v10 || v12 && (float)0.0 > 0.000099999997) )
      {
        v13 = v30 < (double)v28;
        v14 = *(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 1220);
        v26[0] = *a5;
        v26[1] = a5[1];
        v26[2] = a5[2];
        LOBYTE(v30) = v13;
        v14(a1, v25);
        (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)a1 + 1216))(a1, v24);
        if ( v27 )
        {
          v15 = (*(int (__thiscall **)(int, float *, int, int))(*(_DWORD *)a1 + 1256))(a1, a5, a2, a3);
          (*(void (__thiscall **)(int, int, float))(*(_DWORD *)a1 + 1292))(a1, 1, COERCE_FLOAT(LODWORD(v30)));
        }
        else
        {
          v16 = *(_BYTE *)(a1 + 447);
          if ( v16 == 2 )
          {
            if ( !dword_10699198 )
            {
              dword_10699198 = 1;
              return;
            }
            v17 = dword_10699198++;
            if ( v17 == 3 )
              dword_10699198 = 0;
            v18 = *(_DWORD *)dword_106BAFF8;
            v19 = (*(int (__thiscall **)(int, const char *, int, int))(*(_DWORD *)dword_106BAFF8 + 12))(
                    dword_106BAFF8,
                    "wade",
                    a2,
                    a3);
            v15 = (*(int (__thiscall **)(int, int))(v18 + 20))(dword_106BAFF8, v19);
            (*(void (__thiscall **)(int, int, float))(*(_DWORD *)a1 + 1292))(a1, 2, COERCE_FLOAT(LODWORD(v30)));
          }
          else if ( v16 == 1 )
          {
            v20 = *(_DWORD *)dword_106BAFF8;
            v21 = (*(int (__thiscall **)(int, const char *, int, int))(*(_DWORD *)dword_106BAFF8 + 12))(
                    dword_106BAFF8,
                    "water",
                    a2,
                    a3);
            v15 = (*(int (__thiscall **)(int, int))(v20 + 20))(dword_106BAFF8, v21);
            (*(void (__thiscall **)(int, int, float))(*(_DWORD *)a1 + 1292))(a1, 3, COERCE_FLOAT(LODWORD(v30)));
          }
          else
          {
            v15 = a4;
            if ( !a4 )
              return;
            (*(void (__thiscall **)(int, _DWORD, float, int, int))(*(_DWORD *)a1 + 1292))(
              a1,
              0,
              COERCE_FLOAT(LODWORD(v30)),
              a2,
              a3);
          }
        }
        (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)a1 + 1284))(a1, v26, v15);
      }
    }
  }
}
