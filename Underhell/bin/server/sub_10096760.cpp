bool __thiscall sub_10096760(int this, _BYTE *a2)
{
  _BYTE *v2; // eax
  char v4; // al
  _DWORD v6[2]; // [esp+4h] [ebp-8h] BYREF

  v2 = a2;
  if ( !a2 || !*a2 )
    v2 = 0;
  v6[0] = v2;
  *(float *)&v6[1] = -1.0;
  v4 = sub_10095150((_BYTE *)(this + 812), (int)v6);
  return v4 == -1 || *(float *)(dword_106B31C8 + 12) - *(float *)(*(_DWORD *)(this + 816) + 12 * v4 + 8) > -0.001;
}
