void __thiscall sub_102547C0(int this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  char v5; // bl
  double v6; // st6
  double v7; // st7
  bool v8; // zf
  float v9; // [esp+4h] [ebp-24h]
  float v10; // [esp+4h] [ebp-24h]
  float v11; // [esp+8h] [ebp-20h]
  float v12; // [esp+8h] [ebp-20h]
  float v13; // [esp+8h] [ebp-20h]
  float v14; // [esp+10h] [ebp-18h]
  int v15; // [esp+1Ch] [ebp-Ch]
  int v16; // [esp+24h] [ebp-4h]

  v14 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC3F0((_DWORD *)this, (int)sub_102547C0, v14, (int)"WindThinkContext");
  if ( *(_BYTE *)(this + 852) )
  {
    v2 = *(_DWORD *)(this + 816);
    *(_BYTE *)(this + 852) = 0;
    *(_DWORD *)(this + 824) = *(_DWORD *)(this + 812)
                            + (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(
                                dword_106B31E4,
                                -v2,
                                v2);
    *(_DWORD *)(this + 840) = (int)((double)(unsigned __int16)(int)((double)(*(_DWORD *)(this + 828)
                                                                           + (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)dword_106B31E4 + 8))(
                                                                               dword_106B31E4,
                                                                               -*(_DWORD *)(this + 832),
                                                                               *(_DWORD *)(this + 832)))
                                                                  * 182.04445)
                                  * 0.0054931641);
  }
  else
  {
    v3 = *(_DWORD *)(this + 820);
    v4 = *(_DWORD *)(this + 824);
    v5 = 1;
    if ( (double)(int)abs32(v4 - v3) > 5.0 )
    {
      if ( v4 <= v3 )
        v6 = -5.0;
      else
        v6 = 5.0;
      *(_DWORD *)(this + 820) = (int)(v6 + (double)*(int *)(this + 820));
      v5 = 0;
    }
    v16 = *(_DWORD *)(this + 840);
    if ( (double)(int)abs32(v16 - *(_DWORD *)(this + 836)) <= 5.0 )
    {
      if ( v5 )
      {
        v15 = *(_DWORD *)(this + 848);
        *(_DWORD *)(this + 820) = v4;
        v12 = (float)v15;
        v10 = (float)-v15;
        v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                dword_106B31E4,
                LODWORD(v10),
                LODWORD(v12))
            + (double)*(int *)(this + 844);
        sub_100EC3F0((_DWORD *)this, (int)sub_102547C0, v13, (int)"WindThinkContext");
        *(_BYTE *)(this + 852) = 1;
      }
    }
    else
    {
      v7 = (double)v16;
      v11 = (float)*(int *)(this + 836);
      v9 = v7;
      sub_10424B50(v9, v11, 5.0);
      *(_DWORD *)(this + 836) = (int)v7;
    }
  }
  if ( *(_DWORD *)(this + 820) )
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(this + 856) + 28))(*(_DWORD *)(this + 856));
  v8 = *(_BYTE *)(this + 800) == 0;
  *(_DWORD *)(this + 864) = *(_DWORD *)(this + 836);
  if ( v8 )
    *(float *)(this + 868) = (float)*(int *)(this + 820);
  else
    *(float *)(this + 868) = 0.0;
}
