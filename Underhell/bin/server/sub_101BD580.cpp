char __stdcall sub_101BD580(int a1, int *a2, char *String2, _BYTE *a4)
{
  int v4; // edi
  int v6; // esi
  const char *v7; // edi
  int v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // eax
  int *v12; // edi
  int v13; // esi
  unsigned int v14; // eax
  int v15; // esi
  unsigned int v16; // eax
  _DWORD *v17; // esi
  bool v18; // al
  int v20; // [esp-4h] [ebp-694h]
  _BYTE v21[1596]; // [esp+Ch] [ebp-684h] BYREF
  _BYTE v22[48]; // [esp+648h] [ebp-48h] BYREF
  float v23[3]; // [esp+678h] [ebp-18h] BYREF
  float v24[3]; // [esp+684h] [ebp-Ch] BYREF
  int v25; // [esp+698h] [ebp+8h]
  const char *v26; // [esp+698h] [ebp+8h]

  v4 = dword_10700AC8;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_10700AC8 + 100))(dword_10700AC8);
  if ( !*(_DWORD *)(a1 + 1100) && sub_100D7240((void *)a1) )
    sub_100BD750((volatile signed __int32 *)a1);
  v6 = *(_DWORD *)(a1 + 1100);
  if ( !v6 || !*(_DWORD *)v6 )
    v6 = 0;
  (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 104))(v4);
  v7 = String2;
  v8 = sub_10100DC0(v6, String2);
  v25 = v8;
  if ( v8 < 0 )
  {
    Warning("ERROR: Tried to create bone follower on invalid bone %s\n", v7);
    return 0;
  }
  v9 = *(char **)(*(_DWORD *)(*(_DWORD *)v6 + 160) + 216 * v8 + *(_DWORD *)v6 + 172);
  String2 = v9;
  if ( !a4 )
  {
    v20 = (int)v9;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 24))(a1);
    if ( (unsigned __int8)sub_101DBE50(v21, a1, v10, v20) )
    {
      a4 = v21;
      goto LABEL_11;
    }
    return 0;
  }
LABEL_11:
  v11 = sub_10100DC0(v6, a4 + 4);
  v12 = a2;
  *a2 = v11;
  if ( v11 < 0 )
    *v12 = v25;
  (*(void (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)a1 + 772))(a1, *v12, v22);
  sub_10421A90(v22, v23);
  sub_10421CE0(v22, 3, v24);
  v26 = *(const char **)(*(int (__thiscall **)(int, int **))(*(_DWORD *)a1 + 28))(a1, &a2);
  if ( !v26 )
    v26 = String;
  v13 = sub_101811E0("phys_bone_follower", -1);
  if ( v13 )
  {
    sub_101BD310(v13, (int *)a1, (int)v26, a4, v24, v23);
    v12[1] = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13);
  }
  else
  {
    v12[1] = -1;
  }
  v14 = v12[1];
  if ( v14 == -1 || off_1061BE18[4 * (v12[1] & 0xFFF) + 2] != v14 >> 12 )
    v15 = 0;
  else
    v15 = off_1061BE18[4 * (v12[1] & 0xFFF) + 1];
  *(_DWORD *)(v15 + 812) = sub_101BCA40(a1, (int)String2);
  *(_DWORD *)(v15 + 808) = String2;
  v16 = v12[1];
  if ( v16 == -1 || off_1061BE18[4 * (v12[1] & 0xFFF) + 2] != v16 >> 12 )
    v17 = 0;
  else
    v17 = (_DWORD *)off_1061BE18[4 * (v12[1] & 0xFFF) + 1];
  v18 = sub_100E88D0((_DWORD *)a1);
  sub_100E88A0(v17, v18);
  return 1;
}
