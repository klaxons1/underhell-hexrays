int __thiscall sub_1011B040(_DWORD *this, int *a2)
{
  int v2; // edi
  int result; // eax
  int v4; // esi
  int v5; // [esp+0h] [ebp-48h]
  char Buffer[64]; // [esp+8h] [ebp-40h] BYREF

  v2 = this[200];
  if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D0 + 76))(dword_106B31D0, 1);
    v4 = result;
  }
  else
  {
    result = __RTDynamicCast(
               *a2,
               0,
               (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
               (int)&CBasePlayer `RTTI Type Descriptor',
               0);
    if ( !result )
      return result;
    v4 = *(_DWORD *)(result + 24);
  }
  if ( v4 )
  {
    if ( (unsigned int)(v2 + 1) > 0x1F )
    {
      return Warning("TargetCDAudio - Track %d out of range\n", v5);
    }
    else if ( v2 == -1 )
    {
      return (*(int (__cdecl **)(int, int, const char *))(*(_DWORD *)dword_106B31D0 + 152))(
               dword_106B31D0,
               v4,
               "cd pause\n");
    }
    else
    {
      sub_10429A00(Buffer, 0x40u, "cd play %3d\n", v2);
      return (*(int (__cdecl **)(int, int, char *))(*(_DWORD *)dword_106B31D0 + 152))(dword_106B31D0, v4, Buffer);
    }
  }
  return result;
}
