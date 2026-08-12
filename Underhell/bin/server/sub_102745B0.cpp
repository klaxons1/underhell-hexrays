int __cdecl sub_102745B0(int a1, char ArgList, int a3)
{
  const char *v3; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi
  char *v8; // ebx
  char Buffer[512]; // [esp+Ch] [ebp-204h] BYREF
  int v11; // [esp+20Ch] [ebp-4h]
  int v12; // [esp+218h] [ebp+8h]

  v3 = "MOD";
  if ( !a3 )
    v3 = "GAME";
  if ( sub_1042A310(32) )
    v11 = sub_1042A330("WeaponDatafile");
  else
    v11 = 0;
  sub_10429A00(Buffer, 0x200u, "%s.txt", ArgList);
  if ( a1 )
    v4 = a1 + 4;
  else
    v4 = 0;
  if ( (unsigned __int8)sub_1042A380(v4, Buffer, v3) )
    return v11;
  if ( a3 )
  {
    sub_10429A00(Buffer, 0x200u, "%s.ctx", ArgList);
    v5 = a1 + 4;
    v6 = (*(int (__thiscall **)(int, char *, const char *, const char *))(*(_DWORD *)(a1 + 4) + 8))(
           a1 + 4,
           Buffer,
           "rb",
           v3);
    v12 = v6;
    if ( v6 )
    {
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 28))(v5, v6);
      v8 = (char *)MemAllocScratch(v7 + 1);
      (**(void (__thiscall ***)(int, char *, int, int))v5)(v5, v8, v7, v12);
      v8[v7] = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 12))(v5, v12);
      sub_10265310(v8, v7, a3);
      LOBYTE(v8) = sub_1042BFB0(Buffer, (int)v8, v5, 0);
      MemFreeScratch();
      if ( (_BYTE)v8 )
        return v11;
    }
  }
  sub_1042B1A0(v11);
  return 0;
}
