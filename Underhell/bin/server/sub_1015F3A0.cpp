int __thiscall sub_1015F3A0(_DWORD *this)
{
  int result; // eax
  int v2; // ebx
  int v3; // esi
  int v4; // edi
  char *v5; // eax
  char *v6; // eax
  int v7; // eax
  char Buffer[512]; // [esp+0h] [ebp-304h] BYREF
  char ArgList[256]; // [esp+200h] [ebp-104h] BYREF
  _DWORD *v10; // [esp+300h] [ebp-4h]

  v10 = this;
  (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_106B31D0 + 204))(dword_106B31D0, ArgList, 256);
  sub_10429A00(Buffer, 0x200u, "%s/../hl2/%s", (char)ArgList);
  result = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 40))(
             dword_106B31D8 + 4,
             Buffer,
             0);
  if ( (_BYTE)result )
  {
    result = (*(int (__thiscall **)(int, char *, const char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
               dword_106B31D8 + 4,
               Buffer,
               "rb",
               0);
    v2 = result;
    if ( result )
    {
      v3 = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 28))(dword_106B31D8 + 4, result);
      v4 = sub_10184390(v3 + 1);
      (**(void (__thiscall ***)(int, int, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, v4, v3, v2);
      *(_BYTE *)(v4 + v3) = 0;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4, v2);
      v5 = (char *)sub_104295F0(v4, "sv_unlockedchapters");
      if ( v5 )
      {
        strtok(v5, " \n");
        v6 = strtok(0, " \n");
        if ( *v6 == 34 )
          ++v6;
        v7 = sub_10429310(v6);
        v10[20] = v7;
      }
      return sub_10184660(v4);
    }
  }
  return result;
}
