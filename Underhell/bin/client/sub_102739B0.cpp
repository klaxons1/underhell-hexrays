int __thiscall sub_102739B0(int this)
{
  void (__thiscall *v2)(int, char *, int); // edx
  int result; // eax
  char Src[1024]; // [esp+8h] [ebp-400h] BYREF

  if ( !*(_BYTE *)(this + 948) )
  {
    v2 = *(void (__thiscall **)(int, char *, int))(*(_DWORD *)this + 780);
    *(_BYTE *)(this + 948) = 1;
    v2(this, Src, 1024);
    sub_1022D0A0((char **)(this + 952), Src);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 232))(this, 3);
    (*(void (__thiscall **)(int, int))(*(_DWORD *)this + 920))(this, 1);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 852))(this);
    (*(void (__thiscall **)(int))(*(_DWORD *)this + 828))(this);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 48))(this, 0);
    result = sub_102531C0((_DWORD *)this, 0);
    *(_BYTE *)(*(_DWORD *)(this + 976) + 208) |= 0x10u;
  }
  return result;
}
