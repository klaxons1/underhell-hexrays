_DWORD *__thiscall sub_1018A990(_DWORD *this)
{
  const char *v2; // edi
  char Buffer[256]; // [esp+Ch] [ebp-108h] BYREF
  void (__thiscall ***v5)(_DWORD, int); // [esp+10Ch] [ebp-8h]

  sub_1015E370(this);
  *this = &CMultiplayRules::`vftable';
  this[3] = 0;
  this[4] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  this[13] = 0;
  sub_1015E000(this, 1);
  sub_1042CBA0("sk_suitcharger");
  (**v5)(v5, 30);
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B31D0 + 8))(dword_106B31D0) )
  {
    if ( (dword_106B2D7C & 0x1000) != 0 )
    {
      v2 = "FCVAR_NEVER_AS_STRING";
    }
    else
    {
      v2 = *(const char **)(dword_106B2D84 + 36);
      if ( !v2 || !*v2 )
        goto LABEL_13;
    }
    Msg("Executing listen server config file\n");
    goto LABEL_12;
  }
  if ( (dword_106B2D34 & 0x1000) != 0 )
  {
    v2 = "FCVAR_NEVER_AS_STRING";
    Msg("Executing dedicated server config file\n");
LABEL_12:
    sub_10429A00(Buffer, 0x100u, "exec %s\n", (char)v2);
    (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, Buffer);
    goto LABEL_13;
  }
  v2 = *(const char **)(dword_106B2D3C + 36);
  if ( v2 && *v2 )
  {
    Msg("Executing dedicated server config file\n");
    goto LABEL_12;
  }
LABEL_13:
  sub_1042C7E0(&unk_106B79E0, String);
  sub_1018A790(this);
  return this;
}
