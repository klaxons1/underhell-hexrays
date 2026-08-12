void __thiscall sub_1037B610(int this)
{
  int v2; // ecx
  char *v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // edi

  sub_10041D00((_DWORD *)this);
  v2 = *(_DWORD *)(this + 3624);
  if ( v2 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 88))(v2);
  if ( *(_BYTE *)(this + 4180) && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 4176) > -0.001 )
  {
    v3 = *(char **)(this + 4172);
    if ( !v3 )
      v3 = (char *)String;
    v4 = sub_1012BF20(&dword_1069E3E0, 0, v3, this, 0, 0, 0);
    v5 = __RTDynamicCast(
           (int)v4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CNPC_Strider `RTTI Type Descriptor',
           0);
    sub_10379DB0((_DWORD *)this, v5);
    *(_BYTE *)(this + 4180) = 0;
  }
  sub_103755E0((float *)(this + 4292));
  if ( *(_BYTE *)(this + 4245) && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 4248) )
  {
    if ( (v6 = sub_1025FB50(1), (v7 = (_DWORD *)v6) != 0)
      && !(*(unsigned __int8 (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v6 + 1276))(v6, this, 0)
      || !sub_10372250((void *)this, v7) )
    {
      sub_10227360((_DWORD *)this, 1, 0, "scenes/npc/hunter/hunter_eyeclose.vcd");
      *(_BYTE *)(this + 4245) = 0;
    }
  }
}
