_DWORD *__thiscall sub_10184B50(_DWORD *this, int a2, char *Source, int a4)
{
  int v5; // edi
  int v6; // edi
  int v7; // edi

  sub_1026D6B0((int)this, a2, Source);
  *this = &CommandMenu::`vftable';
  if ( !byte_104454E8 )
  {
    byte_104454E8 = 1;
    v5 = sub_10242540("CommandMenu");
    *(_DWORD *)(v5 + 28) = sub_10184740;
    *(_DWORD *)(v5 + 24) = sub_10242540("Menu");
  }
  if ( !byte_104454E9 )
  {
    byte_104454E9 = 1;
    v6 = sub_102484C0("CommandMenu");
    *(_DWORD *)(v6 + 24) = sub_10184740;
    *(_DWORD *)(v6 + 20) = sub_102484C0("Menu");
  }
  if ( !byte_104454EA )
  {
    byte_104454EA = 1;
    v7 = sub_10242580("CommandMenu");
    *(_DWORD *)(v7 + 68) = sub_10184740;
    *(_DWORD *)(v7 + 24) = sub_10242580("Menu");
  }
  this[167] = 0;
  this[168] = 0;
  this[169] = 0;
  this[170] = 0;
  this[171] = 0;
  this[172] = 0;
  this[173] = 0;
  this[174] = 0;
  this[175] = 0;
  this[176] = 0;
  if ( a4 )
  {
    this[99] = a4;
    sub_1026D510(0);
    this[100] = this;
    this[166] = 0;
  }
  return this;
}
