_DWORD *__thiscall sub_10012390(_BYTE *this, _DWORD *a2)
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
    *a2 = v3[18];
    v4 = v3[19];
    v5 = v3[20];
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
      *a2 = v8[9];
      v9 = v8[10];
      v10 = v8[11];
    }
    else
    {
      v11 = (_DWORD *)v7(dword_10412D50);
      *a2 = v11[3];
      v9 = v11[4];
      v10 = v11[5];
    }
    a2[1] = v9;
    a2[2] = v10;
    return a2;
  }
}
