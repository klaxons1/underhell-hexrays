char __thiscall sub_102B1FE0(int this)
{
  char result; // al
  int v3; // eax
  int v4; // eax
  float v5; // [esp+0h] [ebp-10h]
  double v6; // [esp+8h] [ebp-8h] BYREF

  if ( sub_100BDCE0(this, 206) == -1 )
    return 0;
  if ( sub_100D1940((_DWORD *)this) )
  {
    v3 = sub_100D1940((_DWORD *)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 320))(v3) )
    {
      v5 = *(float *)(dword_106B31C8 + 12) + 0.25;
      v4 = sub_100D1940((_DWORD *)this);
      sub_10031BA0(v4, v5);
      v6 = *(float *)(dword_106B31C8 + 12) + 0.25;
      sub_100D2DA0((float *)(this + 1132), &v6);
      v6 = *(float *)(dword_106B31C8 + 12) + 0.25;
      sub_1016A120((float *)(this + 1136), &v6);
    }
  }
  *(_BYTE *)(this + 1126) = 0;
  result = 1;
  *(float *)(this + 1380) = *(float *)(dword_106B31C8 + 12) + 0.1;
  return result;
}
