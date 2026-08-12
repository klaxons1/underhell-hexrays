void __thiscall sub_1007E810(_DWORD **this)
{
  char *v2; // eax
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v2 = sub_1001E280(Buffer, "[Nav] %s", "Schedule change\n");
    sub_10029660(this[1], (int)v2);
  }
}
