int __thiscall sub_1008A7C0(_DWORD *this)
{
  int v2; // eax
  int v3; // edi

  v2 = *((unsigned __int16 *)this + 24);
  if ( (_WORD)v2 != 0xFFFF )
  {
    do
    {
      v3 = *(unsigned __int16 *)(168 * (unsigned __int16)v2 + this[9] + 166);
      (*(void (__thiscall **)(_DWORD *, int))(*this + 68))(this, v2);
      v2 = v3;
    }
    while ( (_WORD)v3 != 0xFFFF );
  }
  if ( *((_BYTE *)this + 208) )
    sub_10089D70((int)(this + 16));
  return sub_10229140(&unk_1042C498, -1);
}
