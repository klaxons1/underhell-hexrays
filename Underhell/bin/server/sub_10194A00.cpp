int __thiscall sub_10194A00(int this, int a2)
{
  int result; // eax
  int v4; // edi
  _DWORD *v5; // [esp+4h] [ebp-10h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  result = sub_1025FC50();
  if ( result )
  {
    result = *(_DWORD *)(this + 1124);
    if ( result != 1 && !*(_BYTE *)(this + 1168) && result != 4 )
    {
      sub_10192560(this, (int)&savedregs);
      v4 = this + 1092;
      if ( *(_DWORD *)(this + 1092) )
      {
        sub_1023C380((int)"EDIT.ToggleAttribute", 0.0, 0);
        *(_WORD *)(*(_DWORD *)v4 + 40) ^= a2;
        if ( a2 == 256 )
        {
          v5 = (_DWORD *)(this + 1092);
          if ( (*(_WORD *)(*(_DWORD *)v4 + 40) & 0x100) != 0 )
            sub_10194990((int *)(this + 1296), *(_DWORD *)(this + 1308), v5);
          else
            sub_1023E0F0(v5);
        }
      }
      result = 0;
      *(_DWORD *)(this + 1180) = 0;
      *(_DWORD *)(this + 1088) = 0;
      *(_DWORD *)(this + 1100) = 4;
    }
  }
  return result;
}
