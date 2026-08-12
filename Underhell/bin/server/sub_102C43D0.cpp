void __thiscall sub_102C43D0(_DWORD *this)
{
  int *v2; // edi
  bool v3; // cf
  int v4; // ecx
  char *v5; // eax
  char *v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // esi
  float v12; // eax
  float v13; // ecx
  double v14; // st7
  int v15; // esi
  __int16 v16; // ax
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // [esp-10h] [ebp-22Ch]
  __int64 v21; // [esp-Ch] [ebp-228h]
  char String[512]; // [esp+8h] [ebp-214h] BYREF
  int v23; // [esp+208h] [ebp-14h]
  float v24; // [esp+20Ch] [ebp-10h]
  float v25; // [esp+210h] [ebp-Ch]
  float v26; // [esp+214h] [ebp-8h]
  int v27; // [esp+218h] [ebp-4h]

  v27 = (int)this;
  sub_1015F600(this);
  v2 = (int *)this[23];
  if ( v2 )
  {
    v3 = __CFADD__(v2[86]++, 1);
    v4 = v2[86];
    v2[87] += v3;
    HIDWORD(v21) = v2[87];
    LODWORD(v21) = v4;
    sub_1015EFA0((int)this, " %I64uth save on this map\n", v21);
    v5 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 380))(dword_106B31D0);
    v6 = v5;
    if ( v5 )
    {
      if ( *v5 )
      {
        sub_104299C0(String, v5, 0x200u);
        _strlwr(String);
        sub_10429910(String, 92);
        v23 = (*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 52))(
                dword_106B31D8 + 4,
                String,
                "GAME");
        v7 = sub_102C1E00(v2 + 53, v2[56]);
        v8 = v23;
        v2[58] = v2[53] + 17 * v7;
        v2[59] = v8;
        sub_10431100(String);
        v9 = v2[58];
        v10 = sub_10261B20();
        v11 = v10;
        if ( v10 )
        {
          if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
            sub_100DAE60(v10);
          v12 = *(float *)(v11 + 584);
          v13 = *(float *)(v11 + 588);
          v24 = *(float *)(v11 + 580);
          v25 = v12;
          v26 = v13;
          *(_WORD *)(v9 + 8) = (int)v24;
          v14 = v26;
          *(_WORD *)(v9 + 10) = (int)v12;
          *(_WORD *)(v9 + 12) = (int)v14;
          v15 = *(_DWORD *)(v11 + 220);
          if ( v15 <= 100 )
            v16 = v15 < 0 ? 0 : v15;
          else
            v16 = 100;
          *(_WORD *)(v9 + 14) = v16;
          v17 = sub_10429530(v6, "autosave");
          v18 = *(__int16 *)(v9 + 10);
          v20 = *(__int16 *)(v9 + 14);
          v19 = *(__int16 *)(v9 + 8);
          *(_BYTE *)(v9 + 16) = 2 - (v17 != 0);
          sub_1015EFA0(v27, "save pos %i %i %i w/ health %d\n", v19, v18, *(__int16 *)(v9 + 12), v20);
        }
      }
    }
  }
}
