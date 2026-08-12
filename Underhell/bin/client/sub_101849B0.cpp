int __thiscall sub_101849B0(_DWORD *this, int a2, int a3)
{
  char v4; // bl
  char *v5; // eax
  void (__stdcall *v6)(int); // edx
  const char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  char Destination[256]; // [esp+14h] [ebp-108h] BYREF
  _DWORD v15[2]; // [esp+114h] [ebp-8h] BYREF

  v4 = 0;
  v5 = (char *)sub_1022B4C0("toggle", (int)Locale);
  sub_102282F0(Destination, v5, 0xFFu);
  if ( Destination[0] )
  {
    sub_10229600(Destination);
    if ( (unsigned __int8)sub_102291A0(v15) )
    {
      v6 = **(void (__stdcall ***)(int))v15[0];
      if ( *(_DWORD *)(v15[1] + 48) )
        v6(0);
      else
        v6(1);
      sub_10184850(this);
    }
    else
    {
      v7 = (const char *)sub_1022B4C0("typedata", (int)Locale);
      Msg("CommandComboBox::OnMessage: cvar %s not found.\n", v7);
    }
    v4 = 1;
  }
  v8 = (char *)sub_1022B4C0("command", (int)Locale);
  sub_102282F0(Destination, v8, 0xFFu);
  if ( Destination[0] )
  {
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C, Destination);
    v4 = 1;
  }
  v9 = (char *)sub_1022B4C0("custom", (int)Locale);
  sub_102282F0(Destination, v9, 0xFFu);
  if ( Destination[0] )
  {
    (*(void (__thiscall **)(_DWORD *, int))(*this + 988))(this, a2);
  }
  else if ( !v4 )
  {
    return sub_1023B700(a2, a3);
  }
  if ( sub_10229D00(32) )
    v10 = sub_10229D20("CommandMenuClosed");
  else
    v10 = 0;
  v11 = *this;
  v12 = (*(int (__thiscall **)(_DWORD *, int, _DWORD))(*this + 144))(this, v10, 0.0);
  (*(void (__thiscall **)(_DWORD *, int))(v11 + 132))(this, v12);
  return sub_1023B700(a2, a3);
}
