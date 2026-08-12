int __thiscall sub_1003CDE0(_DWORD *this, char ArgList, int a3, int a4)
{
  int v5; // ebx
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  int v10; // [esp-4h] [ebp-8Ch]
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
    sub_10228370(Buffer, 0x40u, "%s RestoreData(original)", ArgList);
  else
    sub_10228370(Buffer, 0x40u, "%s RestoreData(slot %02i)", ArgList);
  v6 = (*(int (__thiscall **)(_DWORD *))(*this + 196))(this) & 0x20;
  sub_101096C0(a4, this, 0, v5, 1, 0, 0, 1, 0, 0);
  v10 = (*(int (__thiscall **)(_DWORD *))(*this + 60))(this);
  v7 = (*(int (__thiscall **)(_DWORD *))(this[2] + 36))(this + 2);
  v8 = sub_1010AF80(Buffer, v7, v10);
  this[78] = v6 | this[78] & 0xFFFFFFDF;
  sub_1003C7D0((int)this);
  return v8;
}
