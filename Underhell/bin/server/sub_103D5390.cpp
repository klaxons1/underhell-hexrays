void __thiscall sub_103D5390(unsigned int this, int a2)
{
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // edx

  if ( *(_DWORD *)(this + 844) < *(_DWORD *)(this + 840) && *(_DWORD *)(a2 + 420) == 23 )
  {
    v3 = __RTDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CPropCombineBall `RTTI Type Descriptor',
           0);
    v4 = (_DWORD *)v3;
    if ( !*(_BYTE *)(v3 + 1142)
      && *(_DWORD *)(v3 + 424)
      && *(_BYTE *)(v3 + 1144)
      && sub_10023790((_BYTE *)v3)
      && *(float *)(dword_106B31C8 + 12) - sub_103D1B50((int)v4) >= 0.5 )
    {
      sub_10035270((int)v4, v5, 0x10000);
      sub_103D3C20(v4);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v4 + 76))(v4, 0);
      sub_103D2050(v4, this);
      sub_103D2CF0((int)v4);
      if ( ++*(_DWORD *)(this + 844) >= *(_DWORD *)(this + 840) )
      {
        sub_10023400((unsigned __int16 *)this, 8);
        *(_DWORD *)(this + 196) = 0;
      }
      sub_1010DD80((_DWORD *)(this + 884), __SPAIR64__(this, (unsigned int)v4), 0.0);
      if ( *(_DWORD *)(this + 844) == 1 )
        sub_1010DD80((_DWORD *)(this + 980), __SPAIR64__(this, (unsigned int)v4), 0.0);
    }
  }
}
