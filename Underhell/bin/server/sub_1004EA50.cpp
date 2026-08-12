_DWORD *__usercall sub_1004EA50@<eax>(int a1@<ecx>, int a2@<ebp>, float *a3@<edi>)
{
  unsigned int v4; // eax
  int *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  _DWORD *result; // eax
  unsigned int v10; // eax
  int v11; // ecx
  const char *v12; // eax
  int v13; // ecx

  *(_WORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 20) = -1;
  *(float *)(a1 + 40) = 0.0;
  *(_BYTE *)(a1 + 38) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v4 = *(_DWORD *)(a1 + 24);
  if ( v4 == -1 || (v5 = &off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 1], v5[1] != v4 >> 12) )
    v6 = 0;
  else
    v6 = *v5;
  v7 = sub_1004D970(a1, a2, a3, a1, *(char **)(v6 + 800));
  v8 = v7;
  if ( v7 )
  {
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    *(float *)(v8 + 860) = *(float *)(dword_106B31C8 + 12);
    if ( *(char **)(*(_DWORD *)(a1 + 4) + 92) != "npc_monk" && !(unsigned __int8)sub_100D6240("npc_monk")
      || (result = *(_DWORD **)(a1 + 4), result[581] != 4) )
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 1088))(*(_DWORD *)(a1 + 4));
      if ( !(_BYTE)result )
        return sub_10044510(*(_DWORD *)(a1 + 4), (int)"Initializing assault behavior");
    }
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 24);
    if ( v10 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 2] != v10 >> 12 )
      v11 = 0;
    else
      v11 = off_1061BE18[4 * (*(_DWORD *)(a1 + 24) & 0xFFF) + 1];
    v12 = *(const char **)(v11 + 800);
    if ( !v12 )
      v12 = String;
    DevMsg("**ERROR: Can't find any assault points named: %s\n", v12);
    v13 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 28) = 0;
    if ( *(char **)(v13 + 92) != "npc_monk" && !(unsigned __int8)sub_100D6240("npc_monk")
      || (result = *(_DWORD **)(a1 + 4), result[581] != 4) )
    {
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 1088))(*(_DWORD *)(a1 + 4));
      if ( !(_BYTE)result )
        return sub_10044510(*(_DWORD *)(a1 + 4), (int)"Can't find assault point");
    }
  }
  return result;
}
