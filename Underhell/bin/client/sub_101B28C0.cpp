char __thiscall sub_101B28C0(_BYTE *this)
{
  int v2; // eax
  const char *v4; // [esp-4h] [ebp-8h]

  v2 = sub_100422D0();
  if ( v2 )
  {
    LOBYTE(v2) = *(_BYTE *)(v2 + 3682);
    if ( (_BYTE)v2 != this[240] )
    {
      this[240] = v2;
      if ( (_BYTE)v2 )
      {
        (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 124))(this, 1);
        v4 = "PoisonDamageTaken";
      }
      else
      {
        v4 = "PoisonDamageCured";
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 36))(dword_1044CC48);
      LOBYTE(v2) = sub_10248C80(v4);
    }
  }
  return v2;
}
