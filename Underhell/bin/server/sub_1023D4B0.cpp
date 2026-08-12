void __cdecl sub_1023D4B0(int a1, float *a2, int a3, float a4, int a5, int a6, int a7)
{
  int v7; // eax
  int v8; // esi
  double v9; // st7

  if ( dword_106C4FC4 )
  {
    if ( a6 )
      v7 = sub_1023C8D0((_DWORD *)dword_106C4FC4, a5, a6);
    else
      v7 = sub_1023C870(dword_106C4FC4);
    if ( v7 == -1 )
    {
      DevMsg("Could not AllocSound() for InsertSound() (Game DLL)\n");
    }
    else
    {
      v8 = 52 * v7 + dword_106C4FC4 + 812;
      *(float *)(v8 + 36) = *a2;
      *(float *)(v8 + 40) = a2[1];
      *(float *)(v8 + 44) = a2[2];
      *(_DWORD *)(v8 + 16) = a1;
      *(_DWORD *)(v8 + 8) = a3;
      *(float *)(v8 + 12) = 0.5;
      if ( *(_DWORD *)(dword_106984AC + 48) )
        *(float *)(v8 + 12) = 0.1;
      v9 = *(float *)(dword_106B31C8 + 12);
      *(_BYTE *)(v8 + 30) = 0;
      *(float *)(v8 + 24) = v9 + a4;
      if ( a5 )
        *(_DWORD *)v8 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a5 + 8))(a5);
      else
        *(_DWORD *)v8 = -1;
      if ( a7 )
        *(_DWORD *)(v8 + 4) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a7 + 8))(a7);
      else
        *(_DWORD *)(v8 + 4) = -1;
      *(_DWORD *)(v8 + 32) = a6;
      *(_BYTE *)(v8 + 48) = a5 != 0;
      if ( *(_DWORD *)(dword_106B2CAC + 48) == 1 )
        Msg(
          "  Added Sound! Type:%d  Duration:%f (Time:%f)\n",
          *(_DWORD *)(v8 + 16),
          a4,
          *(float *)(dword_106B31C8 + 12));
      if ( *(_DWORD *)(dword_106B2CAC + 48) == 2 && (a1 & 8) != 0 )
        Msg("  Added Danger Sound! Duration:%f (Time:%f)\n", a4, *(float *)(dword_106B31C8 + 12));
    }
  }
}
