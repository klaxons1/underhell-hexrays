void __thiscall sub_10277270(int this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( *(_BYTE *)(this + 948) )
  {
    if ( a2 == 64 )
    {
      sub_10277110((_DWORD *)this, 0);
    }
    else if ( a2 == 70 )
    {
      sub_10277110((_DWORD *)this, 1);
    }
    else
    {
      sub_10253880((_BYTE *)this, a2);
    }
  }
  else if ( a2 == 64 && *(_BYTE *)(this + 968) )
  {
    sub_102739B0(this);
  }
  else
  {
    v3 = (_DWORD *)sub_10229D00(32);
    if ( v3 )
    {
      v4 = sub_1022B1A0(v3, (int)"KeyCodeTyped", "code", a2);
      sub_10236860((void *)this, v4);
    }
    else
    {
      sub_10236860((void *)this, 0);
    }
  }
}
