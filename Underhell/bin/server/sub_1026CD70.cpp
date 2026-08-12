void __thiscall sub_1026CD70(int *this, _DWORD *a2, char a3)
{
  int v5; // esi
  int v6; // eax
  int v7; // esi
  _BYTE v8[12]; // [esp+1Ch] [ebp-Ch] BYREF
  int v9; // [esp+30h] [ebp+8h]

  if ( a2 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 320))(a2) )
    {
      v5 = *this;
      v6 = (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a2 + 504))(a2, v8);
      v9 = (*(int (__thiscall **)(int *, int))(v5 + 80))(this, v6);
      v7 = __RTDynamicCast(
             this[11],
             0,
             (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
             (int)&CBaseAnimating `RTTI Type Descriptor',
             0);
      if ( v7 )
      {
        if ( v9 == -1 )
        {
          if ( !a3 )
            return;
          v9 = sub_100BDF40(v7, (char *)(this[16] + 4));
        }
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD *))(*(_DWORD *)this[12] + 20))(this[12], a2) )
        {
          if ( sub_101E28C0(a2, (int)this, 0) )
          {
            sub_10031B50(v7, 0.0);
            sub_100BC090((float *)(v7 + 124), (float *)(dword_106B31C8 + 12));
            sub_100C3330(v7, v9);
            sub_100C1A10(v7);
            sub_100BCCF0((_DWORD *)v7);
            (*(void (__thiscall **)(int, int))(*(_DWORD *)this[12] + 28))(this[12], 1);
            (*(void (__thiscall **)(_DWORD *, int *, _DWORD))(*a2 + 1408))(a2, this, 0);
          }
        }
      }
    }
  }
}
