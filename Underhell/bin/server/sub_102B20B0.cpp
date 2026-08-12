char __thiscall sub_102B20B0(int this)
{
  char result; // al
  int v3; // eax
  int v4; // eax
  float v5; // [esp+0h] [ebp-8h]

  if ( sub_100BDCE0(this, 206) == -1 )
    return 0;
  if ( sub_100D1940((_DWORD *)this) )
  {
    v3 = sub_100D1940((_DWORD *)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    {
      v5 = *(float *)(dword_106B31C8 + 12);
      v4 = sub_100D1940((_DWORD *)this);
      sub_10031BA0(v4, v5);
      sub_100D2D00((float *)(this + 1132), (float *)(dword_106B31C8 + 12));
      sub_100D2D50((float *)(this + 1136), (float *)(dword_106B31C8 + 12));
    }
  }
  *(_BYTE *)(this + 1126) = 0;
  result = 1;
  *(float *)(this + 1380) = *(float *)(dword_106B31C8 + 12);
  return result;
}
