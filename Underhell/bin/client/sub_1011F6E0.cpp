char __thiscall sub_1011F6E0(_BYTE *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  char v5; // al
  HMODULE v6; // eax
  int (__cdecl *v7)(const char *, _DWORD); // eax
  int v8; // eax
  char Buffer[1040]; // [esp+8h] [ebp-428h] BYREF
  int v11; // [esp+418h] [ebp-18h] BYREF
  int v12; // [esp+424h] [ebp-Ch]
  int v13; // [esp+428h] [ebp-8h]
  int v14; // [esp+42Ch] [ebp-4h]

  sub_10079870(&v11);
  sub_10229680("developer", 1);
  LOBYTE(v13) = *(_DWORD *)(v12 + 48) != 0;
  if ( !CommandLine_Tier0(v12)
    || (v3 = CommandLine_Tier0(v2),
        v4 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v3 + 40))(v3, "-shaderedit"),
        LOBYTE(v14) = 1,
        !v4) )
  {
    LOBYTE(v14) = 0;
  }
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 140))(dword_1041315C);
  sub_10228370(Buffer, 0x410u, "%s/bin/shadereditor_2007.dll", v5);
  v6 = (HMODULE)sub_1022CD10(Buffer);
  hLibModule = v6;
  if ( v6 )
  {
    v7 = (int (__cdecl *)(const char *, _DWORD))sub_1022CE50(v6);
    if ( v7 )
    {
      v8 = v7("ShaderEditor005", 0);
      dword_104376B8 = v8;
      if ( v8 )
      {
        if ( !(*(unsigned __int8 (__thiscall **)(int, int, void *, void (__noreturn ***)(), int, int, _DWORD))(*(_DWORD *)v8 + 4))(
                v8,
                v11,
                off_103DC81C,
                off_103E50E8,
                v14,
                v13,
                0) )
        {
          Warning("Cannot initialize IVShaderEditor.\n");
          dword_104376B8 = 0;
        }
      }
      else
      {
        Warning("Unable to pull IVShaderEditor interface.\n");
      }
    }
    else
    {
      dword_104376B8 = 0;
      Warning("Unable to pull IVShaderEditor interface.\n");
    }
  }
  else
  {
    Warning("Cannot load shadereditor.dll from %s!\n", Buffer);
  }
  this[12] = dword_104376B8 != 0;
  sub_1011DEC0(this);
  sub_1011F4F0(this);
  if ( this[12] )
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_104376B8 + 12))(dword_104376B8);
  return 1;
}
