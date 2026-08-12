int __thiscall sub_101A13A0(int this, int a2)
{
  int result; // eax
  float v4; // [esp+4h] [ebp-8h]

  *(_BYTE *)(this + 4992) = 0;
  result = sub_100209B0((void *)this, a2);
  if ( *(_DWORD *)(this + 5020) )
  {
    v4 = RandomFloat(0.0, 1.0);
    return sub_10078870((_DWORD *)this, "casual", v4);
  }
  return result;
}
