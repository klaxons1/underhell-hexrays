__m128 *__thiscall sub_101FCD00(_DWORD **this, UUID *Uuid, int a3, int a4)
{
  int v5; // edi
  int v7; // eax
  _DWORD *v8; // ecx
  __m128 *v9; // esi
  unsigned __int8 StringUuid[256]; // [esp+14h] [ebp-100h] BYREF

  if ( !(unsigned __int8)sub_10233170(Uuid) )
    return 0;
  v5 = sub_101F9B80(this[35], (int)Uuid);
  if ( !v5 )
  {
    sub_10233040(Uuid, StringUuid, 0x100u);
    Warning("Attempted to create unknown particle system id %s\n", (const char *)StringUuid);
    return 0;
  }
  v7 = (*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 6707);
  if ( v7 )
  {
    v8 = (_DWORD *)((v7 + 19) & 0xFFFFFFF0);
    *(v8 - 1) = v7;
    v9 = (__m128 *)sub_101FB7A0(v8);
  }
  else
  {
    v9 = 0;
  }
  sub_101FC420(v9, v5, *(float *)&a3, a4);
  return v9;
}
