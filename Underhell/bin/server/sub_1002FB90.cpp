int __thiscall sub_1002FB90(int this)
{
  int result; // eax
  _BYTE v3[4]; // [esp+4h] [ebp-4h] BYREF

  dword_10690428 = *(char **)sub_10162BE0(v3, "player_squad");
  if ( *(_BYTE *)(this + 2164) && byte_1069362C )
  {
    sub_1006AAC0();
    if ( !(unsigned __int8)sub_100846A0(0, 0) )
    {
      sub_1002FA60((float *)this);
      result = sub_100C6890(this);
      *(_BYTE *)(this + 3545) = 1;
      return result;
    }
  }
  else
  {
    sub_10081C10(*(_DWORD *)(this + 2588));
  }
  result = sub_100C6890(this);
  *(_BYTE *)(this + 3545) = 1;
  return result;
}
