void __thiscall sub_101A0010(_DWORD **this, int a2)
{
  int v3; // eax
  double v4; // st7
  float v5; // [esp+4h] [ebp-8h]
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+14h] [ebp+8h]

  v3 = __RTDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
         (int)&C_NPC_Vortigaunt `RTTI Type Descriptor',
         0);
  if ( !v3 )
  {
LABEL_12:
    v4 = 0.0;
    goto LABEL_13;
  }
  if ( *(float *)(v3 + 3388) <= (double)*((float *)off_103DC81C + 3) )
  {
    if ( *(_BYTE *)(v3 + 3384) )
    {
      v4 = 1.0;
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  v4 = (*(float *)(v3 + 3388) - *((float *)off_103DC81C + 3)) * 0.44444445;
  if ( *(_BYTE *)(v3 + 3384) )
    v4 = 1.0 - v4;
  if ( v4 <= 1.0 )
  {
    if ( v4 < 0.0 )
      v4 = 0.0;
  }
  else
  {
    v4 = 1.0;
  }
LABEL_13:
  if ( this[1] )
  {
    v5 = v4;
    (*(void (__stdcall **)(_DWORD))(*this[1] + 12))(LODWORD(v5));
    v7 = v4;
    v4 = v7;
  }
  if ( this[2] )
  {
    v6 = v4;
    (*(void (__stdcall **)(_DWORD))(*this[2] + 12))(LODWORD(v6));
  }
}
