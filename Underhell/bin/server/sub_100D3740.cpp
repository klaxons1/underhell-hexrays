char __userpurge sub_100D3740@<al>(int a1@<ecx>, int a2@<ebx>, double a3@<st0>, int a4, int a5, int a6, char *Source)
{
  unsigned int v8; // eax
  int *v9; // ecx
  int v10; // ecx
  int v11; // esi
  char result; // al
  int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  double v20; // st7
  int *v21; // ecx
  int *v22; // ecx
  int v23; // edx
  void (__thiscall *v24)(int, int); // eax
  float v25; // [esp+8h] [ebp-10h]
  int v27; // [esp+Ch] [ebp-Ch]
  float Sourcea; // [esp+2Ch] [ebp+14h]
  float Sourceb; // [esp+2Ch] [ebp+14h]

  v8 = *(_DWORD *)(a1 + 1120);
  if ( v8 == -1 )
    goto LABEL_15;
  v9 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 1120) & 0xFFF) + 1];
  if ( v9[1] != v8 >> 12 )
    goto LABEL_15;
  v10 = *v9;
  if ( !v10 )
    goto LABEL_15;
  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 288))(v10);
  if ( !v11 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 320))(v11) || !sub_101E7EA0(0) )
    goto LABEL_15;
  result = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 264))(v11);
  if ( !result )
    return result;
  v13 = sub_101E7EA0(0);
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1 + 876))(a1, a2) )
  {
    if ( v13 )
    {
      v14 = sub_101E7EA0(0);
      v15 = sub_100BF520(v14, "Silencer");
      sub_100C1600(v13, v15, 0);
      v27 = 1;
LABEL_13:
      v18 = sub_101E7EA0(0);
      v19 = sub_100BF520(v18, "Silencer");
      sub_100C1600(v13, v19, v27);
    }
  }
  else if ( v13 )
  {
    v16 = sub_101E7EA0(0);
    v17 = sub_100BF520(v16, "Silencer");
    sub_100C1600(v13, v17, 1);
    v27 = 0;
    goto LABEL_13;
  }
  sub_100F5BE0(Source);
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 952))(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 944))(a1, a6);
  sub_100D18C0(a1);
  a3 = a3 + *(float *)(dword_106B31C8 + 12);
  v25 = a3;
  sub_10031BA0(v11, v25);
LABEL_15:
  sub_100D18C0(a1);
  v20 = a3 + *(float *)(dword_106B31C8 + 12);
  Sourcea = v20;
  if ( *(_DWORD *)(a1 + 1132) != LODWORD(Sourcea) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v21 = *(int **)(a1 + 24);
      if ( v21 )
        sub_100194B0(v21, 1132);
    }
    v20 = Sourcea;
    *(float *)(a1 + 1132) = Sourcea;
  }
  sub_100D18C0(a1);
  Sourceb = v20 + *(float *)(dword_106B31C8 + 12);
  if ( *(_DWORD *)(a1 + 1136) != LODWORD(Sourceb) )
  {
    if ( *(_BYTE *)(a1 + 84) )
    {
      *(_BYTE *)(a1 + 88) |= 1u;
    }
    else
    {
      v22 = *(int **)(a1 + 24);
      if ( v22 )
        sub_100194B0(v22, 1136);
    }
    *(float *)(a1 + 1136) = Sourceb;
  }
  v23 = *(_DWORD *)a1;
  *(float *)(a1 + 1272) = 0.0;
  *(_WORD *)(a1 + 1264) = 0;
  v24 = *(void (__thiscall **)(int, int))(v23 + 1004);
  *(float *)(a1 + 1268) = *(float *)(dword_106B31C8 + 12) + 5.0;
  v24(a1, 1);
  sub_100EC3F0(0, 0.0, (int)"BaseCombatWeapon_HideThink");
  return 1;
}
