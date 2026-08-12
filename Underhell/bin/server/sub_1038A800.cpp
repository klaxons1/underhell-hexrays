int __thiscall sub_1038A800(_DWORD *this, const void *a2)
{
  int (__fastcall *v3)(_DWORD *); // edx
  int v4; // ebx
  _DWORD *v5; // esi
  int v6; // edi
  int result; // eax
  _DWORD v8[22]; // [esp+8h] [ebp-5Ch] BYREF
  _DWORD *v9; // [esp+60h] [ebp-4h]
  int v10; // [esp+6Ch] [ebp+8h]

  v3 = *(int (__fastcall **)(_DWORD *))(*this + 368);
  v9 = this;
  v4 = v3(this);
  if ( !v4 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 320))(v4) || !this[1067] )
    return sub_1002ABF0(this, a2);
  qmemcpy(v8, a2, sizeof(v8));
  v5 = v9;
  if ( v9[1058] >= v9[1059] )
  {
    v8[19] = v4;
    return sub_1002ABF0(v9, v8);
  }
  else
  {
    if ( !sub_1038A110(v9) && *(_BYTE *)(v4 + 447) != 3 )
      v8[16] |= 2u;
    v6 = *(_DWORD *)(v4 + 220);
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1572))(v4);
    result = sub_1002ABF0(v5, v8);
    if ( *(_DWORD *)(v4 + 220) < v6 || (result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 1572))(v4), result < v10) )
      ++v5[1058];
  }
  return result;
}
