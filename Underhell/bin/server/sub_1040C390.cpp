void __thiscall sub_1040C390(int this, int a2, int a3)
{
  _DWORD *v4; // edi
  double v5; // st4
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st6
  int v10; // eax
  __int64 v11; // [esp-4h] [ebp-18h]

  v4 = *(_DWORD **)(a3 + 4 * (a2 == 0) + 104);
  if ( !v4 || *(_DWORD *)(this + 1708) )
  {
    sub_10213530(this, a2, a3);
  }
  else
  {
    if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 424) + 76))(*(_DWORD *)(this + 424)) & 4) != 0 )
    {
LABEL_4:
      sub_10213530(this, a2, a3);
      return;
    }
    v5 = *(float *)(a3 + 12 * a2 + 32);
    v6 = v5 * v5;
    v7 = *(float *)(a3 + 12 * a2 + 36);
    v8 = v6;
    v9 = *(float *)(a3 + 12 * a2 + 40);
    *(float *)(this + 1696) = v7 * v7 + v8 + v9 * v9;
    if ( (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, v4[6])
      || (!*(_BYTE *)(this + 1688) || !*(_BYTE *)(this + 1689)) && *(float *)(this + 1696) <= 250000.0 )
    {
      if ( sub_1040B200(this, (int)v4) )
        return;
      v10 = sub_10019B00(v4);
      if ( v10 && (*(char **)(v10 + 92) == "npc_strider" || sub_100D6240((_DWORD *)v10, "npc_strider"))
        || (!*(_BYTE *)(this + 1688) || !*(_BYTE *)(this + 1689)) && *(float *)(this + 1696) <= 250000.0 )
      {
        goto LABEL_4;
      }
    }
    HIDWORD(v11) = this;
    LODWORD(v11) = this;
    sub_1010DD80((_DWORD *)(this + 1796), v11, 0.0);
    sub_1040BF40(this, (int)v4);
  }
}
