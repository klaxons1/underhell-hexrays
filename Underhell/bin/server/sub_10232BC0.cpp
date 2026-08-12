void __thiscall sub_10232BC0(int this, int a2)
{
  unsigned int v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  int v6; // ecx
  bool v7; // [esp+Ch] [ebp-4h]

  if ( !*(_BYTE *)(this + 889) )
  {
    v3 = *(_DWORD *)(this + 880);
    if ( v3 != -1
      && off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 2] == v3 >> 12
      && (v4 = off_1061BE18[4 * (*(_DWORD *)(this + 880) & 0xFFF) + 1]) != 0
      && (v5 = (_DWORD *)sub_100D7680(v4)) != 0 )
    {
      v6 = v5[671];
      if ( !v6 || v6 == 2 )
      {
        v7 = (*(_BYTE *)(this + 248) & 0x40) != 0;
        if ( (*(int (__thiscall **)(_DWORD *, bool, int))(*v5 + 1588))(v5, v7, 1) )
        {
          sub_10232210(this);
          *(_BYTE *)(this + 860) = 1;
        }
      }
    }
    else
    {
      *(_BYTE *)(this + 877) = 0;
      *(_BYTE *)(this + 888) = 1;
      sub_100EC3F0((_DWORD *)this, (int)sub_102326C0, 0.0, 0);
      sub_100EC4A0((int *)this, *(float *)(dword_106B31C8 + 12), 0);
      *(_BYTE *)(this + 860) = 1;
    }
  }
}
