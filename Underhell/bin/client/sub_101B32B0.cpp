bool __thiscall sub_101B32B0(int *this)
{
  if ( !this[69]
    || !this[72]
    || !this[74]
    || !this[73]
    || !this[75]
    || !sub_100422D0()
    || !*(_DWORD *)(dword_10430B6C + 48) )
  {
    return 0;
  }
  return sub_100B68D0(this)
      && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_1041315C + 112))(dword_1041315C);
}
