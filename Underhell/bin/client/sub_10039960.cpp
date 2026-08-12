int __thiscall sub_10039960(int this, int a2)
{
  unsigned __int8 (__thiscall *v3)(int); // edx
  int v4; // eax

  v3 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 4) + 12);
  *(_BYTE *)(this + 322) = a2;
  if ( !v3(this + 4)
    || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)(this + 8) + 32))(this + 8)
    || (unsigned __int8)sub_101BC880() && !*(_BYTE *)(this + 168) )
  {
    sub_10036200((unsigned __int16 *)this);
    return sub_100E9800(a2);
  }
  else
  {
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 344))(this);
    sub_10036100(this, v4);
    return sub_100E9800(a2);
  }
}
