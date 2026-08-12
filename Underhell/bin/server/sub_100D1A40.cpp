int __thiscall sub_100D1A40(_DWORD *this, int *a2, int a3, int a4)
{
  unsigned int v5; // eax
  int *v6; // ecx
  int v7; // ecx
  int v8; // edi
  int result; // eax
  int v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // edi
  int v14[3]; // [esp+24h] [ebp-Ch] BYREF

  v5 = this[280];
  if ( v5 == -1 )
    return sub_100E8C70(a2, a3, a4);
  v6 = &off_1061BE18[4 * (this[280] & 0xFFF) + 1];
  if ( v6[1] != v5 >> 12 )
    return sub_100E8C70(a2, a3, a4);
  v7 = *v6;
  if ( !v7 )
    return sub_100E8C70(a2, a3, a4);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 288))(v7);
  if ( !v8 )
    return sub_100E8C70(a2, a3, a4);
  v10 = (*(int (__thiscall **)(_DWORD *))(*this + 92))(this);
  v11 = a2[1];
  v12 = a2[2];
  v14[0] = *a2;
  v14[2] = v12;
  v14[1] = v11;
  v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, *(_DWORD *)(v8 + 24));
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)dword_106B3CDC + 132))(dword_106B3CDC) )
    v13 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(dword_106B31D0, this[6]);
  result = (*(int (__thiscall **)(_DWORD *))(*this + 428))(this);
  if ( a4 == 1 || a4 == 4 )
    return sub_102651C0((int)v14, a3 + 12, v13, result, 0.0, 1, v10, 0);
  return result;
}
