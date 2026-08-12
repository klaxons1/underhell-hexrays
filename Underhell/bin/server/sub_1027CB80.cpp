int __thiscall sub_1027CB80(int this)
{
  int v2; // eax
  int v3; // eax
  float v5; // [esp+0h] [ebp-10h]
  double v6; // [esp+8h] [ebp-8h] BYREF

  if ( sub_100D1940((_DWORD *)this) )
  {
    v2 = sub_100D1940((_DWORD *)this);
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 320))(v2) )
    {
      v5 = *(float *)(dword_106B31C8 + 12) + 0.25;
      v3 = sub_100D1940((_DWORD *)this);
      sub_10031BA0(v3, v5);
      v6 = *(float *)(dword_106B31C8 + 12) + 0.25;
      sub_100D2DA0((float *)(this + 1132), &v6);
      v6 = *(float *)(dword_106B31C8 + 12) + 0.25;
      sub_1016A120((float *)(this + 1136), &v6);
    }
  }
  return sub_102B1C30(this);
}
