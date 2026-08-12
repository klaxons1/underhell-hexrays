int __thiscall sub_100486C0(int this, int a2)
{
  int result; // eax
  int v4; // eax
  int v5; // edx
  float v6; // [esp+0h] [ebp-110h]
  char Destination[260]; // [esp+Ch] [ebp-104h] BYREF

  result = sub_1003CD40((_DWORD *)this, a2);
  if ( !a2 && !*(_DWORD *)(this + 1448) )
  {
    sub_102282F0(Destination, (char *)(this + 1188), 0x104u);
    v4 = sub_10091ED0(Destination, 0);
    v5 = *(_DWORD *)(this - 8);
    *(_DWORD *)(this + 1448) = v4;
    v6 = (float)(v4 != 0 ? -1293 : -1);
    return (*(int (__stdcall **)(_DWORD))(v5 + 408))(LODWORD(v6));
  }
  return result;
}
