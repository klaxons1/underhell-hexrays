int __thiscall sub_103D6190(_DWORD *this)
{
  double v2; // st7
  void (__noreturn ***v3)(); // eax
  float v5; // [esp+14h] [ebp-14h]
  float v6; // [esp+24h] [ebp-4h]
  float v7; // [esp+24h] [ebp-4h]

  v6 = 8.0;
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1)
    && *(_DWORD *)(dword_10698344 + 48) )
  {
    v6 = 12.0;
  }
  if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)dword_106B3CDC + 172))(dword_106B3CDC, 1)
    && *(_DWORD *)(dword_10698344 + 48) )
  {
    v2 = 12.0;
  }
  else
  {
    v2 = (float)8.0;
  }
  v7 = v6 - (v2 - 1.0);
  if ( this[289] )
  {
    v3 = sub_1023DBA0();
    ((void (__thiscall *)(void (__noreturn ***)(), _DWORD, _DWORD, float))(*v3)[11])(
      v3,
      this[289],
      150.0,
      COERCE_FLOAT(LODWORD(v7)));
  }
  v5 = *(float *)(dword_106B31C8 + 12) + v7;
  return sub_100EC3F0(this, (int)sub_103D5840, v5, off_1067E558);
}
