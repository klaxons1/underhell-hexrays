void __fastcall sub_103704C0(int a1, int a2, int *a3)
{
  int v4; // eax
  int v5; // eax
  float *v6; // eax
  double v7; // st7
  float v8; // [esp+0h] [ebp-18h]
  float v9[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = *a3;
  if ( *a3 == dword_106E8138 )
  {
    v8 = 0.0;
    if ( *(_DWORD *)(a1 + 2372) == 6 )
      sub_1023C380((_DWORD *)a1, (int)"NPC_BlackHeadcrab.FootstepWalk", v8, 0);
    else
      sub_1023C380((_DWORD *)a1, (int)"NPC_BlackHeadcrab.Footstep", v8, 0);
  }
  else if ( v4 == dword_106E8140 )
  {
    sub_1023C380((_DWORD *)a1, (int)"NPC_BlackHeadcrab.Telegraph", 0.0, 0);
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 368))(a1);
    if ( v5 )
    {
      v6 = (float *)(*(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 504))(v5, v9);
      *(float *)(a1 + 3632) = *v6;
      *(float *)(a1 + 3636) = v6[1];
      *(float *)(a1 + 3640) = v6[2];
      *(_BYTE *)(a1 + 3652) = 1;
    }
  }
  else if ( v4 == dword_106E8134 )
  {
    sub_1023C380((_DWORD *)a1, (int)"NPC_BlackHeadcrab.Threat", 0.0, 0);
    sub_1023C380((_DWORD *)a1, (int)"NPC_BlackHeadcrab.Alert", 0.0, 0);
  }
  else if ( v4 == dword_106E813C )
  {
    if ( *(_BYTE *)(a1 + 3681) )
    {
      sub_10422220(a1 + 728, v9);
      sub_1036BF70(a1, v9);
    }
    else
    {
      sub_1036BF70(a1, 0);
    }
    v7 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
           dword_106B31E4,
           2.0,
           5.0)
       + *(float *)(dword_106B31C8 + 12);
    *(_BYTE *)(a1 + 3681) = 1;
    *(float *)(a1 + 3684) = v7;
  }
  else
  {
    sub_10370010((int *)a1, a2, a3);
  }
}
