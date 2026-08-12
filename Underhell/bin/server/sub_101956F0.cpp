int __usercall sub_101956F0@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>)
{
  int result; // eax
  char *i; // edi
  char v5; // bl
  int v6; // esi
  int v7; // eax
  int v8; // eax
  char Destination[256]; // [esp+0h] [ebp-210h] BYREF
  char Src[256]; // [esp+100h] [ebp-110h] BYREF
  int v13; // [esp+200h] [ebp-10h] BYREF
  int v14; // [esp+204h] [ebp-Ch] BYREF
  int v15; // [esp+208h] [ebp-8h] BYREF
  int v16; // [esp+20Ch] [ebp-4h] BYREF

  result = sub_1025EF10();
  if ( (_BYTE)result )
  {
    for ( i = (char *)(*(int (__thiscall **)(int, const char *, const char *, int *, int))(*(_DWORD *)dword_106B31D8
                                                                                         + 124))(
                        dword_106B31D8,
                        "maps/*.bsp",
                        "MOD",
                        &v16,
                        a2); i; i = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B31D8 + 112))(dword_106B31D8) )
    {
      sub_104299C0(Destination, "maps/", 0x100u);
      sub_10429750((int)Destination, i, 256, -1);
      sub_104299C0(Src, Destination, 0x100u);
      sub_10429C20(Src, ".nav", 0x100u);
      v5 = 0;
      v6 = (*(int (__thiscall **)(int, char *, const char *, const char *, int))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
             dword_106B31D8 + 4,
             Src,
             "rb",
             "MOD",
             a3);
      if ( v6
        || (v5 = 1,
            (v6 = (*(int (__thiscall **)(int, char *, const char *, const char *))(*(_DWORD *)(dword_106B31D8 + 4) + 8))(
                    dword_106B31D8 + 4,
                    Src,
                    "rb",
                    "GAME")) != 0) )
      {
        if ( (**(int (__thiscall ***)(int, int *, int, int, int))(dword_106B31D8 + 4))(
               dword_106B31D8 + 4,
               &v13,
               4,
               v6,
               a1)
          && v13 == -17958194 )
        {
          if ( (**(int (__thiscall ***)(int, int *, int, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v15, 4, v6)
            && (unsigned int)(v15 - 4) <= 5 )
          {
            a1 = v6;
            (**(void (__thiscall ***)(int, int *, int))(dword_106B31D8 + 4))(dword_106B31D8 + 4, &v14, 4);
            v8 = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 24))(
                   dword_106B31D8 + 4,
                   Destination,
                   0);
            if ( v8 == v14 || v5 )
              v7 = 0;
            else
              v7 = 4;
          }
          else
          {
            a1 = v6;
            (*(void (__thiscall **)(int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4);
            v7 = 3;
          }
        }
        else
        {
          a1 = v6;
          (*(void (__thiscall **)(int))(*(_DWORD *)(dword_106B31D8 + 4) + 12))(dword_106B31D8 + 4);
          v7 = 2;
        }
      }
      else
      {
        v7 = 1;
      }
      switch ( v7 )
      {
        case 0:
          Msg("The nav file for %s is up-to-date\n", i);
          break;
        case 1:
          Warning("Missing nav file for %s\n", i);
          break;
        case 2:
          Warning("Invalid nav file for %s\n", i);
          break;
        case 3:
          Warning("Old nav file for %s\n", i);
          break;
        case 4:
          Warning("The nav file for %s is built from an old version of the map\n", i);
          break;
      }
      a3 = v16;
    }
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_106B31D8 + 120))(dword_106B31D8, v16);
  }
  return result;
}
