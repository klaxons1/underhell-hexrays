bool __thiscall sub_103C7470(int this)
{
  return !*(_DWORD *)(this + 5732)
      && *(_BYTE *)(this + 5752)
      && !*(_BYTE *)(this + 2680)
      && *(_DWORD *)(this + 2324) != 4
      && !sub_100697A0((_DWORD *)this, 101, 1)
      && !(*(int (__thiscall **)(int))(*(_DWORD *)this + 368))(this)
      && !sub_103C6DB0((float *)this)
      && !sub_1004AE70((_DWORD *)this, 8, 8);
}
