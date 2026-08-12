void __thiscall sub_103AEE20(int this, int a2)
{
  float v3; // [esp+0h] [ebp-Ch]

  v3 = 0.0;
  if ( *(_BYTE *)(this + 3624) )
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Strider.StriderBusterExplode", v3, 0);
    sub_1023C380((_DWORD *)this, (int)"explode_5", 0.0, 0);
  }
  else
  {
    sub_1023C380((_DWORD *)this, (int)"NPC_Strider.Death", v3, 0);
  }
}
