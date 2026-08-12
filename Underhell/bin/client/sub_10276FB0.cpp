void __thiscall sub_10276FB0(int (***this)(void), int a2)
{
  int (*v3)(void); // eax
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  if ( *((_BYTE *)this + 948) )
  {
    sub_10253800(this, a2);
  }
  else
  {
    if ( *((_BYTE *)this + 969) )
    {
      v3 = **this;
      *((_BYTE *)this + 969) = 0;
      *((_BYTE *)this + 970) = 0;
      v4 = dword_1047CA74;
      v5 = *(_DWORD *)dword_1047CA74;
      v6 = v3();
      (*(void (__thiscall **)(int, int))(v5 + 76))(v4, v6);
    }
    v7 = (_DWORD *)sub_10229D00(32);
    if ( v7 )
    {
      v8 = sub_1022B1A0(v7, (int)"MouseDoublePressed", "code", a2);
      sub_10236860(this, v8);
    }
    else
    {
      sub_10236860(this, 0);
    }
  }
}
