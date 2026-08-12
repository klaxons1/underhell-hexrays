int __thiscall sub_10247C70(int this)
{
  int v2; // eax
  int result; // eax
  int v4; // eax
  int v5; // eax
  char Buffer[512]; // [esp+Ch] [ebp-214h] BYREF
  int v7[5]; // [esp+20Ch] [ebp-14h] BYREF

  sub_10429A00(Buffer, 0x200u, "maps/%s_survival.txt", *(_DWORD *)(dword_106B31C8 + 60));
  if ( sub_1042A310(32) )
    sub_1042A330("Survival");
  if ( dword_106B31D8 )
    v2 = dword_106B31D8 + 4;
  else
    v2 = 0;
  result = sub_1042A380(v2, Buffer, "MOD");
  if ( (_BYTE)result )
  {
    v4 = sub_1042ACB0("settings", 0);
    sub_10247770((_DWORD *)this, v4);
    v5 = sub_1042ACB0("ammo", 0);
    sub_10247B80((_DWORD *)this, v5);
    memset(v7, 0, sizeof(v7));
    sub_102649F0(v7, Buffer, "Survival", 1);
    *(_BYTE *)(this + 24) = 1;
    return sub_102375F0(v7);
  }
  else
  {
    *(_BYTE *)(this + 24) = 0;
  }
  return result;
}
