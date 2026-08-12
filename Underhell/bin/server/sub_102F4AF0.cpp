char __thiscall sub_102F4AF0(int this, _DWORD *a2)
{
  int v3; // eax
  int v5; // eax
  int v6; // eax

  if ( (!(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 508))(dword_106B3CDC)
     || (v3 = sub_1025FB50(1)) != 0
     && a2 != (_DWORD *)v3
     && (*(unsigned __int8 (__thiscall **)(int, _DWORD *, _DWORD))(*(_DWORD *)v3 + 1276))(v3, a2, 0)
     || sub_102EBE50((int *)this, (_DWORD *)this, a2))
    && ((*(int (__thiscall **)(_DWORD *))(*a2 + 220))(a2) != 17
     || (*(int (__thiscall **)(_DWORD *))(*a2 + 368))(a2)
     && ((*(int (__thiscall **)(_DWORD *))(*a2 + 368))(a2) == this
      || (v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 368))(a2),
          (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5 + 320))(v5))))
    && ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4460) + 1364))(*(_DWORD *)(this + 4460)) != this + 4456
     || !(unsigned __int8)sub_103945D0(a2)
     || (v6 = __RTDynamicCast(
                (int)a2,
                0,
                (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
                (int)&CBaseCombatCharacter `RTTI Type Descriptor',
                0)) == 0
     || (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 876))(v6, this)) )
  {
    return sub_10395DE0(a2);
  }
  else
  {
    return 0;
  }
}
