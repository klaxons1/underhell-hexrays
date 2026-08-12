void __thiscall sub_10277110(_DWORD *this, char a2)
{
  void (__thiscall *v3)(_DWORD *, char *, int); // edx
  int v4; // edi
  _BYTE *v5; // eax
  int v6; // eax
  int v7; // edi
  const char *v8; // eax
  int v9; // eax
  char v10[1024]; // [esp+10h] [ebp-400h] BYREF

  if ( *((_BYTE *)this + 948) )
  {
    *(_BYTE *)(this[244] + 208) &= ~0x10u;
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 920))(this, 0);
    (*(void (__thiscall **)(_DWORD *, int))(*this + 232))(this, 2);
    v3 = *(void (__thiscall **)(_DWORD *, char *, int))(*this + 780);
    *((_BYTE *)this + 948) = 0;
    v3(this, v10, 1024);
    if ( strcmp(v10, sub_1022D040(this + 238)) )
    {
      if ( a2 )
      {
        v4 = *this;
        v5 = sub_1022D040(this + 238);
        (*(void (__thiscall **)(_DWORD *, _BYTE *))(v4 + 768))(this, v5);
        v6 = (*(int (__thiscall **)(_DWORD *))(*this + 144))(this);
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 244))(v6, 0, 0);
      }
      else
      {
        v7 = sub_10229D00(32);
        if ( v7 )
        {
          v8 = sub_1022D040(this + 238);
          v9 = sub_1022B200(v7, (int)"LabelChanged", "original", v8, "changed", v10);
        }
        else
        {
          v9 = 0;
        }
        (*(void (__thiscall **)(_DWORD *, int))(*this + 180))(this, v9);
      }
    }
  }
}
