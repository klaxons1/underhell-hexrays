int __stdcall sub_1017C2C0(int a1)
{
  char **v1; // ecx
  char *v2; // eax
  char v4[256]; // [esp+0h] [ebp-100h] BYREF

  ++dword_106B639C;
  strcpy(v4, "save ");
  memset(&v4[6], 0, 0xFAu);
  v1 = (char **)(a1 + 8);
  if ( *(_DWORD *)(a1 + 24) == 2 )
  {
    v2 = *v1;
    if ( !*v1 )
      v2 = (char *)String;
  }
  else
  {
    v2 = (char *)sub_1010D460((int)v1);
  }
  sub_10429750((int)v4, v2, 256, -1);
  sub_10429750((int)v4, "\n", 256, -1);
  return (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106B31D0 + 144))(dword_106B31D0, v4);
}
