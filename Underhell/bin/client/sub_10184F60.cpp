char __thiscall sub_10184F60(int *this, int a2, int a3)
{
  char *v5; // eax
  int v6; // edx
  int v7; // ebx
  int v8; // eax
  char *v9; // eax
  char *v10; // eax
  int i; // esi
  int v12; // [esp-Ch] [ebp-118h]
  char Destination[256]; // [esp+4h] [ebp-108h] BYREF
  _DWORD v14[2]; // [esp+104h] [ebp-8h] BYREF

  if ( a3 > 100 )
  {
    Msg("CommandMenu::LoadFromKeyValueInternal: depth > 100.\n");
    return 0;
  }
  v5 = (char *)sub_1022B4C0("custom", (int)Locale);
  sub_102282F0(Destination, v5, 0xFFu);
  if ( Destination[0] )
  {
    v6 = *this;
    v14[0] = this[100];
    v14[1] = (*(int (__thiscall **)(int *, int, _DWORD))(v6 + 980))(this, a2, v14[0]);
    sub_100F9FF0(this + 172, this[175], v14);
    return 1;
  }
  v7 = *this;
  v12 = sub_1022B4C0("ruledata", (int)Locale);
  v8 = sub_1022B4C0("rule", (int)Locale);
  if ( (*(unsigned __int8 (__thiscall **)(int *, int, int))(v7 + 992))(this, v8, v12) )
  {
    v9 = (char *)sub_1022B4C0("toggle", (int)Locale);
    sub_102282F0(Destination, v9, 0xFFu);
    if ( Destination[0] )
    {
      sub_10184EF0((int)this, a2);
      return 1;
    }
    v10 = (char *)sub_1022B4C0("command", (int)Locale);
    sub_102282F0(Destination, v10, 0xFFu);
    if ( Destination[0] )
    {
      sub_10184E80((int)this, a2);
      return 1;
    }
    sub_10184D80(this, a2);
    for ( i = sub_10229C90(a2); i; i = sub_1021F0F0(i) )
    {
      if ( !sub_1022AEE0(0) )
        sub_10184F60(i, a3 + 1);
    }
    sub_10184B30(this);
  }
  return 1;
}
