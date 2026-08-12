void __thiscall sub_101B9BA0(_BYTE *this, int a2)
{
  int v2; // edi
  int v3; // esi

  if ( this[52] )
  {
    v2 = (*(int (__thiscall **)(_BYTE *, int))(*((_DWORD *)this - 1) + 4))(this - 4, a2);
    if ( sub_10229D00(32) )
      v3 = sub_10229D20("created");
    else
      v3 = 0;
    sub_101BC9C0(v2, v3);
    sub_1022AF00(v3);
  }
}
