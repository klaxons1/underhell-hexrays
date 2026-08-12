unsigned int __thiscall sub_1010BFF0(int this, float *a2, char *Str)
{
  int v5; // edi
  char *v7; // esi
  char *v8; // eax
  int v9; // eax
  const char *v10; // [esp-10h] [ebp-18h]
  char *Stra; // [esp+14h] [ebp+Ch]

  if ( !*(_BYTE *)(this + 16) )
    return 2;
  v5 = __RTDynamicCast(
         (int)a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&C_BaseEntity `RTTI Type Descriptor',
         (int)&IBreakableWithPropData `RTTI Type Descriptor',
         0);
  if ( !v5 || !*(_DWORD *)(this + 12) )
    return 3;
  v7 = (char *)sub_1022A6A0(Str, 0);
  if ( v7 )
  {
    if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 116))(v5) )
    {
      Stra = *(char **)v5;
      v9 = sub_100AF260(Str);
      (*((void (__thiscall **)(int, int))Stra + 28))(v5, v9);
    }
    return sub_1010BB30(this, (int)Str, a2, v7, (int)v7);
  }
  else
  {
    v10 = (const char *)sub_10034E90(a2);
    v8 = sub_10034D90(a2);
    Warning("%s '%s' has a base specified as '%s', but there is no matching entry in propdata.txt.\n", v8, v10, Str);
    return 3;
  }
}
