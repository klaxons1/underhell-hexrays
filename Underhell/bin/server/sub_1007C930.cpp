int __thiscall sub_1007C930(int this, float a2)
{
  int v3; // ecx
  int result; // eax

  if ( *(_BYTE *)(this + 8) )
  {
    if ( !(unsigned __int8)sub_100B8D10(*(_DWORD *)(this + 4) + 2760) )
      sub_100B8C80(0);
    v3 = *(_DWORD *)(this + 4);
    *(_BYTE *)(this + 8) = 0;
    (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 1992))(v3);
  }
  result = dword_106B31C8;
  *(float *)(this + 16) = *(float *)(dword_106B31C8 + 12) + a2;
  return result;
}
