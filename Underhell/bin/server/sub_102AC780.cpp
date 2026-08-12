void __thiscall sub_102AC780(_BYTE *this, char ArgList)
{
  _DWORD *v2; // eax
  char Buffer[64]; // [esp+0h] [ebp-60h] BYREF
  _BYTE v4[8]; // [esp+40h] [ebp-20h] BYREF
  int v5; // [esp+48h] [ebp-18h]
  int v6; // [esp+54h] [ebp-Ch]
  int v7; // [esp+58h] [ebp-8h]

  if ( this[1080] )
  {
    sub_10429A00(Buffer, 0x40u, "%s_spore", ArgList);
    v2 = sub_1012BF20(&dword_1069E3E0, 0, Buffer, 0, 0, 0, 0);
    if ( v2 )
    {
      if ( !*((_BYTE *)v2 + 800) )
      {
        v5 = 0;
        v6 = -1;
        v7 = 0;
        sub_10285150((int)v2, (int)v4);
      }
    }
  }
}
