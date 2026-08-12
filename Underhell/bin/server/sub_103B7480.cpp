_DWORD *__thiscall sub_103B7480(void *this)
{
  _DWORD *v2; // esi

  v2 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 4))(g_pMemAlloc, 156);
  memset(v2, 0, 0x9Cu);
  if ( !v2 )
    return 0;
  sub_1007E490((char *)v2, (int)this);
  *v2 = &CNPC_Strider::CNavigator::`vftable';
  v2[2] = &CNPC_Strider::CNavigator::`vftable';
  return v2;
}
