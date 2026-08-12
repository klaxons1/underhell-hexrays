int __thiscall sub_10133570(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int v5; // esi
  char v7[64]; // [esp+4h] [ebp-68h] BYREF
  char Buffer[32]; // [esp+44h] [ebp-28h] BYREF
  _BYTE v9[4]; // [esp+64h] [ebp-8h] BYREF
  int v10; // [esp+68h] [ebp-4h] BYREF

  sub_10228370(Buffer, 0x20u, "%i/s", *(_DWORD *)(*(_DWORD *)(this[14431] + 28) + 48));
  (*(void (__thiscall **)(int, char *, char *, int))(*(_DWORD *)dword_1047CA78 + 12))(dword_1047CA78, Buffer, v7, 64);
  if ( *(_DWORD *)(dword_10439934 + 48) )
    v4 = this[14428];
  else
    v4 = this[14429];
  (*(void (__thiscall **)(int, int, char *, int *, _BYTE *))(*(_DWORD *)dword_1047CA64 + 288))(
    dword_1047CA64,
    v4,
    v7,
    &v10,
    v9);
  if ( *(_DWORD *)(dword_10439934 + 48) )
    v5 = this[14428];
  else
    v5 = this[14429];
  return (*(int (**)(int, int, int, int, int, int, int, int, const char *, ...))(*(_DWORD *)dword_1047CA64 + 536))(
           dword_1047CA64,
           v5,
           a2 - v10 - 1,
           a3,
           229,
           229,
           178,
           255,
           "%s",
           Buffer);
}
