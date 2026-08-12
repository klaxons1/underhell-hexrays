void __thiscall sub_1017A5D0(int this)
{
  int v2; // eax
  int v3; // eax
  char v4; // al
  _DWORD *v5; // ecx
  __int64 v6; // [esp-8h] [ebp-10h]
  __int64 v7; // [esp-8h] [ebp-10h]
  __int64 v8; // [esp-8h] [ebp-10h]
  __int64 v9; // [esp-8h] [ebp-10h]
  __int64 v10; // [esp-8h] [ebp-10h]
  __int64 v11; // [esp-8h] [ebp-10h]

  if ( !*(_DWORD *)(this + 968) || (v2 = sub_101679A0(*(_DWORD *)(this + 968)), sub_10167A00(v2) == 1) )
  {
    v3 = *(_DWORD *)(dword_106B31C8 + 72);
    if ( v3 == 2 )
    {
      HIDWORD(v6) = this;
      LODWORD(v6) = 0;
      sub_1010DD80((_DWORD *)(this + 872), v6, 0.0);
    }
    else if ( v3 )
    {
      if ( v3 == 1 )
      {
        HIDWORD(v8) = this;
        LODWORD(v8) = 0;
        sub_1010DD80((_DWORD *)(this + 848), v8, 0.0);
      }
      else if ( v3 == 3 )
      {
        HIDWORD(v9) = this;
        LODWORD(v9) = 0;
        sub_1010DD80((_DWORD *)(this + 896), v9, 0.0);
      }
    }
    else
    {
      HIDWORD(v7) = this;
      LODWORD(v7) = 0;
      sub_1010DD80((_DWORD *)(this + 824), v7, 0.0);
    }
    HIDWORD(v10) = this;
    LODWORD(v10) = 0;
    sub_1010DD80((_DWORD *)(this + 800), v10, 0.0);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 140))(dword_106B3CDC);
      HIDWORD(v11) = this;
      LODWORD(v11) = 0;
      v5 = (_DWORD *)(this + 944);
      if ( !v4 )
        v5 = (_DWORD *)(this + 920);
      sub_1010DD80(v5, v11, 0.0);
    }
    if ( (*(_BYTE *)(this + 248) & 1) != 0 )
      sub_1025FAC0(this);
  }
}
