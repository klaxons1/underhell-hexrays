void __thiscall sub_10130ED0(_DWORD *this, int a2)
{
  int v3; // eax
  char Buffer[32]; // [esp+4h] [ebp-20h] BYREF

  if ( a2 == 107 )
  {
    if ( this[98] )
    {
      sub_10228370(Buffer, 0x20u, "useitem %i", this[99]);
      (*(void (__thiscall **)(int, char *, int))(*(_DWORD *)dword_1041315C + 24))(dword_1041315C, Buffer, 1);
      sub_10229140(&unk_10439368, 1);
      sub_10237D10(this);
      sub_1025DAD0(Locale);
      v3 = sub_10237D10(this);
      sub_1025D6C0(v3);
    }
  }
}
