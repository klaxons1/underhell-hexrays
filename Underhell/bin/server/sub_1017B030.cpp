void __thiscall sub_1017B030(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  bool v4; // cc
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // ecx
  char v8; // dl
  int v9; // ebx
  unsigned int v10; // edi
  const char *v11; // eax
  __int64 v12; // [esp+0h] [ebp-18h]

  v3 = this[216];
  v4 = v3 <= 0;
  if ( !v3 )
  {
    v5 = this + 218;
    v3 = sub_1017AF30(this, this + 218);
    this[216] = v3;
    if ( v3 > 1 )
    {
      v6 = this[217];
      if ( v6 != -1 )
      {
        v7 = 0;
        while ( *((unsigned __int8 *)v5 + v7) != v6 )
        {
          if ( ++v7 >= v3 )
            goto LABEL_9;
        }
        v8 = *((_BYTE *)this + v7 + 872);
        *((_BYTE *)this + v7 + 872) = *((_BYTE *)this + v3 + 871);
        *((_BYTE *)this + v3 + 871) = v8;
        --v3;
      }
    }
LABEL_9:
    v4 = v3 <= 0;
  }
  if ( v4 )
  {
    v11 = sub_100D6390(this);
    DevMsg(1, "Firing PickRandom input on logic_case %s with no cases set up\n", v11);
  }
  else
  {
    v9 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, 0, v3 - 1);
    v10 = *((unsigned __int8 *)this + v9 + 872);
    if ( v10 < 0x10 )
    {
      HIDWORD(v12) = this;
      LODWORD(v12) = *a2;
      sub_1010DD80(&this[6 * v10 + 222], v12, 0.0);
    }
    *((_BYTE *)this + v9 + 872) = *((_BYTE *)this + this[216]-- + 871);
    this[217] = v10;
  }
}
