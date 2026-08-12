int __thiscall sub_102FB060(int this)
{
  int result; // eax

  if ( *(_BYTE *)(this + 4125) )
  {
    result = sub_1023B860((_DWORD *)this, (int)"NPC_Antlion.WingsOpen");
    *(_BYTE *)(this + 4125) = 0;
  }
  if ( *(_BYTE *)(this + 4093) )
  {
    result = sub_1023B860((_DWORD *)this, (int)"NPC_Antlion.LoopingAgitated");
    *(_BYTE *)(this + 4093) = 0;
  }
  return result;
}
