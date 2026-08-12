void __thiscall sub_10282A40(_DWORD **this, _DWORD **a2)
{
  const char *v3; // eax
  _DWORD **v4; // ecx
  _DWORD *v5; // eax
  int v6; // eax
  _DWORD **v7; // ecx
  _DWORD *v8; // eax
  int v9; // eax
  char v10[40]; // [esp+8h] [ebp-228h] BYREF
  char String1[512]; // [esp+30h] [ebp-200h] BYREF

  if ( a2 == this[116] )
  {
    (*(void (__thiscall **)(_DWORD *, char *, int))(*this[116] + 780))(this[116], String1, 512);
    v3 = (const char *)(*(int (__thiscall **)(_DWORD *))(*this[114] + 40))(this[114]);
    if ( _stricmp(String1, v3) )
    {
      ((void (__thiscall *)(_DWORD **, _DWORD))(*this)[257])(this, 0);
      sub_10280570(this[114], (int)String1);
    }
  }
  else
  {
    if ( a2 == this[126] )
    {
      (*(void (__thiscall **)(_DWORD *, char *, int))(*this[126] + 780))(this[126], v10, 40);
      if ( _stricmp(v10, "None") )
      {
        sub_10281EA0((int)this, (int)v10, 0, 0);
        sub_1025F470((_DWORD **)this[126]);
      }
    }
    v4 = (_DWORD **)this[197];
    if ( a2 == v4 )
    {
      v5 = (_DWORD *)sub_1025F510(v4);
      if ( v5 )
      {
        v6 = sub_1022A910(v5, "ptr", 0);
        if ( v6 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 784))(v6);
      }
    }
    v7 = (_DWORD **)this[196];
    if ( a2 == v7 )
    {
      v8 = (_DWORD *)sub_1025F510(v7);
      if ( v8 )
      {
        v9 = sub_1022A910(v8, "ptr", 0);
        if ( v9 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 784))(v9);
      }
    }
    if ( this[113] && sub_100E1B90() )
      (*(void (__thiscall **)(_DWORD *, int))(*this[120] + 200))(this[120], 1);
    if ( *((_BYTE *)this + 500) )
      ((void (__thiscall *)(_DWORD **))(*this)[262])(this);
  }
}
