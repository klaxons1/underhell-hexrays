int __thiscall sub_101829E0(int this, int a2)
{
  int result; // eax
  const char *v4; // eax
  int v5; // eax
  const char *v6; // ecx
  const char *v7; // eax
  int v8; // eax
  const char *v9; // [esp-4h] [ebp-Ch]

  if ( !*(_DWORD *)(this + 800) || (result = sub_10260340(*(char **)(this + 800), a2), (_BYTE)result) )
  {
    result = 1;
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
    {
      v4 = *(const char **)(this + 808);
      if ( !v4 )
        v4 = String;
      return sub_1025F150(this + 812, v4);
    }
    else if ( *(_DWORD *)(dword_106B31C8 + 20) == 1 )
    {
      v5 = sub_10261B20();
      v6 = *(const char **)(this + 808);
      if ( !v6 )
        v6 = String;
      return sub_1025F040(v5, this + 812, v6);
    }
    else if ( a2 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 324))(a2);
      if ( (_BYTE)result )
      {
        v7 = *(const char **)(this + 808);
        if ( !v7 )
          v7 = String;
        v9 = v7;
        v8 = sub_1001F4B0(a2);
        return sub_1025F040(v8, this + 812, v9);
      }
    }
  }
  return result;
}
