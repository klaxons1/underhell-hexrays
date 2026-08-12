int __thiscall sub_1026D510(int this, int a2)
{
  int result; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  result = (*(int (__thiscall **)(int))(*(_DWORD *)this + 128))(this);
  if ( (_BYTE)a2 != (_BYTE)result )
  {
    if ( (_BYTE)a2 )
    {
      if ( (_BYTE)a2 == 1 )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)this + 212))(this);
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 48))(this, 0);
        sub_1026D460(dword_104804E8, this);
      }
      result = sub_10236310((int (__thiscall ***)(void *, int))this, a2);
      *(_BYTE *)(this + 348) &= ~1u;
    }
    else
    {
      v4 = (_DWORD *)sub_10229D00(32);
      if ( v4 )
        v5 = sub_10229D20(v4, (int)"MenuClose");
      else
        v5 = 0;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)this + 180))(this, v5);
      sub_1026BD20((_DWORD *)this, 0);
      sub_1026BAB0((_DWORD *)this, -1);
      sub_1026BD70(dword_104804E8, this);
      result = sub_10236310((int (__thiscall ***)(void *, int))this, a2);
      *(_BYTE *)(this + 348) &= ~1u;
    }
  }
  return result;
}
