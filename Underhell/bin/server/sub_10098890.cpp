char __thiscall sub_10098890(float *this, _DWORD *a2)
{
  int v4; // eax
  _DWORD *v5; // esi

  if ( !sub_10093A00((int)this, 0, 0) || (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this) )
    return 0;
  v4 = sub_10093460(this, 2);
  v5 = (_DWORD *)__RTDynamicCast(
                   v4,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                   (int)&CAI_PlayerAlly `RTTI Type Descriptor',
                   0);
  if ( !v5 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*v5 + 296))(v5) || (v5[62] & 2) != 0 )
    return 0;
  else
    return sub_10098480(this, v5, a2);
}
