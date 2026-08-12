int __thiscall sub_10257090(void *this, int a2)
{
  int result; // eax
  int v3; // eax
  _BYTE v4[8]; // [esp+4h] [ebp-20h] BYREF
  int v5; // [esp+Ch] [ebp-18h]
  int v6; // [esp+18h] [ebp-Ch]
  int v7; // [esp+1Ch] [ebp-8h]

  result = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 752))(this, a2);
  if ( (_BYTE)result )
  {
    v3 = __RTDynamicCast(
           a2,
           0,
           (struct _s_RTTICompleteObjectLocator *)&CBaseEntity `RTTI Type Descriptor',
           (int)&CRagdollProp `RTTI Type Descriptor',
           0);
    if ( v3 )
    {
      v5 = 0;
      v6 = -1;
      v7 = 0;
      return sub_101CBCA0(v3, (int)v4);
    }
    else
    {
      return sub_1025FAC0(a2);
    }
  }
  return result;
}
