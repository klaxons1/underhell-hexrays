bool __thiscall sub_103D2F10(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  bool result; // al

  v4 = __RTDynamicCast(
         a3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CPropCombineBall `RTTI Type Descriptor',
         0);
  v5 = v4;
  result = v4
        && ((v6 = *(_DWORD *)(v4 + 412), v6 == -1)
         || (v7 = &off_1061BE18[4 * (*(_DWORD *)(v4 + 412) & 0xFFF) + 1],
             v8 = v6 >> 12,
             off_1061BE18[4 * (*(_DWORD *)(v5 + 412) & 0xFFF) + 2] != v8)
         || !*v7
         || (off_1061BE18[4 * (*(_DWORD *)(v5 + 412) & 0xFFF) + 2] != v8 ? (v9 = 0) : (v9 = *v7),
             !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v9 + 284))(v9)))
        && *(unsigned __int8 *)(v5 + 1144) == this[213];
  return result;
}
