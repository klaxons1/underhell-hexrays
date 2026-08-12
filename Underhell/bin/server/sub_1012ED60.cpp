int __thiscall sub_1012ED60(_DWORD *this, int a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // ebx
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+Ch] [ebp-8h]
  _DWORD *i; // [esp+10h] [ebp-4h]
  _DWORD *v12; // [esp+10h] [ebp-4h]
  int v13; // [esp+1Ch] [ebp+8h]
  int v14; // [esp+1Ch] [ebp+8h]

  sub_1012EC80(this);
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
  v9 = v4;
  if ( v4 < 5 )
  {
    v7 = 0;
    v14 = 0;
    v12 = this + 320200;
    while ( v14 < v4 )
    {
      *v12 = (char *)&this[v7 + 200] + (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
      (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 72))(a2, &this[v7 + 200], 256000, 0);
      ++v14;
      ++v12;
      v4 = v9;
      v7 += 64000;
    }
  }
  else
  {
    v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
    v6 = 0;
    v10 = v5;
    v13 = 0;
    for ( i = this + 320200; ; ++i )
    {
      if ( v5 >= 5 )
        v5 = 5;
      if ( v13 >= v5 )
        break;
      *i = (char *)&this[v6 + 200] + (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 56))(a2);
      (*(void (__thiscall **)(int, _DWORD *, int, _DWORD))(*(_DWORD *)a2 + 72))(a2, &this[v6 + 200], 256000, 0);
      ++v13;
      v5 = v10;
      v6 += 64000;
    }
  }
  return sub_100E82A0((float *)this, a2);
}
