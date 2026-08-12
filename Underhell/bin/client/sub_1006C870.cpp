char __thiscall sub_1006C870(int this, int a2)
{
  char result; // al

  sub_1003CD40((_DWORD *)this, a2);
  if ( *(_BYTE *)(this + 1185) )
  {
    if ( byte_1043585D )
    {
      byte_1043585D = *(_BYTE *)(this + 1185);
      result = *(_BYTE *)(this + 1184);
    }
    else
    {
      result = sub_100EB260();
      byte_1043585D = *(_BYTE *)(this + 1185);
    }
    byte_1043585C = *(_BYTE *)(this + 1184);
  }
  else
  {
    result = *(_BYTE *)(this + 1185);
    byte_1043585D = result;
    byte_1043585C = *(_BYTE *)(this + 1184);
  }
  return result;
}
