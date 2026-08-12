void __usercall sub_100C6750(int a1@<ebx>, int a2)
{
  int v2; // edi
  char *v3; // edx
  char Buffer[512]; // [esp+0h] [ebp-448h] BYREF
  char v5[512]; // [esp+200h] [ebp-248h] BYREF
  char String2[64]; // [esp+400h] [ebp-48h] BYREF
  int v7; // [esp+444h] [ebp-4h]

  if ( dword_1047CA78 )
  {
    sub_10229170(a2);
    sub_10228370(Buffer, 0x200u, "resource/closecaption_%s.txt", *(_DWORD *)(v7 + 36));
    (**(void (__thiscall ***)(int, const char *, const char *, int))dword_1047CA78)(
      dword_1047CA78,
      "resource/closecaption_%language%.txt",
      "GAME",
      1);
    (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 336))(dword_1041315C, String2, 64);
    v2 = sub_100B4090(&dword_1042FB78, "CHudCloseCaption");
    if ( (int)strlen(*(const char **)(v7 + 36)) <= 0 || !_stricmp(*(const char **)(v7 + 36), String2) )
    {
      if ( !v2 )
      {
LABEL_12:
        DevMsg("cc_lang = %s\n", *(const char **)(v7 + 36));
        return;
      }
      v3 = String2;
    }
    else
    {
      if ( (*(unsigned __int8 (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_1047C968 + 4) + 40))(
             dword_1047C968 + 4,
             Buffer,
             0) )
      {
        (**(void (__thiscall ***)(int, char *, const char *, int))dword_1047CA78)(dword_1047CA78, Buffer, "GAME", 1);
      }
      else
      {
        sub_10228370(v5, 0x200u, "resource/closecaption_%s.txt", (char)String2);
        Msg("%s not found\n", Buffer);
        Msg("%s will be used\n", v5);
      }
      if ( !v2 )
        goto LABEL_12;
      v3 = *(char **)(v7 + 36);
    }
    sub_10228370(v5, 0x200u, "resource/closecaption_%s.dat", (char)v3);
    sub_100C6420(v2, a1, v5);
    goto LABEL_12;
  }
}
