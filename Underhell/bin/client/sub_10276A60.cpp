void __thiscall sub_10276A60(int *this, int a2, char a3, char a4, char a5)
{
  int v6; // ebp
  int v7; // ecx
  int v8; // ebx
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // edx
  _DWORD *v12; // eax
  _DWORD *v13; // eax

  if ( a3 )
    (*(void (__thiscall **)(int *))(*this + 816))(this);
  v6 = a2;
  if ( a2 >= 0 && a2 < this[54] && a2 <= this[60] )
  {
    v7 = 12 * a2 + this[53];
    if ( *(_DWORD *)(v7 + 4) != a2 || *(_DWORD *)(v7 + 8) == a2 )
    {
      v8 = *(_DWORD *)(12 * a2 + this[53]);
      a2 = v8;
      if ( a4 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 48))(v8, 0);
      v9 = this[72];
      v10 = 0;
      if ( v9 <= 0 )
        goto LABEL_14;
      v11 = (_DWORD *)this[69];
      while ( *v11 != v8 )
      {
        ++v10;
        ++v11;
        if ( v10 >= v9 )
          goto LABEL_14;
      }
      if ( v10 == -1 )
      {
LABEL_14:
        sub_10258C50(this + 69, 0, &a2);
      }
      else if ( v10 )
      {
        sub_102750B0(this + 69, v10);
        sub_10258C50(this + 69, 0, &a2);
      }
      if ( a5 )
        (*(void (__thiscall **)(int *, int))(*this + 896))(this, v6);
      v12 = (_DWORD *)sub_10229D00(32);
      if ( v12 )
        v13 = sub_1022B1A0(v12, (int)"TreeViewItemSelected", "itemIndex", v6);
      else
        v13 = 0;
      (*(void (__thiscall **)(int *, _DWORD *))(*this + 180))(this, v13);
      (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
      if ( a3 )
        this[75] = v6;
    }
  }
}
