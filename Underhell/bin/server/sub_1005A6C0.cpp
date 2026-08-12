void __thiscall sub_1005A6C0(int *this, int a2, int a3)
{
  int v4; // edi
  int v5; // eax

  v4 = __RTDynamicCast(
         this[1],
         0,
         (struct _s_RTTICompleteObjectLocator *)&CAI_BaseNPC `RTTI Type Descriptor',
         (int)&CAI_PlayerAlly `RTTI Type Descriptor',
         0);
  if ( v4 && *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    v5 = sub_10261B20();
    if ( v5 )
      *(_DWORD *)(v4 + 4372) = *(_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
    else
      *(_DWORD *)(v4 + 4372) = -1;
  }
  if ( sub_10059210((int)this, a2) )
  {
    sub_10023CB0((char *)this[1], 25);
    sub_100590E0(this, a3);
    sub_1004BA00(this, 0);
  }
  else
  {
    DevMsg("*** Warning! LeadPlayer() has a NULL Goal Ent\n");
  }
}
