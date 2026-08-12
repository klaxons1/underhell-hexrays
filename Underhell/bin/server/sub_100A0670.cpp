void __thiscall sub_100A0670(void *this, int a2)
{
  char Buffer[256]; // [esp+8h] [ebp-130h] BYREF
  int v4; // [esp+108h] [ebp-30h] BYREF
  int v5; // [esp+110h] [ebp-28h]
  int v6; // [esp+114h] [ebp-24h]
  int v7; // [esp+128h] [ebp-10h]

  sub_1009ACB0((int)this);
  sub_10429A00(Buffer, 0x100u, "scripts/%s", (_BYTE)this + 116);
  if ( !sub_10430BB0((char)Buffer) )
  {
    sub_1042DE40(0, 0, 0);
    if ( (*(unsigned __int8 (__thiscall **)(int, char *, const char *, int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(dword_106B31D8 + 4) + 56))(
           dword_106B31D8 + 4,
           Buffer,
           "GAME",
           &v4,
           0,
           0,
           0) )
    {
      sub_100A5B80((int)this, (int)Buffer, v4 + v6 - v7, a2);
      if ( v5 >= 0 && v4 )
        goto LABEL_8;
    }
    else
    {
      DevMsg("Unable to load #included script %s\n", Buffer);
      if ( v5 >= 0 && v4 )
LABEL_8:
        (*(void (__thiscall **)(_DWORD, int))(*g_pMemAlloc + 20))(g_pMemAlloc, v4);
    }
  }
}
