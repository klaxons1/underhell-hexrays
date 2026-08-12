void __thiscall sub_102C45A0(_DWORD *this)
{
  int *v2; // esi
  bool v3; // cf
  int v4; // ecx
  _BYTE *v5; // eax
  int v6; // edi
  __int64 v7; // [esp-8h] [ebp-210h]
  char String[512]; // [esp+8h] [ebp-200h] BYREF

  sub_1015F620(this);
  v2 = (int *)this[23];
  if ( v2 )
  {
    v3 = __CFADD__(v2[84]++, 1);
    v4 = v2[84];
    v2[85] += v3;
    HIDWORD(v7) = v2[85];
    LODWORD(v7) = v4;
    sub_1015EFA0((int)this, " %I64uth load on this map\n", v7);
    v5 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 376))(dword_106B31D0);
    if ( v5 )
    {
      if ( *v5 )
      {
        sub_10429A00(String, 0x200u, "SAVE/%s", (char)v5);
        sub_10429820((int)String, ".sav", 512);
        sub_10429910(String, 92);
        _strlwr(String);
        if ( !v2[59] || !(unsigned __int8)sub_10430F20(String) )
        {
          v6 = (*(int (__thiscall **)(int, char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 52))(
                 dword_106B31D8 + 4,
                 String,
                 "GAME");
          sub_1015EFA0((int)this, "Relatching save game file due to time or filename change (%s : %u)\n", String, v6);
          v2[58] = v2[53] + 17 * sub_102C1E00(v2 + 53, v2[56]);
          v2[59] = v6;
          sub_10431100(String);
        }
      }
    }
  }
}
