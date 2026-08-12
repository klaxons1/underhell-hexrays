int __thiscall sub_10039310(int this)
{
  int v2; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 4) + 12))(this + 4)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 8) + 32))(this + 8)
    || (unsigned __int8)sub_101BC880() && !*(_BYTE *)(this + 168) )
  {
    return sub_10036200((unsigned __int16 *)this);
  }
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 344))(this);
  return sub_10036100(this, v2);
}
