int __thiscall sub_1027C960(int this)
{
  int result; // eax
  int v3; // edi
  double v4; // st7
  float v5; // [esp+8h] [ebp-14h]
  float v6; // [esp+18h] [ebp-4h]

  result = sub_100D1940((_DWORD *)this);
  v3 = result;
  if ( result )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 320))(result);
    if ( (_BYTE)result )
    {
      v6 = *(float *)(this + 1232);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 240))(dword_106B3CDC) == 2 )
      {
        v4 = 0.75;
        if ( v6 < 0.75 )
          v4 = v6;
      }
      else
      {
        v4 = v6;
      }
      v5 = v4;
      return (*(int (__thiscall **)(int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 1444))(
               this,
               v3,
               0.5,
               8.0,
               LODWORD(v5),
               5.0);
    }
  }
  return result;
}
