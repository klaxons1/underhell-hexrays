int __thiscall sub_1002ABF0(_DWORD *this, const void *a2)
{
  void (__thiscall *v3)(_DWORD *, _BYTE *); // edx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8[22]; // [esp+4h] [ebp-78h] BYREF
  _BYTE v9[8]; // [esp+5Ch] [ebp-20h] BYREF
  int v10; // [esp+64h] [ebp-18h]
  int v11; // [esp+70h] [ebp-Ch]
  int v12; // [esp+74h] [ebp-8h]

  if ( this[202] == 9 )
  {
    v10 = 0;
    v12 = 0;
    v3 = *(void (__thiscall **)(_DWORD *, _BYTE *))(*this + 1152);
    v11 = -1;
    v3(this, v9);
  }
  if ( !(*(int (__thiscall **)(_DWORD *))(*this + 368))(this) )
    return sub_100EAFB0((int)this, (int)a2);
  v4 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 220))(v4) != 6 )
    return sub_100EAFB0((int)this, (int)a2);
  v5 = (*(int (__thiscall **)(_DWORD *))(*this + 368))(this);
  v6 = __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CNPC_Bullseye `RTTI Type Descriptor',
         0);
  if ( !v6 || !*(_BYTE *)(v6 + 3672) )
    return sub_100EAFB0((int)this, (int)a2);
  qmemcpy(v8, a2, sizeof(v8));
  *(float *)&v8[7] = flt_106F1CA8;
  *(float *)&v8[8] = flt_106F1CAC;
  *(float *)&v8[9] = flt_106F1CB0;
  return sub_100EAFB0((int)this, (int)v8);
}
