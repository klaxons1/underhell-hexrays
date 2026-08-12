int __thiscall sub_10181CF0(_DWORD *this)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  int v5; // edx
  int v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // eax
  int v10; // ecx
  int v12; // [esp+10h] [ebp-Ch] BYREF
  int v13; // [esp+14h] [ebp-8h] BYREF
  int v14; // [esp+18h] [ebp-4h]

  v2 = this[75];
  v3 = 0;
  if ( v2 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 36))(v2) )
  {
    v4 = this[76];
    if ( v4 )
    {
      v5 = this[63];
      this[75] = v4;
      (*(void (__thiscall **)(_DWORD *, int, int))(v5 + 4))(this + 63, v4, 1);
      this[76] = 0;
    }
    else
    {
      this[75] = 0;
    }
  }
  sub_10248CA0(*((float *)off_103DC81C + 3));
  sub_102446D0(*(_DWORD *)(dword_104453F4 + 48) != 0);
  v14 = this[72];
  if ( v14 > 0 )
  {
    do
    {
      v6 = *(_DWORD *)(this[69] + 4 * v3);
      if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 20))(v6)
        && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v6 + 36))(v6) )
      {
        (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 16))(v6);
      }
      ++v3;
    }
    while ( v3 < v14 );
  }
  v7 = dword_1047CA70;
  v8 = *(_DWORD *)dword_1047CA70;
  v9 = (*(int (__thiscall **)(int, int, int *, int *))(*(_DWORD *)dword_1041317C + 4))(dword_1041317C, 2, &v13, &v12);
  (*(void (__thiscall **)(int, int))(v8 + 20))(v7, v9);
  v10 = v12;
  if ( this[79] != v13 || this[80] != v12 )
  {
    this[79] = v13;
    this[80] = v10;
    (*(void (__thiscall **)(int))(*(_DWORD *)dword_1044CC48 + 28))(dword_1044CC48);
  }
  return sub_1023E950(this);
}
