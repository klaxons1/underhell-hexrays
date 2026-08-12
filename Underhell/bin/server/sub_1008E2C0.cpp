int __thiscall sub_1008E2C0(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // ecx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // esi
  int v13; // esi
  int v15; // [esp+10h] [ebp-4h]

  v4 = *(_DWORD *)(a2 + 4 * a3);
  v5 = 0;
  v15 = -1;
  if ( *(int *)(v4 + 84) > 0 )
  {
    while ( sub_10074630(*(__int16 **)(*(_DWORD *)(v4 + 72) + 4 * v5), a3) != a4 )
    {
      if ( ++v5 >= *(_DWORD *)(v4 + 84) )
        goto LABEL_15;
    }
    v6 = (_DWORD *)this[1];
    v7 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v4 + 72) + 4 * v5) + v6[419] + 4);
    v8 = v7 & (*(int (__thiscall **)(_DWORD *))(*v6 + 1672))(v6);
    if ( !v8 && v7 == 2 )
    {
      v8 = 2;
      *(float *)(*(_DWORD *)(a2 + 4 * a4) + 92) = *(float *)(dword_106B31C8 + 12) + 0.30000001;
    }
    switch ( v8 )
    {
      case 1:
        v9 = 0;
        break;
      case 2:
        v9 = 1;
        break;
      case 4:
        v9 = 2;
        break;
      case 8:
        v9 = 3;
        break;
      default:
        v9 = -1;
        break;
    }
    v15 = v9;
    if ( v9 != -1 )
      return v15;
  }
LABEL_15:
  v10 = *(_DWORD *)(a2 + 4 * a4);
  v11 = 0;
  if ( *(int *)(v10 + 84) <= 0 )
    return v15;
  while ( sub_10074630(*(__int16 **)(*(_DWORD *)(v10 + 72) + 4 * v11), a3) != a4 )
  {
    if ( ++v11 >= *(_DWORD *)(v10 + 84) )
      return v15;
  }
  switch ( *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v10 + 72) + 4 * v11) + *(_DWORD *)(this[1] + 1676) + 4)
         & (*(int (__thiscall **)(_DWORD))(*(_DWORD *)this[1] + 1672))(this[1]) )
  {
    case 1:
      v13 = 0;
      break;
    case 2:
      v13 = 1;
      break;
    case 4:
      v13 = 2;
      break;
    case 8:
      v13 = 3;
      break;
    default:
      v13 = -1;
      break;
  }
  DevMsg("Note: Strange link found between nodes in AI node graph\n");
  return v13;
}
