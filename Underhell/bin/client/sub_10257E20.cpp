int __thiscall sub_10257E20(_DWORD *this, int a2, int a3, _DWORD *a4, int a5)
{
  int v6; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // esi
  int v14; // [esp+10h] [ebp-4h]

  v6 = a2;
  v7 = 0;
  v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_1047CA6C + 268))(dword_1047CA6C, a5);
  if ( a2 <= a3 )
  {
    do
    {
      v8 = (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 284))(
             a5,
             *(unsigned __int16 *)(this[56] + 2 * v6++));
      v7 += v8;
    }
    while ( v6 <= a3 );
    v6 = a2;
  }
  v9 = this[76];
  v10 = -1;
  v11 = -1;
  if ( v9 != -1 )
  {
    v11 = this[77];
    v10 = this[76];
    if ( v11 < v9 )
    {
      v10 = this[77];
      v11 = this[76];
    }
  }
  if ( v6 < v10 || v6 >= v11 )
  {
    v12 = a4;
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, a4[2]);
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 40))(dword_1047CA6C, this[82]);
    v12 = a4;
    (*(void (__thiscall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)dword_1047CA6C + 48))(
      dword_1047CA6C,
      *a4,
      a4[1],
      *a4 + v7,
      a4[1] + v14 + 1);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1047CA6C + 72))(dword_1047CA6C, this[83]);
  }
  if ( *((_BYTE *)v12 + 11) )
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)dword_1047CA6C + 80))(dword_1047CA6C, *v12, v12[1]);
    (*(void (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)dword_1047CA6C + 88))(
      dword_1047CA6C,
      this[56] + 2 * a2,
      a3 - a2 + 1,
      0);
  }
  return v7;
}
