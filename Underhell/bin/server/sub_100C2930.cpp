char __thiscall sub_100C2930(float *this, int a2)
{
  int *v3; // ecx
  unsigned int v4; // esi
  int v5; // eax
  float v7; // [esp+10h] [ebp-1Ch]
  float v8; // [esp+14h] [ebp-18h]
  float v9[3]; // [esp+20h] [ebp-Ch] BYREF

  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 764))(this) )
    return 0;
  sub_101129A0(*((unsigned __int16 *)this + 178) | 4);
  if ( *((_BYTE *)this + 112) != 23 )
  {
    if ( *((_BYTE *)this + 84) )
    {
      *((_BYTE *)this + 88) |= 1u;
    }
    else
    {
      v3 = (int *)*((_DWORD *)this + 6);
      if ( v3 )
        sub_100194B0(v3, 112);
    }
    *((_BYTE *)this + 112) = 23;
  }
  (*(void (__thiscall **)(float *, int, float *))(*(_DWORD *)this + 744))(this, a2, v9);
  sub_100C0DD0(this + 209, v9);
  (*(void (__thiscall **)(float *, _DWORD, int))(*(_DWORD *)this + 140))(this, 0, -1);
  sub_100EA940(0x20000000);
  sub_100E0970(0, 0);
  sub_100EC3F0(0, 0.0, 0);
  v7 = *(float *)(dword_106B31C8 + 12) + 2.0;
  sub_100EC4A0(v7, 0);
  sub_100EC3F0((int)sub_10246D70, 0.0, 0);
  v4 = *((_DWORD *)this + 104);
  if ( v4 == -1 || off_1061BE18[4 * (v4 & 0xFFF) + 2] != v4 >> 12 )
    v5 = 0;
  else
    v5 = off_1061BE18[4 * (v4 & 0xFFF) + 1];
  if ( __RTDynamicCast(
         v5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
         (int)&CEntityFlame `RTTI Type Descriptor',
         0) )
  {
    sub_100EC3F0((int)sub_10246D70, 0.0, 0);
    v8 = *(float *)(dword_106B31C8 + 12) + 0.1;
    sub_100EC4A0(v8, 0);
  }
  return 1;
}
