void __thiscall sub_102969F0(_BYTE *this)
{
  int v2; // eax
  int v3; // eax

  if ( (unsigned __int8)sub_1004B510(this, 100001, 0) )
  {
    if ( sub_10023D10(*((_DWORD **)this + 1), 10) )
      this[77] = 1;
    v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 52))(this);
    v3 = sub_1007DB30((_DWORD *)(v2 + 52), 100000);
    if ( sub_10023D10(*((_DWORD **)this + 1), v3) )
      this[76] = 1;
  }
  nullsub_4();
}
