int __thiscall sub_10008CE0(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // ebx
  int v7; // edi
  int v8; // esi
  int v9; // eax
  _DWORD *v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // esi
  _DWORD *v14; // esi
  int v15; // eax
  int v16; // eax
  __int16 *v17; // ecx
  __int16 *v18; // esi
  int i; // edx
  _DWORD v20[4]; // [esp+Ch] [ebp-14h] BYREF
  _DWORD *v21; // [esp+1Ch] [ebp-4h]

  v4 = a2;
  v21 = this;
  if ( !(unsigned __int8)sub_10126D20(a2) )
  {
    if ( dword_10400FD4 < 1 )
    {
      if ( (unsigned __int8)Plat_IsInDebugSession() )
        __debugbreak();
      ++dword_10400FD4;
    }
    sub_10128620(v4);
  }
  if ( !*this )
    return -1;
  v7 = a4;
  v8 = a3;
  if ( a4 >= 0 )
  {
    v9 = sub_10127960(a4);
    if ( *(_DWORD *)(v9 + 16) == v8 && *(int *)(v9 + 20) < 0 )
      return v7;
  }
  v10 = v21;
  memset(&v20[1], 0, 12);
  v20[0] = v8;
  if ( sub_10008C70(v21 + 3, v20, &a2, &a4) )
    v11 = a4 | (a2 << 16);
  else
    v11 = -1;
  v12 = HIWORD(v11);
  if ( (signed int)HIWORD(v11) >= v10[6] )
    return -1;
  v13 = v10[3];
  if ( (unsigned __int16)v11 >= *(int *)(v13 + 20 * v12 + 12) )
    return -1;
  v14 = (_DWORD *)(*(_DWORD *)(v13 + 20 * v12) + 16 * (unsigned __int16)v11);
  v15 = v14[3] - 1;
  if ( dword_10404B5C )
    v16 = sub_1012CF80("SelectWeightedSequence", 0, v15, 0);
  else
    v16 = RandomInt(0, v15);
  v17 = (__int16 *)(*v10 + 4 * v14[1]);
  v18 = &v17[2 * v14[2]];
  for ( i = v17[1]; v16 >= i; i = v17[1] )
  {
    if ( v17 >= v18 )
      break;
    v17 += 2;
    v16 -= i;
  }
  return *v17;
}
