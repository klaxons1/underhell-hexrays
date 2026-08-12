_DWORD *__thiscall sub_100F6300(int this, _DWORD *a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // eax
  int (*v6)(void); // eax
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // eax

  if ( (*(_DWORD *)(this + 3416) & 8) != 0 )
  {
    v2 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 120))(dword_106B3CDC);
    *a2 = v2[21];
    v3 = v2[22];
    v4 = v2[23];
    a2[1] = v3;
    a2[2] = v4;
    return a2;
  }
  else
  {
    v6 = *(int (**)(void))(*(_DWORD *)dword_106B3CDC + 120);
    if ( (*(_BYTE *)(this + 256) & 2) != 0 )
    {
      v7 = (_DWORD *)v6();
      *a2 = v7[12];
      v8 = v7[13];
      v9 = v7[14];
    }
    else
    {
      v10 = (_DWORD *)v6();
      *a2 = v10[6];
      v8 = v10[7];
      v9 = v10[8];
    }
    a2[1] = v8;
    a2[2] = v9;
    return a2;
  }
}
