void __thiscall sub_10276EF0(int this, int a2)
{
  int v3; // eax
  int (__thiscall **v4)(int, _DWORD); // edx
  int v5; // edi
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax

  if ( *(_BYTE *)(this + 948) )
  {
    sub_10251A30((_BYTE *)this, a2);
  }
  else
  {
    if ( !*(_BYTE *)(this + 970) || (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 644))(this) )
    {
      *(_BYTE *)(this + 970) = 0;
    }
    else
    {
      *(_BYTE *)(this + 970) = 0;
      *(_BYTE *)(this + 969) = 1;
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)dword_1047CA80 + 24))(dword_1047CA80);
      v4 = *(int (__thiscall ***)(int, _DWORD))this;
      *(_DWORD *)(this + 972) = v3;
      v5 = dword_1047CA74;
      v6 = *(_DWORD *)dword_1047CA74;
      v7 = (*v4)(this, 0);
      (*(void (__thiscall **)(int, int))(v6 + 72))(v5, v7);
    }
    v8 = (_DWORD *)sub_10229D00(32);
    if ( v8 )
    {
      v9 = sub_1022B1A0(v8, (int)"MouseReleased", "code", a2);
      sub_10236860((void *)this, v9);
    }
    else
    {
      sub_10236860((void *)this, 0);
    }
  }
}
