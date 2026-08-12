int __thiscall sub_100DDC60(int this, int ArgList)
{
  int result; // eax
  double v4; // st7
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  if ( ArgList > 0 )
  {
    result = 1 << (ArgList - 1);
    if ( (result & *(_DWORD *)(this + 284)) != 0 )
    {
      sub_10228370(Buffer, 0x20u, "menuselect %d\n", ArgList);
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 28))(dword_1041315C);
      *(_DWORD *)(this + 296) = ArgList;
      (*(void (__thiscall **)(int, const char *))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48, "MenuPulse");
      sub_10248C80(Buffer);
      v4 = *(float *)(this + 312);
      *(_BYTE *)(this + 300) = 0;
      *(float *)(this + 288) = v4 + *(float *)off_103DC81C;
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      return sub_10248C80("MenuClose");
    }
  }
  return result;
}
