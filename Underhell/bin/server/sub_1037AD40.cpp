int __userpurge sub_1037AD40@<eax>(_DWORD *a1@<ecx>, int a2@<edi>, int a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  int i; // edi
  int v6; // esi
  int v9[10]; // [esp+Ch] [ebp-68h] BYREF
  int v10; // [esp+34h] [ebp-40h]
  float v11; // [esp+40h] [ebp-34h]
  int v12; // [esp+4Ch] [ebp-28h]
  int v13[3]; // [esp+5Ch] [ebp-18h] BYREF
  int v14; // [esp+68h] [ebp-Ch]
  int v15; // [esp+6Ch] [ebp-8h]
  _DWORD *v16; // [esp+70h] [ebp-4h]

  v16 = a1;
  sub_1001E4E0(v9, a3);
  v3 = *(_DWORD *)(a3 + 64);
  if ( (v3 & 1) == 0 || (v3 & 0x10) != 0 )
    return sub_100C7DC0(v16, a2, v9);
  if ( *(_DWORD *)(a3 + 40) == -1 || off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 2] != *(_DWORD *)(a3 + 40) >> 12 )
    v4 = 0;
  else
    v4 = (_DWORD *)off_1061BE18[4 * (*(_DWORD *)(a3 + 40) & 0xFFF) + 1];
  if ( !v4[106] || !(*(int (__thiscall **)(_DWORD *, _DWORD))(*v4 + 632))(v4, 4.0) )
  {
    v11 = 0.0;
    return sub_100C7DC0(v16, a2, v9);
  }
  memset(v13, 0, sizeof(v13));
  v14 = 0;
  v15 = 0;
  sub_1016B400((int)v4, v13);
  for ( i = 0; i < v14; ++i )
  {
    v6 = *(_DWORD *)(v13[0] + 4 * i);
    if ( __RTDynamicCast(
           v6,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CHunterFlechette `RTTI Type Descriptor',
           0) )
    {
      if ( v6 )
        v10 = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
      else
        v10 = -1;
      v12 |= 0x4000000u;
    }
  }
  sub_102375F0(v13);
  return sub_100C7DC0(v16, a2, v9);
}
