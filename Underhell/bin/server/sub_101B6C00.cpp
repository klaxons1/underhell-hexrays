void __cdecl sub_101B6C00(int a1, int a2)
{
  char v2; // bl
  int i; // esi
  int v4; // esi
  char Destination[4096]; // [esp+0h] [ebp-1104h] BYREF
  char Source[256]; // [esp+1000h] [ebp-104h] BYREF
  void **v7; // [esp+1100h] [ebp-4h] BYREF

  if ( a2 )
  {
    v2 = *(_BYTE *)(a1 + 1592);
    sub_104299C0(Destination, "solid { ", 0x1000u);
    for ( i = sub_1025F620(Source, a2, 44); Source[0]; i = sub_1025F620(Source, i, 44) )
    {
      sub_10429750((int)Destination, "\"", 4096, -1);
      sub_10429750((int)Destination, Source, 4096, -1);
      sub_10429750((int)Destination, "\" ", 4096, -1);
    }
    sub_10429750((int)Destination, "}", 4096, -1);
    v4 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_106BAFF0 + 152))(dword_106BAFF0, Destination);
    v7 = &CSkipKeys::`vftable';
    (*(void (__thiscall **)(int, int, void ***))(*(_DWORD *)v4 + 12))(v4, a1, &v7);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_106BAFF0 + 156))(dword_106BAFF0, v4);
    *(_BYTE *)(a1 + 1592) = v2;
  }
}
