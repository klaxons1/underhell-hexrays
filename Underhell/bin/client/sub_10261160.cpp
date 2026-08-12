void __thiscall sub_10261160(int (__thiscall ***this)(void *), int a2)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  int (__thiscall **v6)(void *); // [esp+Ch] [ebp-8h] BYREF
  char v7[4]; // [esp+10h] [ebp-4h] BYREF

  if ( *((_BYTE *)this + 216) )
  {
    v3 = dword_1047CA68;
    v4 = *(_DWORD *)dword_1047CA68;
    v5 = (**this)(this);
    (*(void (__thiscall **)(int, int))(v4 + 8))(v3, v5);
    (*(void (__thiscall **)(int, int (__thiscall ***)(void *), char *))(*(_DWORD *)dword_1047CA68 + 28))(
      dword_1047CA68,
      &v6,
      v7);
    this[53] = v6;
    *((_BYTE *)this + 208) = 1;
  }
}
