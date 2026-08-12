void __thiscall sub_10318570(_BYTE *this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // edi
  bool v5; // zf
  unsigned int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11[3]; // [esp+Ch] [ebp-10h] BYREF
  char v12; // [esp+1Bh] [ebp-1h]

  v2 = *((_DWORD *)this + 103);
  if ( v2 == -1 || (v3 = &off_1061BE18[4 * (*((_DWORD *)this + 103) & 0xFFF) + 1], v3[1] != v2 >> 12) )
    v4 = 0;
  else
    v4 = *v3;
  if ( v4 != sub_10261B20() || (v5 = this[2145] == 0, v12 = 1, v5) )
    v12 = 0;
  v6 = *((_DWORD *)this + 535);
  v7 = 0;
  if ( v6 == -1 || off_1061BE18[4 * (*((_DWORD *)this + 535) & 0xFFF) + 2] != v6 >> 12 )
    v8 = 0;
  else
    v8 = off_1061BE18[4 * (*((_DWORD *)this + 535) & 0xFFF) + 1];
  v9 = __RTDynamicCast(
         v8,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CNPC_AttackHelicopter `RTTI Type Descriptor',
         0);
  v10 = v9;
  if ( v9 )
    v7 = *(_DWORD *)(v9 + 220);
  (*(void (__thiscall **)(_BYTE *, int *, _DWORD))(*(_DWORD *)this + 540))(this, v11, 0);
  if ( (*((_DWORD *)this + 63) & 0x800) != 0 )
    sub_100DAE60((int)this);
  sub_10316550(this, (int)(this + 580), (int)v11);
  if ( v12 && v10 && v7 > 0 && *(_DWORD *)(v10 + 220) == v7 )
    sub_10313E40();
}
