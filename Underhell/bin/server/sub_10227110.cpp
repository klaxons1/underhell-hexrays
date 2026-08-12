char __thiscall sub_10227110(_DWORD *this, int a2, char a3)
{
  int v4; // edx
  int v5; // edi
  unsigned int v6; // eax
  int *v7; // ecx
  int v8; // esi
  int v10; // [esp+Ch] [ebp-4h]

  v4 = this[203];
  v5 = 0;
  v10 = v4;
  if ( v4 <= 0 )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(this[200] + 4 * v5);
    if ( v6 == -1 )
      goto LABEL_11;
    v7 = &off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v5) & 0xFFF) + 1];
    if ( off_1061BE18[4 * (*(_DWORD *)(this[200] + 4 * v5) & 0xFFF) + 2] != v6 >> 12 )
      goto LABEL_11;
    v8 = *v7;
    if ( !*v7 || !*(_BYTE *)(v8 + 884) || *(_BYTE *)(v8 + 885) )
      goto LABEL_11;
    if ( (!a3
       || !__RTDynamicCast(
             v8,
             0,
             (struct _s_RTTICompleteObjectLocator *)&CSceneEntity `RTTI Type Descriptor',
             (int)&CInstancedSceneEntity `RTTI Type Descriptor',
             0))
      && sub_102237E0((_DWORD *)v8, a2) )
    {
      return 1;
    }
    v4 = v10;
LABEL_11:
    if ( ++v5 >= v4 )
      return 0;
  }
}
