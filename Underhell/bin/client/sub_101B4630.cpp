int __fastcall sub_101B4630(int a1)
{
  int result; // eax
  char v3; // bl
  int v4; // edi
  double v5; // st7
  bool v6; // zf
  float v7; // [esp+0h] [ebp-20h]
  const char *v8; // [esp+10h] [ebp-10h]
  const char *v9; // [esp+10h] [ebp-10h]

  result = sub_100422D0();
  if ( !result )
    return result;
  v3 = *(_BYTE *)(result + 5188);
  v4 = *(_DWORD *)(result + 5180);
  result = *(_DWORD *)(result + 5184);
  *(_DWORD *)(a1 + 280) = result;
  if ( v4 == *(_DWORD *)(a1 + 276) && v3 == *(_BYTE *)(a1 + 284) )
    return result;
  v5 = 0.0;
  if ( v4 > 0 )
    v5 = 255.0;
  v7 = v5;
  (*(void (**)(void))(*(_DWORD *)dword_1044CC48 + 36))();
  sub_10247080(a1 != 44 ? a1 : 0, "alpha", v7, 0.0, 0.40000001, 0, 0.0);
  result = *(_DWORD *)(a1 + 276);
  if ( v4 > result )
  {
    *(_DWORD *)(a1 + 266) = *(_DWORD *)(a1 + 261);
    *(_BYTE *)(a1 + 269) = 0;
    *(_BYTE *)(a1 + 285) = 1;
    v8 = "SquadMemberAdded";
LABEL_12:
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    result = sub_10248C80(v8);
    goto LABEL_13;
  }
  if ( v4 < result )
  {
    *(_DWORD *)(a1 + 266) = *(_DWORD *)(a1 + 261);
    v6 = *(_BYTE *)(a1 + 286) == 0;
    *(_BYTE *)(a1 + 285) = 0;
    if ( v6 )
    {
      v8 = "SquadMemberLeft";
      goto LABEL_12;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
    result = sub_10248C80("SquadMemberDied");
    *(_BYTE *)(a1 + 286) = 0;
  }
LABEL_13:
  if ( v3 != *(_BYTE *)(a1 + 284) )
  {
    if ( v3 )
      v9 = "SquadMembersFollowing";
    else
      v9 = "SquadMembersStationed";
    (*(void (**)(void))(*(_DWORD *)dword_1044CC48 + 36))();
    result = sub_10248C80(v9);
  }
  *(_DWORD *)(a1 + 276) = v4;
  *(_BYTE *)(a1 + 284) = v3;
  return result;
}
