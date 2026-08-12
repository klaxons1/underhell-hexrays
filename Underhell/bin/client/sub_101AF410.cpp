int __thiscall sub_101AF410(_DWORD *this, char *Str)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 44))(this, 0);
  this[69] = 0;
  v3 = *((unsigned __int8 *)this + 260);
  *((_BYTE *)this + 296) = 0;
  this[75] = v3;
  this[77] = 3;
  if ( sub_10229D00(32) )
    v4 = sub_10229D20("CreditsFile");
  else
    v4 = 0;
  if ( dword_10413188 )
    v5 = dword_10413188 + 4;
  else
    v5 = 0;
  if ( (unsigned __int8)sub_10229D70(v5, "scripts/credits.txt", "MOD") )
  {
    if ( Str )
    {
      v6 = sub_1022A6A0(Str, 0);
      sub_101AF2F0(this, v6);
    }
    v7 = sub_1022A6A0("CreditsParams", 0);
    sub_101AE3F0((int)this, v7);
  }
  return sub_1022AF00(v4);
}
