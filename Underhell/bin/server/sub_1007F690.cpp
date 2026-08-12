int __thiscall sub_1007F690(int this)
{
  char *v2; // eax
  int result; // eax
  char Buffer[256]; // [esp+4h] [ebp-100h] BYREF

  if ( *(_DWORD *)(dword_106934A4 + 48) )
  {
    v2 = sub_1001E280(Buffer, "[Nav] %s", "Nav complete\n");
    sub_10029660(*(_DWORD **)(this + 4), (int)v2);
  }
  sub_1007E850(this);
  result = sub_1003AB20(*(int **)(this + 4));
  *(_BYTE *)(this + 16) = 1;
  return result;
}
