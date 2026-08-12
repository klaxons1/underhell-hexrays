int __thiscall sub_10039F80(int this, char a2)
{
  int v3; // edx
  int v4; // eax

  v3 = *(_DWORD *)(this + 4);
  *(_BYTE *)(this + 168) = a2;
  if ( !(*(unsigned __int8 (__thiscall **)(int))(v3 + 12))(this + 4)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 8) + 32))(this + 8)
    || (unsigned __int8)sub_101BC880() && !*(_BYTE *)(this + 168) )
  {
    return sub_10036200((unsigned __int16 *)this);
  }
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 344))(this);
  return sub_10036100(this, v4);
}
