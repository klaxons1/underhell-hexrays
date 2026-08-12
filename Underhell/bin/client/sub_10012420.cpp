_DWORD *__thiscall sub_10012420(_BYTE *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  int v4; // edx
  int v5; // eax
  int (__fastcall *v7)(int); // eax
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // eax
  _DWORD *v11; // eax

  if ( (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 844))(this) )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)dword_10412D50 + 120))(dword_10412D50);
    *a2 = v3[21];
    v4 = v3[22];
    v5 = v3[23];
    a2[1] = v4;
    a2[2] = v5;
    return a2;
  }
  else
  {
    v7 = *(int (__fastcall **)(int))(*(_DWORD *)dword_10412D50 + 120);
    if ( (this[732] & 2) != 0 )
    {
      v8 = (_DWORD *)v7(dword_10412D50);
      *a2 = v8[12];
      v9 = v8[13];
      v10 = v8[14];
    }
    else
    {
      v11 = (_DWORD *)v7(dword_10412D50);
      *a2 = v11[6];
      v9 = v11[7];
      v10 = v11[8];
    }
    a2[1] = v9;
    a2[2] = v10;
    return a2;
  }
}
