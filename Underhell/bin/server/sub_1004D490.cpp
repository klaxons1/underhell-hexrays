bool __thiscall sub_1004D490(int this)
{
  bool v3; // zf

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 1268))(*(_DWORD *)(this + 4))
    || sub_10023D10(*(_DWORD **)(this + 4), 64)
    || *(float *)(dword_106B31C8 + 12) < (double)*(float *)(this + 44) )
  {
    return 0;
  }
  if ( !*(_DWORD *)(this + 28) )
    return 0;
  if ( (unsigned __int8)sub_102DC130(this + 20) || (unsigned __int8)sub_102DC130(this + 24) )
  {
    *(_DWORD *)(this + 28) = 0;
    *(_WORD *)(this + 36) = 0;
    return 0;
  }
  if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 4) + 368))(*(_DWORD *)(this + 4)) )
    *(float *)(this + 40) = *(float *)(dword_106B31C8 + 12);
  if ( sub_1004CF10(this) )
  {
    *(_BYTE *)(this + 38) = 1;
    return *(_BYTE *)(this + 38) == 0;
  }
  else
  {
    v3 = *(_BYTE *)(this + 38) == 0;
    if ( *(_BYTE *)(this + 38) )
    {
      sub_1004C1E0((char **)this, 25);
      *(_BYTE *)(this + 38) = 0;
      return 1;
    }
    return v3;
  }
}
