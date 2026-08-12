int __thiscall sub_100425F0(int this)
{
  int result; // eax
  int v3[4]; // [esp+14h] [ebp-14h] BYREF
  char v4; // [esp+27h] [ebp-1h] BYREF

  sub_1000DEE0((_DWORD *)this);
  sub_1000DEB0((_DWORD *)this, 128);
  sub_1000DEF0((_DWORD *)this, *(_DWORD *)(this + 112) & 0x10);
  *(_DWORD *)(this + 3980) = 0;
  sub_1003B810((_WORD *)this, (int)"models/player.mdl");
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 128))(this);
  sub_10011170((int *)this, v3, 0, 0, 0, -1, 0.0, 0);
  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 792))(this);
  *(_BYTE *)(this + 4116) = 0;
  if ( dword_104376B8 )
  {
    *(_DWORD *)(this + 3444) = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)dword_104376B8 + 56))(
                                 dword_104376B8,
                                 "ppe_gaussian_blur");
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_104376B8 + 72))(dword_104376B8, this + 3444, 1);
    v4 = *(_BYTE *)(this + 4140);
    return (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)dword_104376B8 + 64))(dword_104376B8, this + 3444, &v4);
  }
  return result;
}
