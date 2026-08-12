int __thiscall sub_100351D0(_DWORD *this, char ArgList, int a3, int a4)
{
  int v5; // ebx
  int v6; // eax
  int v8; // [esp-4h] [ebp-8Ch]
  char Buffer[64]; // [esp+Ch] [ebp-7Ch] BYREF

  if ( a3 == -1 )
  {
    v5 = this[275];
  }
  else if ( this[275] )
  {
    v5 = this[a3 % 90 + 185];
  }
  else
  {
    v5 = 0;
  }
  if ( a3 == -1 )
  {
    sub_10228370(Buffer, 0x40u, "%s SaveData(original)", ArgList);
  }
  else
  {
    sub_10228370(Buffer, 0x40u, "%s SaveData(slot %02i)", ArgList);
    this[276] = a3;
  }
  sub_101096C0(a4, v5, 1, this, 0, 0, 0, 1, 0, 0);
  v8 = (*(int (__thiscall **)(_DWORD *))(*this + 60))(this);
  v6 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
  return sub_1010AF80(Buffer, v6, v8);
}
