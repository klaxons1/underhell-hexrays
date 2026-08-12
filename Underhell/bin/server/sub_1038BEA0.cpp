int __usercall sub_1038BEA0@<eax>(_DWORD *a1@<ecx>, int a2@<edi>)
{
  int (__stdcall *v3)(int *); // edx
  const char *v4; // eax
  _DWORD *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  int v9; // [esp+4h] [ebp-4h] BYREF

  v3 = *(int (__stdcall **)(int *))(*a1 + 28);
  if ( (a1[62] & 0x10) != 0 )
  {
    if ( !*(_DWORD *)v3(&v9)
      || (v4 = *(const char **)(*(int (__thiscall **)(_DWORD *, int *))(*a1 + 28))(a1, &v9)) == 0
      || v4 == String )
    {
      v5 = sub_10162BE0(&v9, "models/police_cheaple.mdl");
LABEL_10:
      a1[115] = *v5;
      sub_100D8500(a1);
    }
  }
  else if ( !*(_DWORD *)v3(&v9)
         || (v6 = *(const char **)(*(int (__thiscall **)(_DWORD *, int *))(*a1 + 28))(a1, &v9)) == 0
         || v6 == String )
  {
    v5 = sub_10162BE0(&v9, "models/police.mdl");
    goto LABEL_10;
  }
  v7 = *(const char **)(*(int (__thiscall **)(_DWORD *, int *))(*a1 + 28))(a1, &v9);
  if ( !v7 )
    v7 = String;
  sub_100E8220(a2, v7);
  sub_10260680("npc_manhack", 0);
  sub_1023B8B0("NPC_Metropolice.Shove");
  sub_1023B8B0("NPC_MetroPolice.WaterSpeech");
  sub_1023B8B0("NPC_MetroPolice.HidingSpeech");
  (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_106B31E8 + 72))(dword_106B31E8, "METROPOLICE");
  return sub_1001B170(a1);
}
