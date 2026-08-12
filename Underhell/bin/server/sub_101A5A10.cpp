void __thiscall sub_101A5A10(char *this, int a2)
{
  float *v3; // ebx
  float *v4; // eax
  float v5; // [esp+Ch] [ebp-Ch] BYREF
  float v6; // [esp+10h] [ebp-8h]
  float v7; // [esp+14h] [ebp-4h]

  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 320))(a2) )
  {
    v3 = (float *)(*(int (__thiscall **)(char *))(*(_DWORD *)this + 576))(this);
    v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 576))(a2);
    v5 = *v4 - *v3;
    v6 = v4[1] - v3[1];
    v7 = 0.0;
    off_10689714();
    v5 = v5 * 200.0;
    v6 = v6 * 200.0;
    v7 = 200.0 * v7;
    sub_100D8FF0((void *)a2, (int)&v5);
    if ( *((_DWORD *)this + 593) != 36 )
      goto LABEL_8;
    if ( !sub_101C5260(a2) && sub_1007E040(*((_DWORD **)this + 647)) )
    {
      if ( (*(_DWORD *)(a2 + 252) & 0x800) != 0 )
        sub_100DAE60(a2);
      if ( *(float *)(a2 + 588) - *(float *)(sub_1007DFE0(*((_DWORD **)this + 647)) + 8) < -1.0 )
LABEL_8:
        sub_10023CB0(this, 78);
    }
    *((_DWORD *)this + 49) = 0;
  }
  else if ( __RTDynamicCast(
              a2,
              0,
              (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
              (int)&CPhysicsProp `RTTI Type Descriptor',
              0) )
  {
    sub_101CABB0((int)this, a2, 1, 5.0);
  }
}
