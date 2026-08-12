void __thiscall sub_102AD4D0(_BYTE *this, float ArgList, float a3, int a4, int a5)
{
  _DWORD *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  char Buffer[64]; // [esp+0h] [ebp-60h] BYREF
  _BYTE v11[8]; // [esp+40h] [ebp-20h] BYREF
  int v12; // [esp+48h] [ebp-18h]
  int v13; // [esp+54h] [ebp-Ch]
  int v14; // [esp+58h] [ebp-8h]

  if ( this[1080] )
  {
    sub_10429A00(Buffer, 0x40u, "%s_spore", SLOBYTE(ArgList));
    v5 = sub_1012BF20(&dword_1069E3E0, 0, Buffer, 0, 0, 0, 0);
    if ( v5 )
    {
      if ( *((_BYTE *)v5 + 800) == 1 )
      {
        v12 = 0;
        v13 = -1;
        v14 = 0;
        sub_102850D0((int)v5, (int)v11);
      }
    }
    else
    {
      v6 = sub_101811E0("env_sporeexplosion", -1);
      if ( v6 )
      {
        v7 = __RTDynamicCast(
               v6,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&SporeExplosion `RTTI Type Descriptor',
               0);
        v8 = v7;
        if ( v7 )
        {
          sub_100E0D20(v7, &a3);
          v9 = *sub_10162BE0(&ArgList, Buffer);
          ArgList = 25.0;
          *(_DWORD *)(v8 + 260) = v9;
          sub_10284530((float *)(v8 + 804), &ArgList);
        }
      }
    }
  }
}
