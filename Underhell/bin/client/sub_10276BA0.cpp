int __thiscall sub_10276BA0(int *this)
{
  int *v2; // esi
  int i; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  _DWORD *v8; // edx
  int v9; // ecx
  int v10; // eax
  bool v11; // zf
  _DWORD *v12; // edi
  _DWORD *v13; // esi
  int v14; // eax
  _DWORD *v15; // eax
  _DWORD *v17; // [esp+8h] [ebp-4h]

  v2 = this + 69;
  this[72] = 0;
  for ( i = this[56]; i != -1; i = *(_DWORD *)(this[53] + v7 + 8) )
  {
    v4 = v2[3];
    v5 = 3 * i;
    v6 = v2[1];
    v7 = 4 * v5;
    v8 = (_DWORD *)(v7 + this[53]);
    v17 = v8;
    if ( v4 + 1 > v6 )
    {
      sub_102AA460(v4 - v6 + 1);
      v8 = v17;
    }
    ++v2[3];
    v9 = *v2;
    v10 = v2[3] - v4 - 1;
    v11 = v2[3] - v4 == 1;
    v2[4] = *v2;
    if ( v10 >= 0 && !v11 )
    {
      memcpy((void *)(v9 + 4 * v4 + 4), (const void *)(v9 + 4 * v4), 4 * v10);
      v8 = v17;
    }
    v12 = (_DWORD *)(*v2 + 4 * v4);
    if ( v12 )
      *v12 = *v8;
  }
  v13 = (_DWORD *)sub_10229D00(32);
  if ( v13 )
  {
    v14 = (*(int (__thiscall **)(int *))(*this + 772))(this);
    v15 = sub_1022B1A0(v13, (int)"TreeViewItemSelected", "itemIndex", v14);
  }
  else
  {
    v15 = 0;
  }
  (*(void (__thiscall **)(int *, _DWORD *))(*this + 180))(this, v15);
  return (*(int (__thiscall **)(int *, _DWORD, _DWORD))(*this + 244))(this, 0, 0);
}
