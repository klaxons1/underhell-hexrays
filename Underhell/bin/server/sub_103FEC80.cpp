void __thiscall sub_103FEC80(float this, char a2, char a3)
{
  _BYTE *v5; // esi
  unsigned int v6; // eax
  void (__noreturn ***v7)(); // ebx
  void (__noreturn **v8)(); // esi
  int v9; // eax
  void (__noreturn ***v10)(); // ebx
  void (__noreturn **v11)(); // esi
  int v12; // eax
  int v13; // [esp+20h] [ebp-4h]
  int v14; // [esp+30h] [ebp+Ch]

  if ( *(_BYTE *)(LODWORD(this) + 1393) )
  {
    v5 = (_BYTE *)sub_100D1940((_DWORD *)LODWORD(this));
    if ( v5 && (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)v5 + 320))(v5) )
    {
      v13 = (int)v5;
      sub_102E0DB0(v5, 1);
      sub_100EA7B0((int)v5, *(float *)(dword_106E0734 + 44));
      if ( a3 )
        sub_101E3110(v5, 2u, 0, 4u);
    }
    else
    {
      v13 = 0;
    }
    v6 = *(_DWORD *)(LODWORD(this) + 9772);
    if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(LODWORD(this) + 9772) & 0xFFF) + 2] != v6 >> 12 )
      v14 = 0;
    else
      v14 = off_1061BE18[4 * (*(_DWORD *)(LODWORD(this) + 9772) & 0xFFF) + 1];
    sub_103FA2C0((_DWORD *)(LODWORD(this) + 1500), a3);
    if ( v14 )
      sub_101FB150(v14, v13, (a3 != 0) + 2);
    if ( sub_103FB400((_DWORD *)LODWORD(this), this) )
    {
      v7 = sub_1023DBA0();
      v8 = *v7;
      v9 = sub_103FB400((_DWORD *)LODWORD(this), this);
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v8[12])(v7, v9, 0.0, 1.0);
      v10 = sub_1023DBA0();
      v11 = *v10;
      v12 = sub_103FB400((_DWORD *)LODWORD(this), this);
      ((void (__thiscall *)(void (__noreturn ***)(), int, _DWORD, _DWORD))v11[11])(v10, v12, 50.0, 1.0);
    }
    *(_BYTE *)(LODWORD(this) + 1393) = 0;
    if ( a2 )
      (*(void (__thiscall **)(float, int, _DWORD))(*(_DWORD *)LODWORD(this) + 1132))(
        COERCE_FLOAT(LODWORD(this)),
        9,
        0.0);
    sub_103FE950((_DWORD *)LODWORD(this), v14);
  }
}
